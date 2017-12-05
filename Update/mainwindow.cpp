#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->initValue();
    DetectionWorkDirectory();
    if(UDiskSpecialFileDetection())//U盘文件存在执行线程拷贝
    {
        updateThread = new QUpdateThread();
        updateThread->start();
    }else{
#ifdef DESKTOP
        DESKTOP_SYSTEM;
        //system("/root/Desktop/WORKSPACE/Ameda");
#else
        system("sync");
        iMX6_SYSTEM;
        //        ui->label->setText("为检测到可疑文件!!!");
        /*未检测到U盘文件不开启线程*/
        //        updateThread = new UpdateThread();
        //        updateThread->start();
        //system("/root/AMEDA/Ameda -qws");
#endif
    }
    connect(updateThread,SIGNAL(setProgressRangeSignal(qint64)),this,SLOT(setProgressRangeSlot(qint64)));
    connect(updateThread,SIGNAL(UpdateFileStatusSignal(qint64)),this,SLOT(UpdateFileStatusSlot(qint64)));
    connect(updateThread,SIGNAL(OpenUDiskFileErrorSignal()),this,SLOT(OpenUDiskFileErrorSlot()));
    connect(updateThread,SIGNAL(CreateSysFileErrorSignal()),this,SLOT(CreateSysFileErrorSlot()));
    setWindowFlags(Qt::FramelessWindowHint);

    this->resize(1024,768);
#ifdef __arm__
    this->showFullScreen();
#endif
    //fill background whit color black
    QPalette palette;
    palette.setColor(QPalette::Background,QColor(35,35,35));
    setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::UDiskSpecialFileDetection()
{
    DIR *dir=NULL;
#ifdef DESKTOP
    dir=opendir("/root/Desktop/");
#else
    dir= opendir("/media/sda4/");
#endif
    if(dir==NULL)
    {
        perror("opendir");
        return 0;
    }else {
        perror("opendir");
        struct dirent *entry ;
        while(entry = readdir(dir))
        {
            if(strcmp(entry->d_name,"Ameda")==0)
            {
                qDebug()<<"Name:"<<entry->d_name;
                SLEEP(1000);
                //                break;
                return 1;
            }
        }
    }
    return 0;
}

int MainWindow::DetectionWorkDirectory()
{
    QDir dir("/root/AMEDA/");
    if(!dir.exists()){
        system("mkdir /root/AMEDA/");
        system("chmod 777 -R /root/AMEDA/*");
        return -1;
    }
    return 0;
}

void MainWindow::SLEEP(int ms)
{
    QTime dieTime = QTime::currentTime().addMSecs(ms);
    while ( QTime::currentTime() < dieTime ) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}

void MainWindow::OpenUDiskFileErrorSlot()
{
    //        ui->label->setText("读取U盘文件失败!!!");
#ifdef DESKTOP
    DESKTOP_SYSTEM;
    //    system("/root/Desktop/WORKSPACE/Ameda");
#else
    system("sync");
    iMX6_SYSTEM;
    //    system("/root/AMEDA/Ameda -qws");//执行本地执行文件
#endif
}

void MainWindow::CreateSysFileErrorSlot()
{
    //        ui->label->setText("创建本地文件失败!!!");
#ifdef DESKTOP
    DESKTOP_SYSTEM;
    //    system("/root/Desktop/WORKSPACE/Ameda");
#else
    iMX6_SYSTEM;
    //    system("/root/AMEDA/Ameda -qws");//执行本地执行文件
#endif
}

void MainWindow::UpdateFileStatusSlot(qint64 tempSize)
{
#ifdef DEBUG
    qDebug()<<"1.updateThreadStatusSlot."<<"tempSize="<<tempSize;
#endif
    m_value = tempSize*100/(m_max-m_min);
    m_currentValue = tempSize*100 /(m_max-m_min);
    if(tempSize == m_max)
    {
        disconnect(updateThread,SIGNAL(UpdateFileStatusSignal(qint64)),this,SLOT(UpdateFileStatusSlot(qint64)));
        qDebug()<<"copy file completed.";
        this->hide();
#ifdef DESKTOP
        DESKTOP_SYSTEM;
        //        system("/root/Desktop/WORKSPACE/Ameda");
#else
        iMX6_SYSTEM;
        //        system("/root/AMEDA/Ameda -qws");
#endif
        this->close();
    }
}

void MainWindow::setProgressRangeSlot(qint64 max)
{
    m_min = 0;
    m_max = max;
    qDebug()<<"MaxSize:"<<m_max;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
    drawOuterCircle(&painter);
    drawProgressChart(&painter);
    drawInnerCircle(&painter);
    drawTextValue(&painter);
    drawUpdateText(&painter);
    painter.end();
}

void MainWindow::initValue()
{
    m_currentValue = 0;
    m_value = 0;
    m_max = 0;
    m_min = 0;
    this->mousePressed = false;
    updateTimer = new QTimer(this);
    updateTimer->setInterval(10);
    connect(updateTimer,SIGNAL(timeout()),this,SLOT(updateWidget()));
    updateTimer->start();
}

void MainWindow::drawOuterCircle(QPainter *painter)
{
    painter->save();
    //----------------------------------------------------------------------------------------------------
    m_outRadious = this->width() < this->height()?this->width()/2:this->height()/2;
    m_innerRadious = m_outRadious*4/5;
    m_colorRadious = m_innerRadious;
    m_coverColorRadious = m_colorRadious -5;
    m_center = this->rect().center();
    //-------------------------------------------------------------------------------------------------------

    painter->setPen(Qt::NoPen);
    QPointF pieRectTopLeftPot(m_center.x()-m_colorRadious*1.1,this->rect().center().y()-m_colorRadious*1.1);
    QPointF pieRectBottomRightPot(m_center.x()+m_colorRadious*1.1,this->rect().center().ry()+m_colorRadious*1.1);

    QRectF m_pieRect=QRectF(pieRectTopLeftPot,pieRectBottomRightPot);
    painter->setBrush(Qt::gray);
    painter->drawPie(m_pieRect,0*16,360*16);
    painter->restore();
}

void MainWindow::drawInnerCircle(QPainter *painter)
{
    painter->save();
    //-------------------------------------------------------------------------------------------------
    m_outRadious = this->width() < this->height()?this->width()/2:this->height()/2;
    m_innerRadious = m_outRadious*4/5;
    m_colorRadious = m_innerRadious;
    m_coverColorRadious = m_colorRadious-5;
    m_center = this->rect().center();
    //-------------------------------------------------------------------------------------------------
    painter->setPen(Qt::NoPen);

    QRadialGradient coverGradient(this->rect().center(),m_coverColorRadious,this->rect().center());
//    coverGradient.setColorAt(1.0,Qt::white);
     coverGradient.setColorAt(1.0,QColor(35,35,35));
    painter->setBrush(coverGradient);
    painter->drawEllipse(m_center,m_innerRadious,m_innerRadious);

    painter->restore();
}

void MainWindow::drawProgressChart(QPainter *painter)
{
    painter->save();
    //----------------------------------------------------------------------------------------------------
    m_outRadious = this->width() < this->height()?this->width()/2:this->height()/2;
    m_innerRadious = m_outRadious*4/5;
    m_colorRadious = m_innerRadious;
    m_coverColorRadious = m_colorRadious -5;
    m_center = this->rect().center();
    //-------------------------------------------------------------------------------------------------------
    m_perAngle = (qreal)360 / 100;
    painter->setPen(Qt::NoPen);
    QPointF pieRectTopLeftPot(m_center.x()-m_colorRadious*1.1,m_center.y()-m_colorRadious*1.1);
    QPointF pieRectBottomRightPot(m_center.x()+m_colorRadious*1.1,m_center.y()+m_colorRadious*1.1);

    QRectF m_pieRect=QRectF(pieRectTopLeftPot,pieRectBottomRightPot);
    QRadialGradient graphGradient(m_center,m_colorRadious,m_center);

//    graphGradient.setColorAt(1.0,QColor(255,0,128));
    graphGradient.setColorAt(1.0,QColor(0, 160, 230));

    painter->setBrush(graphGradient);

    painter->drawPie(m_pieRect,270*16,-m_value*m_perAngle*16-0.5*m_perAngle*16);
    //从逻辑0值（270度）开始，绘制 显示 百分数的饼状图
    painter->restore();
}

void MainWindow::drawTextValue(QPainter *painter)
{
    painter->save();
    //----------------------------------------------------------------------------------------------------
    m_outRadious = this->width() < this->height()?this->width()/2:this->height()/2;
    m_innerRadious = m_outRadious*4/5;
    m_colorRadious = m_innerRadious;
    m_coverColorRadious = m_colorRadious -5;
    m_center = this->rect().center();
    //----------------------------------------------------------------------------------------------------
    //    QFont font("Times New Roman");
    QFont font;
    QPen pen;
    QString strValue;
    strValue=tr("%1").arg(m_currentValue);
    qreal rectWidth = m_innerRadious/2;
    //draw precent ％
    QPointF topLeftDolt(this->width()/2-rectWidth*3/2-15,this->height()/2-rectWidth-5);
    QPointF bottomRightDolt(this->width()/2+rectWidth*3/2+15,this->height()/2+rectWidth*1.0+5);
    QRectF textRect(topLeftDolt,bottomRightDolt);//
//    pen.setBrush(QColor(255,0,128));
    pen.setBrush(QColor(0, 160, 230));

    if(m_value>=99){//cpoy complete.
        font.setPointSize(rectWidth/2);
        font.setBold(true);
        painter->setFont(font);
        painter->setPen(pen);
        painter->drawText(textRect,Qt::AlignCenter,tr("complete."));
    }else {
        font.setPointSize(rectWidth);
        font.setBold(true);
        painter->setFont(font);
        painter->setPen(pen);
        painter->drawText(textRect,Qt::AlignCenter,strValue+tr("%"));
    }
    painter->restore();
}

void MainWindow::drawUpdateText(QPainter *painter)
{
    painter->save();
    //----------------------------------------------------------------------------------------------------
    m_outRadious = this->width() < this->height()?this->width()/2:this->height()/2;
    m_innerRadious = m_outRadious*4/5;
    m_colorRadious = m_innerRadious;
    m_coverColorRadious = m_colorRadious -5;
    m_center = this->rect().center();
    //----------------------------------------------------------------------------------------------------
    QFont font("Times New Roman");
    QPen pen;
    QString strValue;
    strValue=tr("%1").arg(m_currentValue);
    qreal rectWidth = m_innerRadious/2;

    //"updating..."textRect
    QPointF TextTopLeftDolt(this->width()/2-rectWidth*3/2-15,this->height()/2+rectWidth*0.7);
    QPointF TextBottomRightDolt(this->width()/2+rectWidth*3/2+15,this->height()/2+rectWidth*1.2+10);
    QRectF UpateTextRect(TextTopLeftDolt,TextBottomRightDolt);//
//    pen.setBrush(QColor(255,0,128));
    pen.setBrush(QColor(0, 160, 230));
    font.setPointSize(rectWidth/3);
    font.setBold(true);
    painter->setFont(font);
    painter->setPen(pen);
    if(m_value>=99){
        painter->drawText(UpateTextRect,Qt::AlignCenter,tr("complete."));
    }else {
        painter->drawText(UpateTextRect,Qt::AlignCenter,tr("updating..."));
    }
    painter->restore();
}

void MainWindow::updateWidget()
{
    update();
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton)) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPaintEvent>
#include <QPixmap>
#include <QLabel>
#include <QDebug>
#include <QFont>
#include <QPen>
#include<QDir>
#include <QPoint>
#include <QTimer>
#include <QPalette>
#include "qupdatethread.h"
#include<QApplication>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int UDiskSpecialFileDetection();//检测U盘文件
    int DetectionWorkDirectory();//检测/work
    void SLEEP(int ms);
public slots:
    void OpenUDiskFileErrorSlot();
    void CreateSysFileErrorSlot();
    //更新文件进度槽
    void UpdateFileStatusSlot(qint64 tempSize);
    //设置文件大小槽
    void setProgressRangeSlot(qint64 max);
protected:
    void paintEvent(QPaintEvent *);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
private:
    Ui::MainWindow *ui;
    QUpdateThread *updateThread;
    QTimer *updateTimer;
    qreal  m_minAngle, m_maxAngle,m_startAngle,m_perAngle,m_currentAngle;
    qint64  m_currentValue,m_value;
    qreal  m_innerRadious,m_outRadious;
    qreal  m_colorRadious,m_coverColorRadious;
    qint64  m_min,m_max;
    QPointF m_center;
    QPoint mousePoint;              //鼠标拖动自定义标题栏时的坐标
    bool mousePressed;              //鼠标是否按下
    void initValue();
    //绘图
    void drawOuterCircle(QPainter* painter);
    void drawInnerCircle(QPainter* painter);
    void drawProgressChart(QPainter* painter);
    void drawTextValue(QPainter *painter);
    void drawUpdateText(QPainter *painter);
private slots:
    void updateWidget();

};

#endif // MAINWINDOW_H

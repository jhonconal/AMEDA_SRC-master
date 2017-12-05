/********************************************************************************
** Form generated from reading UI file 'amerdawidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMERDAWIDGET_H
#define UI_AMERDAWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_AmerdaWidget
{
public:
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_11;
    QFrame *frame_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *Label_2;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox_2;
    QPushButton *TestButton;
    QComboBox *comboBox_3;
    QComboBox *comboBox;
    QFrame *frame;
    QGridLayout *gridLayout_10;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer;
    QLabel *Label_3;
    QLabel *PressureAreaLabel;
    QLineEdit *SpeedAreaLineEdit;
    QLabel *SpeedAreaLabel;
    QLineEdit *PressureAreeaLineEdit;
    QLabel *TimeLabel;
    QCustomPlot *qCustomPlot;
    QGridLayout *gridLayout_12;
    QComboBox *comboBox_4;
    QLabel *label;
    QPushButton *pushButton;
    QFrame *frame_4;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLineEdit *DetaPressureLineEdit;
    QLabel *DetaPressureLabel;
    QLineEdit *MinValueLineEdit;
    QLineEdit *MaxValueLineEdit;
    QLabel *FrequenceLabel;
    QLabel *MaxValueLabel;
    QLineEdit *FrequenceLineEdit;
    QLabel *Label_5;
    QLabel *MinValueLabel;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_3;
    QPushButton *SaveButton;
    QPushButton *LogButton;
    QLineEdit *lineEdit;
    QLabel *Label;

    void setupUi(QWidget *AmerdaWidget)
    {
        if (AmerdaWidget->objectName().isEmpty())
            AmerdaWidget->setObjectName(QString::fromUtf8("AmerdaWidget"));
        AmerdaWidget->resize(1246, 852);
        QFont font;
        font.setPointSize(15);
        AmerdaWidget->setFont(font);
        AmerdaWidget->setStyleSheet(QString::fromUtf8("color: #000000;\n"
" border-radius:5px;\n"
"border:1px solid rgb(0,0,0);\n"
"background-color: rgb(45, 45, 45);\n"
"\n"
""));
        gridLayout_14 = new QGridLayout(AmerdaWidget);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_14->setContentsMargins(3, 3, 3, 3);
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        frame_2 = new QFrame(AmerdaWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8(""));
        gridLayout_8 = new QGridLayout(frame_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setHorizontalSpacing(0);
        gridLayout_8->setVerticalSpacing(6);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setVerticalSpacing(6);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 1, -1, -1);
        Label_2 = new QLabel(frame_2);
        Label_2->setObjectName(QString::fromUtf8("Label_2"));
        Label_2->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Helvetica"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        Label_2->setFont(font1);
        Label_2->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
" border-radius:2px;\n"
" border:2px solid rgb(0,165,140); "));

        gridLayout_2->addWidget(Label_2, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, -1, -1, 6);
        comboBox_2 = new QComboBox(frame_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(0, 50));
        comboBox_2->setMaximumSize(QSize(16777215, 16777215));
        comboBox_2->setFont(font1);
        comboBox_2->setStyleSheet(QString::fromUtf8(".QComboBox{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"QComboBox QAbstractItemView::item{height:40px;}\n"
"\n"
".QComboBox[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QComboBox:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QComboBox:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        TestButton = new QPushButton(frame_2);
        TestButton->setObjectName(QString::fromUtf8("TestButton"));
        TestButton->setMinimumSize(QSize(0, 50));
        TestButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Helvetica"));
        font2.setPointSize(24);
        font2.setBold(true);
        font2.setWeight(75);
        TestButton->setFont(font2);
        TestButton->setFocusPolicy(Qt::NoFocus);
        TestButton->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QPushButton:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));
        TestButton->setFlat(true);

        gridLayout->addWidget(TestButton, 1, 3, 1, 1);

        comboBox_3 = new QComboBox(frame_2);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setMinimumSize(QSize(0, 50));
        comboBox_3->setFont(font1);
        comboBox_3->setStyleSheet(QString::fromUtf8(".QComboBox{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"QComboBox QAbstractItemView::item{height:40px;}\n"
"\n"
".QComboBox[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QComboBox:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QComboBox:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout->addWidget(comboBox_3, 1, 2, 1, 1);

        comboBox = new QComboBox(frame_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(0, 50));
        comboBox->setMaximumSize(QSize(16777215, 16777215));
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8(".QComboBox{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"QComboBox QAbstractItemView::item{height:40px;}\n"
"\n"
".QComboBox[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QComboBox:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QComboBox:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout->addWidget(comboBox, 0, 0, 2, 1);


        gridLayout_6->addLayout(gridLayout, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 1, 0, 1, 1);


        gridLayout_11->addWidget(frame_2, 0, 0, 1, 1);

        frame = new QFrame(AmerdaWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8(""));
        gridLayout_10 = new QGridLayout(frame);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setVerticalSpacing(3);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setSpacing(6);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setHorizontalSpacing(2);
        gridLayout_9->setVerticalSpacing(0);
        gridLayout_9->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer, 0, 1, 1, 1);

        Label_3 = new QLabel(frame);
        Label_3->setObjectName(QString::fromUtf8("Label_3"));
        Label_3->setMinimumSize(QSize(0, 50));
        Label_3->setFont(font1);
        Label_3->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
" border-radius:2px;\n"
" border:2px solid rgb(0,165,140); "));

        gridLayout_9->addWidget(Label_3, 0, 0, 1, 1);

        PressureAreaLabel = new QLabel(frame);
        PressureAreaLabel->setObjectName(QString::fromUtf8("PressureAreaLabel"));
        PressureAreaLabel->setMinimumSize(QSize(0, 50));
        PressureAreaLabel->setFont(font1);
        PressureAreaLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
" border-radius:2px;\n"
" border:2px solid rgb(0,165,140); "));

        gridLayout_9->addWidget(PressureAreaLabel, 0, 4, 1, 1);

        SpeedAreaLineEdit = new QLineEdit(frame);
        SpeedAreaLineEdit->setObjectName(QString::fromUtf8("SpeedAreaLineEdit"));
        SpeedAreaLineEdit->setMinimumSize(QSize(0, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Helvetica"));
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setWeight(75);
        SpeedAreaLineEdit->setFont(font3);
        SpeedAreaLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        SpeedAreaLineEdit->setAlignment(Qt::AlignCenter);
        SpeedAreaLineEdit->setReadOnly(true);

        gridLayout_9->addWidget(SpeedAreaLineEdit, 0, 3, 1, 1);

        SpeedAreaLabel = new QLabel(frame);
        SpeedAreaLabel->setObjectName(QString::fromUtf8("SpeedAreaLabel"));
        SpeedAreaLabel->setMinimumSize(QSize(0, 50));
        SpeedAreaLabel->setFont(font1);
        SpeedAreaLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
" border-radius:2px;\n"
" border:2px solid rgb(0,165,140); "));

        gridLayout_9->addWidget(SpeedAreaLabel, 0, 2, 1, 1);

        PressureAreeaLineEdit = new QLineEdit(frame);
        PressureAreeaLineEdit->setObjectName(QString::fromUtf8("PressureAreeaLineEdit"));
        PressureAreeaLineEdit->setMinimumSize(QSize(170, 50));
        PressureAreeaLineEdit->setFont(font3);
        PressureAreeaLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        PressureAreeaLineEdit->setAlignment(Qt::AlignCenter);
        PressureAreeaLineEdit->setReadOnly(true);

        gridLayout_9->addWidget(PressureAreeaLineEdit, 0, 5, 1, 1);


        gridLayout_10->addLayout(gridLayout_9, 0, 0, 1, 1);

        TimeLabel = new QLabel(frame);
        TimeLabel->setObjectName(QString::fromUtf8("TimeLabel"));
        TimeLabel->setMinimumSize(QSize(0, 25));
        TimeLabel->setFont(font2);
        TimeLabel->setStyleSheet(QString::fromUtf8("color: rgb(255,255,255,100);\n"
"border:1px solid rgb(55,55,55);\n"
""));
        TimeLabel->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(TimeLabel, 3, 0, 1, 1);

        qCustomPlot = new QCustomPlot(frame);
        qCustomPlot->setObjectName(QString::fromUtf8("qCustomPlot"));
        qCustomPlot->setMinimumSize(QSize(0, 50));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Helvetica"));
        font4.setPointSize(14);
        qCustomPlot->setFont(font4);
        qCustomPlot->setStyleSheet(QString::fromUtf8("color: #F0F0F0;\n"
" border-radius:5px;\n"
"    border:1px solid rgb(255,255,255);"));

        gridLayout_10->addWidget(qCustomPlot, 1, 0, 2, 1);

        gridLayout_10->setRowStretch(0, 1);
        gridLayout_10->setRowStretch(1, 10);
        gridLayout_10->setRowStretch(2, 1);

        gridLayout_11->addWidget(frame, 1, 0, 1, 1);

        gridLayout_11->setRowStretch(0, 1);
        gridLayout_11->setRowStretch(1, 10);

        gridLayout_13->addLayout(gridLayout_11, 0, 0, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        comboBox_4 = new QComboBox(AmerdaWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setMinimumSize(QSize(0, 50));
        comboBox_4->setFont(font2);
        comboBox_4->setStyleSheet(QString::fromUtf8(".QComboBox{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"QComboBox QAbstractItemView::item{height:40px;}\n"
"\n"
".QComboBox[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QComboBox:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QComboBox:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout_12->addWidget(comboBox_4, 1, 0, 1, 1);

        label = new QLabel(AmerdaWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 55));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Helvetica"));
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
" border-radius:2px;\n"
" border:2px solid rgb(0,165,140); "));

        gridLayout_12->addWidget(label, 0, 0, 1, 1);

        pushButton = new QPushButton(AmerdaWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 50));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Helvetica"));
        font6.setPointSize(24);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setUnderline(true);
        font6.setWeight(75);
        pushButton->setFont(font6);
        pushButton->setFocusPolicy(Qt::NoFocus);
        pushButton->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QPushButton:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout_12->addWidget(pushButton, 11, 0, 1, 1);

        frame_4 = new QFrame(AmerdaWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8(""));
        gridLayout_5 = new QGridLayout(frame_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 3);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(6);
        gridLayout_4->setContentsMargins(-1, 1, -1, 1);
        DetaPressureLineEdit = new QLineEdit(frame_4);
        DetaPressureLineEdit->setObjectName(QString::fromUtf8("DetaPressureLineEdit"));
        DetaPressureLineEdit->setMinimumSize(QSize(0, 40));
        DetaPressureLineEdit->setFont(font2);
        DetaPressureLineEdit->setStyleSheet(QString::fromUtf8("\n"
".QLineEdit{\n"
"	border-style: none;\n"
"	border: 1px solid #636363;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 5px;	\n"
"	height: 40px;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
".QLineEdit[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:10px;\n"
"}\n"
""));
        DetaPressureLineEdit->setAlignment(Qt::AlignCenter);
        DetaPressureLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(DetaPressureLineEdit, 6, 0, 1, 1);

        DetaPressureLabel = new QLabel(frame_4);
        DetaPressureLabel->setObjectName(QString::fromUtf8("DetaPressureLabel"));
        DetaPressureLabel->setMinimumSize(QSize(0, 0));
        DetaPressureLabel->setFont(font5);
        DetaPressureLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
"border-radius:5px;\n"
"border:2px solid rgb(45,45,45);"));

        gridLayout_4->addWidget(DetaPressureLabel, 5, 0, 1, 1);

        MinValueLineEdit = new QLineEdit(frame_4);
        MinValueLineEdit->setObjectName(QString::fromUtf8("MinValueLineEdit"));
        MinValueLineEdit->setMinimumSize(QSize(0, 40));
        MinValueLineEdit->setFont(font2);
        MinValueLineEdit->setStyleSheet(QString::fromUtf8("\n"
".QLineEdit{\n"
"	border-style: none;\n"
"	border: 1px solid #636363;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 5px;	\n"
"	height: 40px;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
".QLineEdit[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:10px;\n"
"}\n"
""));
        MinValueLineEdit->setAlignment(Qt::AlignCenter);
        MinValueLineEdit->setDragEnabled(false);
        MinValueLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(MinValueLineEdit, 4, 0, 1, 1);

        MaxValueLineEdit = new QLineEdit(frame_4);
        MaxValueLineEdit->setObjectName(QString::fromUtf8("MaxValueLineEdit"));
        MaxValueLineEdit->setMinimumSize(QSize(0, 40));
        MaxValueLineEdit->setFont(font2);
        MaxValueLineEdit->setStyleSheet(QString::fromUtf8("\n"
".QLineEdit{\n"
"	border-style: none;\n"
"	border: 1px solid #636363;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 5px;	\n"
"	height: 40px;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
".QLineEdit[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:10px;\n"
"}\n"
""));
        MaxValueLineEdit->setAlignment(Qt::AlignCenter);
        MaxValueLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(MaxValueLineEdit, 2, 0, 1, 1);

        FrequenceLabel = new QLabel(frame_4);
        FrequenceLabel->setObjectName(QString::fromUtf8("FrequenceLabel"));
        FrequenceLabel->setMinimumSize(QSize(0, 0));
        FrequenceLabel->setMaximumSize(QSize(16777215, 40));
        FrequenceLabel->setFont(font5);
        FrequenceLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
"border-radius:5px;\n"
"border:2px solid rgb(45,45,45);"));

        gridLayout_4->addWidget(FrequenceLabel, 7, 0, 1, 1);

        MaxValueLabel = new QLabel(frame_4);
        MaxValueLabel->setObjectName(QString::fromUtf8("MaxValueLabel"));
        MaxValueLabel->setMinimumSize(QSize(0, 0));
        MaxValueLabel->setMaximumSize(QSize(16777215, 40));
        MaxValueLabel->setFont(font5);
        MaxValueLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
"border-radius:5px;\n"
"border:2px solid rgb(45,45,45);"));

        gridLayout_4->addWidget(MaxValueLabel, 1, 0, 1, 1);

        FrequenceLineEdit = new QLineEdit(frame_4);
        FrequenceLineEdit->setObjectName(QString::fromUtf8("FrequenceLineEdit"));
        FrequenceLineEdit->setMinimumSize(QSize(0, 40));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Helvetica"));
        font7.setPointSize(21);
        font7.setBold(true);
        font7.setWeight(75);
        FrequenceLineEdit->setFont(font7);
        FrequenceLineEdit->setStyleSheet(QString::fromUtf8("\n"
".QLineEdit{\n"
"	border-style: none;\n"
"	border: 1px solid #636363;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 5px;	\n"
"	height: 40px;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
".QLineEdit[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: rgb(255, 255, 255);\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:10px;\n"
"}\n"
""));
        FrequenceLineEdit->setAlignment(Qt::AlignCenter);
        FrequenceLineEdit->setReadOnly(true);

        gridLayout_4->addWidget(FrequenceLineEdit, 8, 0, 1, 1);

        Label_5 = new QLabel(frame_4);
        Label_5->setObjectName(QString::fromUtf8("Label_5"));
        Label_5->setMinimumSize(QSize(0, 45));
        Label_5->setMaximumSize(QSize(16777215, 45));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Helvetica"));
        font8.setPointSize(22);
        font8.setBold(true);
        font8.setWeight(75);
        Label_5->setFont(font8);
        Label_5->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
" border-radius:2px;\n"
" border:2px solid rgb(0,165,140); "));

        gridLayout_4->addWidget(Label_5, 0, 0, 1, 1);

        MinValueLabel = new QLabel(frame_4);
        MinValueLabel->setObjectName(QString::fromUtf8("MinValueLabel"));
        MinValueLabel->setMinimumSize(QSize(0, 0));
        MinValueLabel->setMaximumSize(QSize(16777215, 40));
        MinValueLabel->setFont(font5);
        MinValueLabel->setStyleSheet(QString::fromUtf8("color: rgb(0,165,150);\n"
"border-radius:5px;\n"
"border:2px solid rgb(45,45,45);"));

        gridLayout_4->addWidget(MinValueLabel, 3, 0, 1, 1);

        checkBox = new QCheckBox(frame_4);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(0, 40));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Helvetica"));
        font9.setPointSize(16);
        font9.setBold(true);
        font9.setWeight(75);
        checkBox->setFont(font9);
        checkBox->setFocusPolicy(Qt::NoFocus);
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"   color: rgb(0,165,150);\n"
"border: 1px solid #636363;\n"
"}\n"
"/*checkbox\346\240\267\345\274\217\350\256\276\347\275\256*/\n"
"QCheckBox::indicator { \n"
"    width: 100px;\n"
"    height: 50px;\n"
"}\n"
"/*\346\234\252\351\200\211\344\270\255*/\n"
"QCheckBox::indicator::unchecked {   \n"
"   image: url(:/src/icons/toggleButton_off.png);\n"
"}\n"
"/*\351\200\211\344\270\255*/\n"
"QCheckBox::indicator::checked { \n"
"  image: url(:/src/icons/toggleButton_on.png);\n"
"}"));

        gridLayout_4->addWidget(checkBox, 12, 0, 1, 1);

        gridLayout_4->setRowStretch(0, 1);

        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);


        gridLayout_12->addWidget(frame_4, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_3, 12, 0, 1, 1);

        SaveButton = new QPushButton(AmerdaWidget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setMinimumSize(QSize(0, 50));
        SaveButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Helvetica"));
        font10.setPointSize(30);
        font10.setBold(true);
        font10.setWeight(75);
        SaveButton->setFont(font10);
        SaveButton->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QPushButton:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout_12->addWidget(SaveButton, 8, 0, 1, 1);

        LogButton = new QPushButton(AmerdaWidget);
        LogButton->setObjectName(QString::fromUtf8("LogButton"));
        LogButton->setMinimumSize(QSize(0, 50));
        LogButton->setFont(font2);
        LogButton->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	height: 50px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:2px;\n"
"	background: rgb(0,165,140); \n"
"}\n"
"\n"
".QPushButton:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,150), stop:1 rgb(0,170,160)); \n"
"}\n"
"\n"
".QPushButton:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0,170,170), stop:1 rgb(0,170,180)); \n"
"}\n"
""));

        gridLayout_12->addWidget(LogButton, 10, 0, 1, 1);

        lineEdit = new QLineEdit(AmerdaWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font5);
        lineEdit->setStyleSheet(QString::fromUtf8("\n"
".QLineEdit{\n"
"	border-style: none;\n"
"	border: 1px solid #636363;\n"
"	color: rgb(218,0,75);\n"
"	padding: 5px;	\n"
"	height: 35px;\n"
"	border-radius:5px;\n"
"}\n"
"\n"
".QLineEdit[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: rgb(218,0,75);\n"
"	padding: 0px;	\n"
"	min-height: 10px;\n"
"	border-radius:10px;\n"
"}\n"
""));
        lineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(lineEdit, 2, 0, 1, 1);

        gridLayout_12->setRowStretch(0, 1);

        gridLayout_13->addLayout(gridLayout_12, 0, 1, 1, 1);

        gridLayout_13->setColumnStretch(0, 10);

        gridLayout_14->addLayout(gridLayout_13, 1, 0, 1, 1);

        Label = new QLabel(AmerdaWidget);
        Label->setObjectName(QString::fromUtf8("Label"));
        QFont font11;
        font11.setFamily(QString::fromUtf8("DejaVu Serif"));
        font11.setPointSize(28);
        font11.setBold(true);
        font11.setWeight(75);
        Label->setFont(font11);
        Label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        Label->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(Label, 0, 0, 1, 1);


        retranslateUi(AmerdaWidget);

        QMetaObject::connectSlotsByName(AmerdaWidget);
    } // setupUi

    void retranslateUi(QWidget *AmerdaWidget)
    {
        AmerdaWidget->setWindowTitle(QApplication::translate("AmerdaWidget", "AMEDA TESTING", 0, QApplication::UnicodeUTF8));
        Label_2->setText(QApplication::translate("AmerdaWidget", "Testing Choices:", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AmerdaWidget", "Suction: shutdown", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[1]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[2]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[3]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[4]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[5]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[6]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[7]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Suction: switch->[8]", 0, QApplication::UnicodeUTF8)
        );
        TestButton->setText(QApplication::translate("AmerdaWidget", "Testing", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("AmerdaWidget", "Pumping: [single]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Pumping: [dual]", 0, QApplication::UnicodeUTF8)
        );
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AmerdaWidget", "Speed: switch->[1]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Speed: switch->[2]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Speed: switch->[3]", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AmerdaWidget", "Speed: switch->[4]", 0, QApplication::UnicodeUTF8)
        );
        Label_3->setText(QApplication::translate("AmerdaWidget", "Standard Ranges:", 0, QApplication::UnicodeUTF8));
        PressureAreaLabel->setText(QApplication::translate("AmerdaWidget", "Suction Range", 0, QApplication::UnicodeUTF8));
        SpeedAreaLineEdit->setText(QApplication::translate("AmerdaWidget", "26.4\342\211\244CPM\342\211\24430", 0, QApplication::UnicodeUTF8));
        SpeedAreaLabel->setText(QApplication::translate("AmerdaWidget", "Speed Range", 0, QApplication::UnicodeUTF8));
        PressureAreeaLineEdit->setText(QApplication::translate("AmerdaWidget", "\342\226\263P=0 mmHg", 0, QApplication::UnicodeUTF8));
        TimeLabel->setText(QApplication::translate("AmerdaWidget", "         TIME       ", 0, QApplication::UnicodeUTF8));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("AmerdaWidget", "Finesse", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("AmerdaWidget", "Model:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AmerdaWidget", "REBOOT", 0, QApplication::UnicodeUTF8));
        DetaPressureLineEdit->setText(QApplication::translate("AmerdaWidget", "0 mmHg", 0, QApplication::UnicodeUTF8));
        DetaPressureLabel->setText(QApplication::translate("AmerdaWidget", "\342\226\263P (mmHg)", 0, QApplication::UnicodeUTF8));
        MinValueLineEdit->setText(QApplication::translate("AmerdaWidget", "0 mmHg", 0, QApplication::UnicodeUTF8));
        MaxValueLineEdit->setText(QApplication::translate("AmerdaWidget", "0 mmHg", 0, QApplication::UnicodeUTF8));
        FrequenceLabel->setText(QApplication::translate("AmerdaWidget", "CPM (cycle/min)", 0, QApplication::UnicodeUTF8));
        MaxValueLabel->setText(QApplication::translate("AmerdaWidget", "Max Values (mmHg)", 0, QApplication::UnicodeUTF8));
        FrequenceLineEdit->setText(QApplication::translate("AmerdaWidget", "0 cycle/min", 0, QApplication::UnicodeUTF8));
        Label_5->setText(QApplication::translate("AmerdaWidget", "Parameters:", 0, QApplication::UnicodeUTF8));
        MinValueLabel->setText(QApplication::translate("AmerdaWidget", "Min Values (mmHg)", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("AmerdaWidget", "Check Local atmos", 0, QApplication::UnicodeUTF8));
        SaveButton->setText(QApplication::translate("AmerdaWidget", "Save", 0, QApplication::UnicodeUTF8));
        LogButton->setText(QApplication::translate("AmerdaWidget", "Log", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("AmerdaWidget", "0 mmHg", 0, QApplication::UnicodeUTF8));
        Label->setText(QApplication::translate("AmerdaWidget", "AMEDA", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AmerdaWidget: public Ui_AmerdaWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMERDAWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'atmindexwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATMINDEXWIDGET_H
#define UI_ATMINDEXWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AtmIndexWidget
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *PreButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *NextButton;

    void setupUi(QWidget *AtmIndexWidget)
    {
        if (AtmIndexWidget->objectName().isEmpty())
            AtmIndexWidget->setObjectName(QString::fromUtf8("AtmIndexWidget"));
        AtmIndexWidget->resize(1024, 768);
        AtmIndexWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(AtmIndexWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(AtmIndexWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/src/images/1.jpg);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(24, -1, 24, -1);
        PreButton = new QPushButton(widget);
        PreButton->setObjectName(QString::fromUtf8("PreButton"));
        PreButton->setMinimumSize(QSize(80, 80));
        PreButton->setMaximumSize(QSize(80, 80));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        PreButton->setFont(font);
        PreButton->setFocusPolicy(Qt::NoFocus);
        PreButton->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	\n"
"	border-image: url(:/src/icons/prev.png);\n"
"	border-radius:40px;\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(220,0,75,150), stop:1 rgb(240,0,75,150)); \n"
"}\n"
"\n"
".QPushButton[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	border-radius:40px;\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(220,0,75,150), stop:1 rgb(240,0,75,150)); \n"
"}\n"
"\n"
".QPushButton:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(220,0,75), stop:1 rgb(150,0,55)); \n"
"}\n"
"\n"
".QPushButton:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(200,0,75), stop:1 rgb(150,0,50)); \n"
"}\n"
""));
        PreButton->setFlat(true);

        gridLayout->addWidget(PreButton, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(801, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        NextButton = new QPushButton(widget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));
        NextButton->setMinimumSize(QSize(80, 80));
        NextButton->setMaximumSize(QSize(80, 80));
        NextButton->setFont(font);
        NextButton->setFocusPolicy(Qt::NoFocus);
        NextButton->setStyleSheet(QString::fromUtf8(".QPushButton{\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 5px;	\n"
"	\n"
"	border-image: url(:/src/icons/next.png);\n"
"	border-radius:40px;\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(220,0,75,150), stop:1 rgb(240,0,75,150)); \n"
"}\n"
"\n"
".QPushButton[focusPolicy=\"0\"] {\n"
"	border-style: none;\n"
"	border: 0px;\n"
"	color: #F0F0F0;\n"
"	padding: 0px;	\n"
"	border-radius:40px;\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgb(220,0,75,150), stop:1 rgb(240,0,75,150)); \n"
"}\n"
"\n"
".QPushButton:hover{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(220,0,75), stop:1 rgb(150,0,55)); \n"
"}\n"
"\n"
".QPushButton:pressed{ \n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(200,0,75), stop:1 rgb(150,0,50)); \n"
"}\n"
""));
        NextButton->setFlat(true);

        gridLayout->addWidget(NextButton, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(AtmIndexWidget);

        QMetaObject::connectSlotsByName(AtmIndexWidget);
    } // setupUi

    void retranslateUi(QWidget *AtmIndexWidget)
    {
        AtmIndexWidget->setWindowTitle(QApplication::translate("AtmIndexWidget", "AtmIndexWidget", 0, QApplication::UnicodeUTF8));
        PreButton->setText(QString());
        NextButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AtmIndexWidget: public Ui_AtmIndexWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATMINDEXWIDGET_H

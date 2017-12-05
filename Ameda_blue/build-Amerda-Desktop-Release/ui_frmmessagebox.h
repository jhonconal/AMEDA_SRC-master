/********************************************************************************
** Form generated from reading UI file 'frmmessagebox.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMESSAGEBOX_H
#define UI_FRMMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMessageBox
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lab_Ico;
    QLabel *lab_Title;
    QWidget *widget_menu;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMenu_Close;
    QWidget *widget_main;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *labIcoMain;
    QLabel *labInfo;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *frmMessageBox)
    {
        if (frmMessageBox->objectName().isEmpty())
            frmMessageBox->setObjectName(QString::fromUtf8("frmMessageBox"));
        frmMessageBox->resize(396, 145);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font.setBold(true);
        font.setWeight(75);
        frmMessageBox->setFont(font);
        frmMessageBox->setStyleSheet(QString::fromUtf8("background-color: rgb(55, 55, 55);"));
        verticalLayout = new QVBoxLayout(frmMessageBox);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 3, 0, 0);
        widget_title = new QWidget(frmMessageBox);
        widget_title->setObjectName(QString::fromUtf8("widget_title"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_title->sizePolicy().hasHeightForWidth());
        widget_title->setSizePolicy(sizePolicy);
        widget_title->setMinimumSize(QSize(100, 28));
        horizontalLayout_2 = new QHBoxLayout(widget_title);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lab_Ico = new QLabel(widget_title);
        lab_Ico->setObjectName(QString::fromUtf8("lab_Ico"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lab_Ico->sizePolicy().hasHeightForWidth());
        lab_Ico->setSizePolicy(sizePolicy1);
        lab_Ico->setMinimumSize(QSize(25, 25));
        lab_Ico->setMaximumSize(QSize(25, 25));
        lab_Ico->setStyleSheet(QString::fromUtf8("border-image: url(:/src/icons/info.png);"));
        lab_Ico->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lab_Ico);

        lab_Title = new QLabel(widget_title);
        lab_Title->setObjectName(QString::fromUtf8("lab_Title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lab_Title->sizePolicy().hasHeightForWidth());
        lab_Title->setSizePolicy(sizePolicy2);
        lab_Title->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lab_Title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lab_Title);

        widget_menu = new QWidget(widget_title);
        widget_menu->setObjectName(QString::fromUtf8("widget_menu"));
        sizePolicy1.setHeightForWidth(widget_menu->sizePolicy().hasHeightForWidth());
        widget_menu->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget_menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnMenu_Close = new QPushButton(widget_menu);
        btnMenu_Close->setObjectName(QString::fromUtf8("btnMenu_Close"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnMenu_Close->sizePolicy().hasHeightForWidth());
        btnMenu_Close->setSizePolicy(sizePolicy3);
        btnMenu_Close->setMinimumSize(QSize(25, 25));
        btnMenu_Close->setMaximumSize(QSize(30, 30));
        btnMenu_Close->setCursor(QCursor(Qt::ArrowCursor));
        btnMenu_Close->setFocusPolicy(Qt::NoFocus);
        btnMenu_Close->setStyleSheet(QString::fromUtf8("border-image: url(:/src/icons/close.png);"));
        btnMenu_Close->setFlat(true);

        horizontalLayout->addWidget(btnMenu_Close);


        horizontalLayout_2->addWidget(widget_menu);


        verticalLayout->addWidget(widget_title);

        widget_main = new QWidget(frmMessageBox);
        widget_main->setObjectName(QString::fromUtf8("widget_main"));
        widget_main->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        verticalLayout_2 = new QVBoxLayout(widget_main);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 0, 5, 5);
        groupBox = new QGroupBox(widget_main);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        labIcoMain = new QLabel(groupBox);
        labIcoMain->setObjectName(QString::fromUtf8("labIcoMain"));
        labIcoMain->setMinimumSize(QSize(40, 40));
        labIcoMain->setMaximumSize(QSize(40, 45));
        labIcoMain->setStyleSheet(QString::fromUtf8("border-image: url(:/src/icons/info_full.png);"));

        gridLayout->addWidget(labIcoMain, 0, 0, 1, 1);

        labInfo = new QLabel(groupBox);
        labInfo->setObjectName(QString::fromUtf8("labInfo"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        labInfo->setFont(font1);
        labInfo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        labInfo->setScaledContents(false);
        labInfo->setWordWrap(true);

        gridLayout->addWidget(labInfo, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOk = new QPushButton(groupBox);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        btnOk->setFont(font2);
        btnOk->setCursor(QCursor(Qt::PointingHandCursor));
        btnOk->setFocusPolicy(Qt::StrongFocus);
        btnOk->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #909090;\n"
"    border-style:solid;\n"
"    border-width:2px 2px 2px 2px;\n"
"    border-color:#969696;\n"
"    background-color:#FFFFFF;\n"
"    border-radius:5px;\n"
"    min-width:80px;\n"
"	min-height:30px;\n"
"   font: 9pt \"Arial\";\n"
"}\n"
"QPushButton:hover{\n"
"	color: #909090;\n"
"    border-style:solid;\n"
"    border-width:3px 3px 3px 3px;\n"
"    border-color:#969696;\n"
"    background-color:#FEFEEF;\n"
"    border-radius:5px;\n"
"    min-width:80px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    border-style:solid;\n"
"    border-width:4px 4px 4px 4px;\n"
"    border-color:#969696;\n"
"    background-color:#FEFEEF;\n"
"    border-radius:5px;\n"
"    min-width:80px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOk->setIcon(icon);
        btnOk->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btnOk);

        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setFont(font2);
        btnCancel->setCursor(QCursor(Qt::PointingHandCursor));
        btnCancel->setFocusPolicy(Qt::StrongFocus);
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #909090;\n"
"    border-style:solid;\n"
"    border-width:2px 2px 2px 2px;\n"
"    border-color:#969696;\n"
"    background-color:#FFFFFF;\n"
"    border-radius:5px;\n"
"    min-width:80px;\n"
"	min-height:30px;\n"
"   font: 9pt \"Arial\";\n"
"}\n"
"QPushButton:hover{\n"
"	color: #909090;\n"
"    border-style:solid;\n"
"    border-width:3px 3px 3px 3px;\n"
"    border-color:#969696;\n"
"    background-color:#FEFEEF;\n"
"    border-radius:5px;\n"
"    min-width:80px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"    border-style:solid;\n"
"    border-width:4px 4px 4px 4px;\n"
"    border-color:#969696;\n"
"    background-color:#FEFEEF;\n"
"    border-radius:5px;\n"
"    min-width:80px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 2);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 5);

        verticalLayout_2->addWidget(groupBox);


        verticalLayout->addWidget(widget_main);


        retranslateUi(frmMessageBox);

        QMetaObject::connectSlotsByName(frmMessageBox);
    } // setupUi

    void retranslateUi(QDialog *frmMessageBox)
    {
        frmMessageBox->setWindowTitle(QApplication::translate("frmMessageBox", "\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        lab_Ico->setText(QString());
        lab_Title->setText(QApplication::translate("frmMessageBox", "\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnMenu_Close->setToolTip(QApplication::translate("frmMessageBox", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnMenu_Close->setText(QString());
        groupBox->setTitle(QString());
        labIcoMain->setText(QString());
        labInfo->setText(QApplication::translate("frmMessageBox", "\347\241\256\345\256\232\350\246\201\345\210\240\351\231\244\345\220\227?", 0, QApplication::UnicodeUTF8));
        btnOk->setText(QApplication::translate("frmMessageBox", "Check(&O)", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("frmMessageBox", "Canncel(&C)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMessageBox: public Ui_frmMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMESSAGEBOX_H

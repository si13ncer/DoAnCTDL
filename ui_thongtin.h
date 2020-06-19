/********************************************************************************
** Form generated from reading UI file 'thongtin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THONGTIN_H
#define UI_THONGTIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thongtin
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QPushButton *btnHuy;
    QPushButton *btnLuu;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *leditAdress;
    QLineEdit *leditName;
    QLabel *label_2;
    QLineEdit *leditPhone;
    QLabel *label_5;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thongtin)
    {
        if (thongtin->objectName().isEmpty())
            thongtin->setObjectName(QString::fromUtf8("thongtin"));
        thongtin->resize(490, 254);
        QFont font;
        font.setPointSize(10);
        thongtin->setFont(font);
        centralwidget = new QWidget(thongtin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 20, 201, 21));
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(390, 180, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon);
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(300, 180, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 131, 111));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 20, 121, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/icon/personal-card.png")));
        leditAdress = new QLineEdit(centralwidget);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(270, 140, 201, 20));
        leditName = new QLineEdit(centralwidget);
        leditName->setObjectName(QString::fromUtf8("leditName"));
        leditName->setGeometry(QRect(271, 80, 133, 20));
        leditName->setMaxLength(60);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 80, 101, 16));
        leditPhone = new QLineEdit(centralwidget);
        leditPhone->setObjectName(QString::fromUtf8("leditPhone"));
        leditPhone->setGeometry(QRect(270, 110, 133, 20));
        leditPhone->setMaxLength(12);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(159, 110, 80, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 140, 71, 16));
        thongtin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thongtin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 490, 23));
        thongtin->setMenuBar(menubar);
        statusbar = new QStatusBar(thongtin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thongtin->setStatusBar(statusbar);

        retranslateUi(thongtin);

        QMetaObject::connectSlotsByName(thongtin);
    } // setupUi

    void retranslateUi(QMainWindow *thongtin)
    {
        thongtin->setWindowTitle(QCoreApplication::translate("thongtin", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("thongtin", "CH\341\273\210NH S\341\273\254A TH\303\224NG TIN C\303\201 NH\303\202N", nullptr));
        btnHuy->setText(QCoreApplication::translate("thongtin", "Hu\341\273\267", nullptr));
        btnLuu->setText(QCoreApplication::translate("thongtin", "L\306\260u", nullptr));
        groupBox->setTitle(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("thongtin", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        leditPhone->setText(QString());
        label_5->setText(QCoreApplication::translate("thongtin", "S\304\220T                    ", nullptr));
        label_4->setText(QCoreApplication::translate("thongtin", "\304\220\341\273\213a ch\341\273\211             ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thongtin: public Ui_thongtin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THONGTIN_H

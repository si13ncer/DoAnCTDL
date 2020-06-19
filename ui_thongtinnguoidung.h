/********************************************************************************
** Form generated from reading UI file 'thongtinnguoidung.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THONGTINNGUOIDUNG_H
#define UI_THONGTINNGUOIDUNG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thongtinnguoidung
{
public:
    QWidget *centralwidget;
    QLineEdit *leditName;
    QLabel *label_5;
    QLineEdit *leditPhone;
    QLabel *label_4;
    QLineEdit *leditAdress;
    QLabel *label_2;
    QLabel *label;
    QPushButton *btnLuu;
    QLabel *label_3;
    QPushButton *btnHuy;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thongtinnguoidung)
    {
        if (thongtinnguoidung->objectName().isEmpty())
            thongtinnguoidung->setObjectName(QString::fromUtf8("thongtinnguoidung"));
        thongtinnguoidung->resize(480, 264);
        QFont font;
        font.setPointSize(10);
        thongtinnguoidung->setFont(font);
        centralwidget = new QWidget(thongtinnguoidung);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        leditName = new QLineEdit(centralwidget);
        leditName->setObjectName(QString::fromUtf8("leditName"));
        leditName->setGeometry(QRect(261, 70, 133, 20));
        leditName->setMaxLength(60);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(149, 100, 80, 16));
        leditPhone = new QLineEdit(centralwidget);
        leditPhone->setObjectName(QString::fromUtf8("leditPhone"));
        leditPhone->setGeometry(QRect(260, 100, 133, 20));
        leditPhone->setMaxLength(12);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 130, 71, 16));
        leditAdress = new QLineEdit(centralwidget);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(260, 130, 201, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 70, 101, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 121, 71));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/icon/personal-card.png")));
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(290, 180, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 20, 201, 21));
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(380, 180, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon1);
        thongtinnguoidung->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thongtinnguoidung);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 21));
        thongtinnguoidung->setMenuBar(menubar);
        statusbar = new QStatusBar(thongtinnguoidung);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thongtinnguoidung->setStatusBar(statusbar);

        retranslateUi(thongtinnguoidung);

        QMetaObject::connectSlotsByName(thongtinnguoidung);
    } // setupUi

    void retranslateUi(QMainWindow *thongtinnguoidung)
    {
        thongtinnguoidung->setWindowTitle(QCoreApplication::translate("thongtinnguoidung", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("thongtinnguoidung", "S\304\220T                    ", nullptr));
        leditPhone->setText(QString());
        label_4->setText(QCoreApplication::translate("thongtinnguoidung", "\304\220\341\273\213a ch\341\273\211             ", nullptr));
        label_2->setText(QCoreApplication::translate("thongtinnguoidung", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        label->setText(QString());
        btnLuu->setText(QCoreApplication::translate("thongtinnguoidung", "L\306\260u", nullptr));
        label_3->setText(QCoreApplication::translate("thongtinnguoidung", "CH\341\273\210NH S\341\273\254A TH\303\224NG TIN C\303\201 NH\303\202N", nullptr));
        btnHuy->setText(QCoreApplication::translate("thongtinnguoidung", "Hu\341\273\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thongtinnguoidung: public Ui_thongtinnguoidung {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THONGTINNGUOIDUNG_H

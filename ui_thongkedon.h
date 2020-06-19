/********************************************************************************
** Form generated from reading UI file 'thongkedon.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THONGKEDON_H
#define UI_THONGKEDON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thongkedon
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox_3;
    QLabel *lblSodon;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *lblGiatri;
    QLabel *label_7;
    QLabel *lblThanhcong;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *lblHuy;
    QLabel *label_10;
    QLabel *lblDoitra;
    QSplitter *splitter;
    QLabel *label_2;
    QSpinBox *spbThang;
    QLabel *label_4;
    QGroupBox *groupBox;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *lbltangthang;
    QLabel *lblbinhquanduong;
    QSplitter *splitter_2;
    QLabel *lblTangthang;
    QLabel *label_5;
    QSplitter *splitter_3;
    QLabel *lblTTB;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thongkedon)
    {
        if (thongkedon->objectName().isEmpty())
            thongkedon->setObjectName(QString::fromUtf8("thongkedon"));
        thongkedon->resize(842, 359);
        QFont font;
        font.setPointSize(10);
        thongkedon->setFont(font);
        centralwidget = new QWidget(thongkedon);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 181, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 110, 321, 191));
        lblSodon = new QLabel(groupBox_3);
        lblSodon->setObjectName(QString::fromUtf8("lblSodon"));
        lblSodon->setGeometry(QRect(130, 20, 131, 21));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        lblSodon->setFont(font2);
        lblSodon->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 20, 101, 21));
        label_6->setFont(font2);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(350, 80, 31, 21));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 140, 111, 21));
        label_9->setFont(font2);
        lblGiatri = new QLabel(groupBox_3);
        lblGiatri->setObjectName(QString::fromUtf8("lblGiatri"));
        lblGiatri->setGeometry(QRect(130, 140, 131, 21));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        lblGiatri->setFont(font3);
        lblGiatri->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        lblGiatri->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 50, 111, 21));
        label_7->setFont(font2);
        lblThanhcong = new QLabel(groupBox_3);
        lblThanhcong->setObjectName(QString::fromUtf8("lblThanhcong"));
        lblThanhcong->setGeometry(QRect(130, 50, 131, 21));
        lblThanhcong->setFont(font2);
        lblThanhcong->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(270, 142, 31, 21));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 80, 111, 21));
        label_8->setFont(font2);
        lblHuy = new QLabel(groupBox_3);
        lblHuy->setObjectName(QString::fromUtf8("lblHuy"));
        lblHuy->setGeometry(QRect(130, 80, 131, 21));
        lblHuy->setFont(font2);
        lblHuy->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 110, 111, 21));
        label_10->setFont(font2);
        lblDoitra = new QLabel(groupBox_3);
        lblDoitra->setObjectName(QString::fromUtf8("lblDoitra"));
        lblDoitra->setGeometry(QRect(130, 110, 131, 21));
        lblDoitra->setFont(font2);
        lblDoitra->setAlignment(Qt::AlignCenter);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(31, 80, 91, 22));
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter->addWidget(label_2);
        spbThang = new QSpinBox(splitter);
        spbThang->setObjectName(QString::fromUtf8("spbThang"));
        spbThang->setFont(font);
        spbThang->setMinimum(1);
        spbThang->setMaximum(12);
        splitter->addWidget(spbThang);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 110, 191, 191));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/res/res/icon/growth.png")));
        label_4->setScaledContents(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(520, 100, 301, 201));
        groupBox->setFont(font);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 30, 131, 21));
        label_12->setFont(font3);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 120, 171, 21));
        label_13->setFont(font3);
        lbltangthang = new QLabel(groupBox);
        lbltangthang->setObjectName(QString::fromUtf8("lbltangthang"));
        lbltangthang->setGeometry(QRect(76, 70, 31, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        lbltangthang->setFont(font4);
        lbltangthang->setStyleSheet(QString::fromUtf8(""));
        lbltangthang->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblbinhquanduong = new QLabel(groupBox);
        lblbinhquanduong->setObjectName(QString::fromUtf8("lblbinhquanduong"));
        lblbinhquanduong->setGeometry(QRect(80, 150, 31, 31));
        lblbinhquanduong->setFont(font4);
        lblbinhquanduong->setStyleSheet(QString::fromUtf8(""));
        lblbinhquanduong->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(110, 70, 81, 31));
        splitter_2->setOrientation(Qt::Horizontal);
        lblTangthang = new QLabel(splitter_2);
        lblTangthang->setObjectName(QString::fromUtf8("lblTangthang"));
        lblTangthang->setFont(font3);
        lblTangthang->setStyleSheet(QString::fromUtf8(""));
        lblTangthang->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(lblTangthang);
        label_5 = new QLabel(splitter_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_2->addWidget(label_5);
        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(110, 150, 81, 31));
        splitter_3->setOrientation(Qt::Horizontal);
        lblTTB = new QLabel(splitter_3);
        lblTTB->setObjectName(QString::fromUtf8("lblTTB"));
        lblTTB->setFont(font3);
        lblTTB->setStyleSheet(QString::fromUtf8(""));
        lblTTB->setAlignment(Qt::AlignCenter);
        splitter_3->addWidget(lblTTB);
        label_14 = new QLabel(splitter_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        splitter_3->addWidget(label_14);
        thongkedon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thongkedon);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 842, 21));
        thongkedon->setMenuBar(menubar);
        statusbar = new QStatusBar(thongkedon);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thongkedon->setStatusBar(statusbar);

        retranslateUi(thongkedon);

        QMetaObject::connectSlotsByName(thongkedon);
    } // setupUi

    void retranslateUi(QMainWindow *thongkedon)
    {
        thongkedon->setWindowTitle(QCoreApplication::translate("thongkedon", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("thongkedon", "TH\341\273\220NG K\303\212 DOANH S\341\273\220", nullptr));
        groupBox_3->setTitle(QString());
        lblSodon->setText(QString());
        label_6->setText(QCoreApplication::translate("thongkedon", "S\341\273\221 \304\221\306\241n \304\221\303\243 t\341\272\241o:", nullptr));
        label_11->setText(QCoreApplication::translate("thongkedon", "VND", nullptr));
        label_9->setText(QCoreApplication::translate("thongkedon", "T\341\273\225ng doanh thu:", nullptr));
        lblGiatri->setText(QString());
        label_7->setText(QCoreApplication::translate("thongkedon", "Giao th\303\240nh c\303\264ng:", nullptr));
        lblThanhcong->setText(QString());
        label_3->setText(QCoreApplication::translate("thongkedon", "VND", nullptr));
        label_8->setText(QCoreApplication::translate("thongkedon", "\304\220\306\241n b\341\273\213 hu\341\273\267:", nullptr));
        lblHuy->setText(QString());
        label_10->setText(QCoreApplication::translate("thongkedon", "Y\303\252u c\341\272\247u \304\221\341\273\225i tr\341\272\243:", nullptr));
        lblDoitra->setText(QString());
        label_2->setText(QCoreApplication::translate("thongkedon", "Th\303\241ng", nullptr));
        label_4->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("thongkedon", "\304\220\303\201NH GI\303\201 T\304\202NG TR\306\257\341\273\236NG DOANH THU", nullptr));
        label_12->setText(QCoreApplication::translate("thongkedon", "So v\341\273\233i th\303\241ng tr\306\260\341\273\233c:", nullptr));
        label_13->setText(QCoreApplication::translate("thongkedon", "B\303\254nh qu\303\242n t\303\255nh t\341\273\253 \304\221\341\272\247u n\304\203m", nullptr));
        lbltangthang->setText(QString());
        lblbinhquanduong->setText(QString());
        lblTangthang->setText(QString());
        label_5->setText(QCoreApplication::translate("thongkedon", "%", nullptr));
        lblTTB->setText(QString());
        label_14->setText(QCoreApplication::translate("thongkedon", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thongkedon: public Ui_thongkedon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THONGKEDON_H

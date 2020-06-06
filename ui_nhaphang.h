/********************************************************************************
** Form generated from reading UI file 'nhaphang.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NHAPHANG_H
#define UI_NHAPHANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nhaphang
{
public:
    QWidget *centralwidget;
    QComboBox *cbxDanhmuc;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QPushButton *btnLuu;
    QPushButton *btnHuy;
    QComboBox *cbxLoaihang;
    QLabel *label_9;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *nhaphang)
    {
        if (nhaphang->objectName().isEmpty())
            nhaphang->setObjectName(QString::fromUtf8("nhaphang"));
        nhaphang->resize(570, 343);
        centralwidget = new QWidget(nhaphang);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        cbxDanhmuc = new QComboBox(centralwidget);
        cbxDanhmuc->setObjectName(QString::fromUtf8("cbxDanhmuc"));
        cbxDanhmuc->setGeometry(QRect(150, 70, 201, 22));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 110, 201, 20));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 140, 201, 20));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(150, 220, 42, 22));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(150, 180, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 71, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 73, 61, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 220, 61, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 180, 51, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 47, 13));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 120, 61, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 180, 51, 21));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(140, 260, 110, 22));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 0, 141, 16));
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(350, 300, 75, 23));
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(460, 300, 75, 23));
        cbxLoaihang = new QComboBox(centralwidget);
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->addItem(QString());
        cbxLoaihang->setObjectName(QString::fromUtf8("cbxLoaihang"));
        cbxLoaihang->setGeometry(QRect(150, 20, 201, 22));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 263, 61, 20));
        nhaphang->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(nhaphang);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        nhaphang->setStatusBar(statusbar);

        retranslateUi(nhaphang);

        QMetaObject::connectSlotsByName(nhaphang);
    } // setupUi

    void retranslateUi(QMainWindow *nhaphang)
    {
        nhaphang->setWindowTitle(QCoreApplication::translate("nhaphang", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("nhaphang", "Ph\303\242n lo\341\272\241i", nullptr));
        label_2->setText(QCoreApplication::translate("nhaphang", "Danh m\341\273\245c", nullptr));
        label_3->setText(QCoreApplication::translate("nhaphang", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        label_4->setText(QCoreApplication::translate("nhaphang", "Gi\303\241 h\303\240ng", nullptr));
        label_5->setText(QCoreApplication::translate("nhaphang", "M\303\243 h\303\240ng", nullptr));
        label_6->setText(QCoreApplication::translate("nhaphang", "T\303\252n h\303\240ng", nullptr));
        label_7->setText(QCoreApplication::translate("nhaphang", "VN\304\220", nullptr));
        label_8->setText(QCoreApplication::translate("nhaphang", "Th\303\264ng tin nh\341\272\255p h\303\240ng", nullptr));
        btnLuu->setText(QCoreApplication::translate("nhaphang", "L\306\260u", nullptr));
        btnHuy->setText(QCoreApplication::translate("nhaphang", "H\341\273\247y", nullptr));
        cbxLoaihang->setItemText(0, QCoreApplication::translate("nhaphang", "Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxLoaihang->setItemText(1, QCoreApplication::translate("nhaphang", "Ph\341\273\245 Ki\341\273\207n \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxLoaihang->setItemText(2, QCoreApplication::translate("nhaphang", "TV & Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n Gia D\341\273\245ng", nullptr));
        cbxLoaihang->setItemText(3, QCoreApplication::translate("nhaphang", "S\341\273\251c Kho\341\272\273 & L\303\240m \304\220\341\272\271p", nullptr));
        cbxLoaihang->setItemText(4, QCoreApplication::translate("nhaphang", "H\303\240ng M\341\272\271, B\303\251 & \304\220\341\273\223 Ch\306\241i", nullptr));
        cbxLoaihang->setItemText(5, QCoreApplication::translate("nhaphang", "Si\303\252u Th\341\273\213 T\341\272\241p Ho\303\241", nullptr));
        cbxLoaihang->setItemText(6, QCoreApplication::translate("nhaphang", "H\303\240ng Gia D\341\273\245ng & \304\220\341\273\235i S\341\273\221ng", nullptr));
        cbxLoaihang->setItemText(7, QCoreApplication::translate("nhaphang", "Th\341\273\235i Trang N\341\273\257", nullptr));
        cbxLoaihang->setItemText(8, QCoreApplication::translate("nhaphang", "Th\341\273\235i Trang Nam", nullptr));
        cbxLoaihang->setItemText(9, QCoreApplication::translate("nhaphang", "Ph\341\273\245 Ki\341\273\207n Th\341\273\235i Trang", nullptr));
        cbxLoaihang->setItemText(10, QCoreApplication::translate("nhaphang", "Th\341\273\203 Thao & Du L\341\273\213ch", nullptr));
        cbxLoaihang->setItemText(11, QCoreApplication::translate("nhaphang", "\303\224t\303\264, Xe M\303\241y & Thi\341\272\277t B\341\273\213 \304\220\341\273\213nh V\341\273\213", nullptr));

        label_9->setText(QCoreApplication::translate("nhaphang", "Ng\303\240y nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nhaphang: public Ui_nhaphang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NHAPHANG_H

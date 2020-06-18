/********************************************************************************
** Form generated from reading UI file 'AddVoucher.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDVOUCHER_H
#define UI_ADDVOUCHER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddVoucher
{
public:
    QWidget *centralwidget;
    QLabel *lblMa;
    QLabel *lblTen;
    QPushButton *btnLuu;
    QPushButton *btnHuy;
    QLineEdit *LineEditMa;
    QLineEdit *LineEditTen;
    QLabel *lblThem;
    QLabel *lblGiatri;
    QLabel *lblTime;
    QDateEdit *dateEditTimefrom;
    QLabel *lblTimeden;
    QDateEdit *dateEditTimeto;
    QLabel *lblTen_2;
    QComboBox *cbxLoaiVoucher;
    QLabel *lblphantram;
    QDoubleSpinBox *dspinBoxGiatri;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddVoucher)
    {
        if (AddVoucher->objectName().isEmpty())
            AddVoucher->setObjectName(QString::fromUtf8("AddVoucher"));
        AddVoucher->resize(468, 454);
        centralwidget = new QWidget(AddVoucher);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblMa = new QLabel(centralwidget);
        lblMa->setObjectName(QString::fromUtf8("lblMa"));
        lblMa->setGeometry(QRect(60, 40, 61, 31));
        lblTen = new QLabel(centralwidget);
        lblTen->setObjectName(QString::fromUtf8("lblTen"));
        lblTen->setGeometry(QRect(50, 80, 91, 51));
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(130, 360, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../DoAnCTDL/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(250, 360, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../DoAnCTDL/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon1);
        LineEditMa = new QLineEdit(centralwidget);
        LineEditMa->setObjectName(QString::fromUtf8("LineEditMa"));
        LineEditMa->setGeometry(QRect(140, 50, 201, 20));
        LineEditTen = new QLineEdit(centralwidget);
        LineEditTen->setObjectName(QString::fromUtf8("LineEditTen"));
        LineEditTen->setGeometry(QRect(140, 100, 201, 20));
        lblThem = new QLabel(centralwidget);
        lblThem->setObjectName(QString::fromUtf8("lblThem"));
        lblThem->setGeometry(QRect(150, 10, 191, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lblThem->setFont(font);
        lblThem->setTextFormat(Qt::AutoText);
        lblGiatri = new QLabel(centralwidget);
        lblGiatri->setObjectName(QString::fromUtf8("lblGiatri"));
        lblGiatri->setGeometry(QRect(50, 193, 81, 31));
        lblTime = new QLabel(centralwidget);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setGeometry(QRect(40, 260, 111, 16));
        dateEditTimefrom = new QDateEdit(centralwidget);
        dateEditTimefrom->setObjectName(QString::fromUtf8("dateEditTimefrom"));
        dateEditTimefrom->setGeometry(QRect(160, 260, 110, 22));
        lblTimeden = new QLabel(centralwidget);
        lblTimeden->setObjectName(QString::fromUtf8("lblTimeden"));
        lblTimeden->setGeometry(QRect(100, 300, 47, 13));
        dateEditTimeto = new QDateEdit(centralwidget);
        dateEditTimeto->setObjectName(QString::fromUtf8("dateEditTimeto"));
        dateEditTimeto->setGeometry(QRect(160, 300, 110, 22));
        lblTen_2 = new QLabel(centralwidget);
        lblTen_2->setObjectName(QString::fromUtf8("lblTen_2"));
        lblTen_2->setGeometry(QRect(50, 135, 91, 51));
        cbxLoaiVoucher = new QComboBox(centralwidget);
        cbxLoaiVoucher->setObjectName(QString::fromUtf8("cbxLoaiVoucher"));
        cbxLoaiVoucher->setGeometry(QRect(140, 150, 191, 22));
        lblphantram = new QLabel(centralwidget);
        lblphantram->setObjectName(QString::fromUtf8("lblphantram"));
        lblphantram->setGeometry(QRect(210, 200, 47, 20));
        dspinBoxGiatri = new QDoubleSpinBox(centralwidget);
        dspinBoxGiatri->setObjectName(QString::fromUtf8("dspinBoxGiatri"));
        dspinBoxGiatri->setGeometry(QRect(140, 200, 61, 22));
        dspinBoxGiatri->setDecimals(1);
        AddVoucher->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddVoucher);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 468, 21));
        AddVoucher->setMenuBar(menubar);
        statusbar = new QStatusBar(AddVoucher);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AddVoucher->setStatusBar(statusbar);

        retranslateUi(AddVoucher);

        QMetaObject::connectSlotsByName(AddVoucher);
    } // setupUi

    void retranslateUi(QMainWindow *AddVoucher)
    {
        AddVoucher->setWindowTitle(QCoreApplication::translate("AddVoucher", "MainWindow", nullptr));
        lblMa->setText(QCoreApplication::translate("AddVoucher", "M\303\243 Voucher", nullptr));
        lblTen->setText(QCoreApplication::translate("AddVoucher", "T\303\252n Voucher:", nullptr));
        btnLuu->setText(QCoreApplication::translate("AddVoucher", "L\306\260u", nullptr));
        btnHuy->setText(QCoreApplication::translate("AddVoucher", "Hu\341\273\267", nullptr));
        lblThem->setText(QCoreApplication::translate("AddVoucher", "TH\303\212M VOUCHER M\341\273\232I", nullptr));
        lblGiatri->setText(QCoreApplication::translate("AddVoucher", "Gi\303\241 tr\341\273\213 Voucher", nullptr));
        lblTime->setText(QCoreApplication::translate("AddVoucher", "Th\341\273\235i gian \303\241p d\341\273\245ng t\341\273\253:", nullptr));
        lblTimeden->setText(QCoreApplication::translate("AddVoucher", "\304\221\341\272\277n:", nullptr));
        lblTen_2->setText(QCoreApplication::translate("AddVoucher", "\303\201p d\341\273\245ng cho:", nullptr));
        lblphantram->setText(QCoreApplication::translate("AddVoucher", "(%)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddVoucher: public Ui_AddVoucher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDVOUCHER_H

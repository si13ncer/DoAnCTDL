/********************************************************************************
** Form generated from reading UI file 'danhsachdon.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DANHSACHDON_H
#define UI_DANHSACHDON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_danhsachdon
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *btnNew;
    QPushButton *btnOld;
    QLabel *label;
    QComboBox *cbxID;
    QTableWidget *tblDsdon;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *lblID;
    QLabel *label_4;
    QLineEdit *leditAdress;
    QLabel *label_6;
    QLabel *lblTen;
    QLabel *lblSdt;
    QLabel *lblTongtien;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *lblMuc;
    QLabel *label_15;
    QLabel *label_10;
    QLabel *lblSoluong;
    QLabel *lblDanhmuc;
    QLabel *lblTenhang;
    QLabel *label_8;
    QLabel *lblThanhToan;
    QLabel *label_13;
    QLabel *lblVanchuyen;
    QLabel *label_7;
    QLabel *lblSdt_2;
    QPushButton *bntLuu;
    QPushButton *btnThoat;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *danhsachdon)
    {
        if (danhsachdon->objectName().isEmpty())
            danhsachdon->setObjectName(QString::fromUtf8("danhsachdon"));
        danhsachdon->resize(962, 495);
        centralwidget = new QWidget(danhsachdon);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 10, 221, 31));
        QFont font;
        font.setPointSize(11);
        label_2->setFont(font);
        btnNew = new QPushButton(centralwidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(280, 80, 75, 23));
        btnOld = new QPushButton(centralwidget);
        btnOld->setObjectName(QString::fromUtf8("btnOld"));
        btnOld->setGeometry(QRect(370, 80, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 61, 21));
        cbxID = new QComboBox(centralwidget);
        cbxID->setObjectName(QString::fromUtf8("cbxID"));
        cbxID->setGeometry(QRect(90, 80, 131, 21));
        tblDsdon = new QTableWidget(centralwidget);
        if (tblDsdon->columnCount() < 4)
            tblDsdon->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tblDsdon->setObjectName(QString::fromUtf8("tblDsdon"));
        tblDsdon->setGeometry(QRect(20, 120, 431, 311));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(460, 80, 491, 351));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 20, 80, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 50, 31, 16));
        lblID = new QLabel(groupBox);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(50, 20, 131, 21));
        lblID->setFrameShape(QFrame::StyledPanel);
        lblID->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 24, 41, 16));
        leditAdress = new QLineEdit(groupBox);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(50, 50, 211, 20));
        leditAdress->setReadOnly(false);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 41, 16));
        lblTen = new QLabel(groupBox);
        lblTen->setObjectName(QString::fromUtf8("lblTen"));
        lblTen->setGeometry(QRect(360, 20, 121, 21));
        lblTen->setFrameShape(QFrame::StyledPanel);
        lblSdt = new QLabel(groupBox);
        lblSdt->setObjectName(QString::fromUtf8("lblSdt"));
        lblSdt->setGeometry(QRect(360, 50, 121, 21));
        lblSdt->setFrameShape(QFrame::StyledPanel);
        lblTongtien = new QLabel(groupBox);
        lblTongtien->setObjectName(QString::fromUtf8("lblTongtien"));
        lblTongtien->setGeometry(QRect(90, 220, 121, 21));
        lblTongtien->setFrameShape(QFrame::StyledPanel);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 220, 47, 21));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(530, 220, 21, 21));
        lblMuc = new QLabel(groupBox);
        lblMuc->setObjectName(QString::fromUtf8("lblMuc"));
        lblMuc->setGeometry(QRect(10, 140, 61, 21));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 180, 45, 16));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 100, 67, 21));
        lblSoluong = new QLabel(groupBox);
        lblSoluong->setObjectName(QString::fromUtf8("lblSoluong"));
        lblSoluong->setGeometry(QRect(90, 180, 47, 21));
        lblSoluong->setFrameShape(QFrame::StyledPanel);
        lblDanhmuc = new QLabel(groupBox);
        lblDanhmuc->setObjectName(QString::fromUtf8("lblDanhmuc"));
        lblDanhmuc->setGeometry(QRect(90, 140, 171, 21));
        lblDanhmuc->setFrameShape(QFrame::StyledPanel);
        lblTenhang = new QLabel(groupBox);
        lblTenhang->setObjectName(QString::fromUtf8("lblTenhang"));
        lblTenhang->setGeometry(QRect(90, 100, 171, 21));
        lblTenhang->setFrameShape(QFrame::StyledPanel);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 260, 71, 16));
        lblThanhToan = new QLabel(groupBox);
        lblThanhToan->setObjectName(QString::fromUtf8("lblThanhToan"));
        lblThanhToan->setGeometry(QRect(90, 260, 121, 21));
        lblThanhToan->setFrameShape(QFrame::StyledPanel);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 300, 71, 16));
        lblVanchuyen = new QLabel(groupBox);
        lblVanchuyen->setObjectName(QString::fromUtf8("lblVanchuyen"));
        lblVanchuyen->setGeometry(QRect(90, 300, 171, 21));
        lblVanchuyen->setFrameShape(QFrame::StyledPanel);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 100, 47, 21));
        lblSdt_2 = new QLabel(groupBox);
        lblSdt_2->setObjectName(QString::fromUtf8("lblSdt_2"));
        lblSdt_2->setGeometry(QRect(360, 100, 121, 21));
        lblSdt_2->setFrameShape(QFrame::StyledPanel);
        bntLuu = new QPushButton(centralwidget);
        bntLuu->setObjectName(QString::fromUtf8("bntLuu"));
        bntLuu->setGeometry(QRect(730, 440, 75, 23));
        btnThoat = new QPushButton(centralwidget);
        btnThoat->setObjectName(QString::fromUtf8("btnThoat"));
        btnThoat->setGeometry(QRect(820, 440, 75, 23));
        danhsachdon->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(danhsachdon);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        danhsachdon->setStatusBar(statusbar);

        retranslateUi(danhsachdon);

        QMetaObject::connectSlotsByName(danhsachdon);
    } // setupUi

    void retranslateUi(QMainWindow *danhsachdon)
    {
        danhsachdon->setWindowTitle(QCoreApplication::translate("danhsachdon", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("danhsachdon", "DANH S\303\201CH \304\220\306\240N \304\220\341\272\266T H\303\200NG", nullptr));
        btnNew->setText(QCoreApplication::translate("danhsachdon", "M\341\273\233i nh\341\272\245t", nullptr));
        btnOld->setText(QCoreApplication::translate("danhsachdon", "C\305\251 nh\341\272\245t", nullptr));
        label->setText(QCoreApplication::translate("danhsachdon", "T\303\254m theo ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblDsdon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("danhsachdon", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblDsdon->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("danhsachdon", "Ng\303\240y Mua", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblDsdon->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("danhsachdon", "Tr\341\272\241ng Th\303\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblDsdon->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("danhsachdon", "Ghi Ch\303\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("danhsachdon", "TH\303\224NG TIN CHI TI\341\272\276T", nullptr));
        label_3->setText(QCoreApplication::translate("danhsachdon", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        label_5->setText(QCoreApplication::translate("danhsachdon", "S\304\220T                    ", nullptr));
        lblID->setText(QString());
        label_4->setText(QCoreApplication::translate("danhsachdon", "ID                    ", nullptr));
        leditAdress->setText(QString());
        label_6->setText(QCoreApplication::translate("danhsachdon", "\304\220\341\273\213a ch\341\273\211             ", nullptr));
        lblTen->setText(QString());
        lblSdt->setText(QString());
        lblTongtien->setText(QString());
        label_17->setText(QCoreApplication::translate("danhsachdon", "T\341\273\225ng Ti\341\273\201n", nullptr));
        label_18->setText(QCoreApplication::translate("danhsachdon", "VND", nullptr));
        lblMuc->setText(QCoreApplication::translate("danhsachdon", "Danh M\341\273\245c", nullptr));
        label_15->setText(QCoreApplication::translate("danhsachdon", "S\341\273\221 L\306\260\341\273\243ng", nullptr));
        label_10->setText(QCoreApplication::translate("danhsachdon", "T\303\252n M\341\272\267t H\303\240ng", nullptr));
        lblSoluong->setText(QString());
        lblDanhmuc->setText(QString());
        lblTenhang->setText(QCoreApplication::translate("danhsachdon", "T\303\252n", nullptr));
        label_8->setText(QCoreApplication::translate("danhsachdon", "Thanh To\303\241n", nullptr));
        lblThanhToan->setText(QString());
        label_13->setText(QCoreApplication::translate("danhsachdon", "V\341\272\255n Chuy\341\273\203n", nullptr));
        lblVanchuyen->setText(QString());
        label_7->setText(QCoreApplication::translate("danhsachdon", "M\303\243 H\303\240ng", nullptr));
        lblSdt_2->setText(QString());
        bntLuu->setText(QCoreApplication::translate("danhsachdon", "L\306\260u", nullptr));
        btnThoat->setText(QCoreApplication::translate("danhsachdon", "Tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class danhsachdon: public Ui_danhsachdon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANHSACHDON_H

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
#include <QtGui/QIcon>
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
    QLabel *lblMahang;
    QPushButton *bntLuu;
    QPushButton *btnThoat;
    QLabel *label_9;
    QLineEdit *leditFind;
    QPushButton *btnFind;
    QPushButton *btnRefresh;
    QPushButton *btnDel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *danhsachdon)
    {
        if (danhsachdon->objectName().isEmpty())
            danhsachdon->setObjectName(QString::fromUtf8("danhsachdon"));
        danhsachdon->resize(1065, 527);
        QFont font;
        font.setPointSize(10);
        danhsachdon->setFont(font);
        centralwidget = new QWidget(danhsachdon);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 20, 221, 31));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        btnNew = new QPushButton(centralwidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));
        btnNew->setGeometry(QRect(470, 80, 75, 21));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/sortup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNew->setIcon(icon);
        btnOld = new QPushButton(centralwidget);
        btnOld->setObjectName(QString::fromUtf8("btnOld"));
        btnOld->setGeometry(QRect(470, 110, 75, 21));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/sortdown.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOld->setIcon(icon1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 71, 21));
        cbxID = new QComboBox(centralwidget);
        cbxID->setObjectName(QString::fromUtf8("cbxID"));
        cbxID->setGeometry(QRect(100, 70, 121, 21));
        tblDsdon = new QTableWidget(centralwidget);
        if (tblDsdon->columnCount() < 5)
            tblDsdon->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblDsdon->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tblDsdon->setObjectName(QString::fromUtf8("tblDsdon"));
        tblDsdon->setGeometry(QRect(20, 140, 521, 311));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(550, 100, 511, 351));
        QFont font2;
        font2.setPointSize(8);
        groupBox->setFont(font2);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 40, 101, 16));
        label_3->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 80, 61, 16));
        label_5->setFont(font);
        lblID = new QLabel(groupBox);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(60, 40, 141, 21));
        lblID->setFont(font);
        lblID->setFrameShape(QFrame::StyledPanel);
        lblID->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 40, 41, 16));
        label_4->setFont(font);
        leditAdress = new QLineEdit(groupBox);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(60, 80, 171, 21));
        leditAdress->setFont(font);
        leditAdress->setReadOnly(false);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 80, 51, 21));
        label_6->setFont(font);
        lblTen = new QLabel(groupBox);
        lblTen->setObjectName(QString::fromUtf8("lblTen"));
        lblTen->setGeometry(QRect(360, 40, 131, 21));
        lblTen->setFont(font);
        lblTen->setFrameShape(QFrame::StyledPanel);
        lblSdt = new QLabel(groupBox);
        lblSdt->setObjectName(QString::fromUtf8("lblSdt"));
        lblSdt->setGeometry(QRect(360, 80, 131, 21));
        lblSdt->setFont(font);
        lblSdt->setFrameShape(QFrame::StyledPanel);
        lblTongtien = new QLabel(groupBox);
        lblTongtien->setObjectName(QString::fromUtf8("lblTongtien"));
        lblTongtien->setGeometry(QRect(360, 240, 121, 21));
        lblTongtien->setFont(font);
        lblTongtien->setFrameShape(QFrame::StyledPanel);
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(280, 240, 71, 21));
        label_17->setFont(font);
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(530, 220, 21, 21));
        lblMuc = new QLabel(groupBox);
        lblMuc->setObjectName(QString::fromUtf8("lblMuc"));
        lblMuc->setGeometry(QRect(10, 200, 61, 21));
        lblMuc->setFont(font);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(280, 200, 61, 16));
        label_15->setFont(font);
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 160, 81, 21));
        label_10->setFont(font);
        lblSoluong = new QLabel(groupBox);
        lblSoluong->setObjectName(QString::fromUtf8("lblSoluong"));
        lblSoluong->setGeometry(QRect(360, 200, 47, 21));
        lblSoluong->setFont(font);
        lblSoluong->setFrameShape(QFrame::StyledPanel);
        lblDanhmuc = new QLabel(groupBox);
        lblDanhmuc->setObjectName(QString::fromUtf8("lblDanhmuc"));
        lblDanhmuc->setGeometry(QRect(100, 200, 161, 21));
        lblDanhmuc->setFont(font);
        lblDanhmuc->setFrameShape(QFrame::StyledPanel);
        lblTenhang = new QLabel(groupBox);
        lblTenhang->setObjectName(QString::fromUtf8("lblTenhang"));
        lblTenhang->setGeometry(QRect(100, 160, 161, 21));
        lblTenhang->setFont(font);
        lblTenhang->setFrameShape(QFrame::StyledPanel);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 240, 71, 16));
        label_8->setFont(font);
        lblThanhToan = new QLabel(groupBox);
        lblThanhToan->setObjectName(QString::fromUtf8("lblThanhToan"));
        lblThanhToan->setGeometry(QRect(100, 240, 161, 21));
        lblThanhToan->setFont(font);
        lblThanhToan->setFrameShape(QFrame::StyledPanel);
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 280, 71, 16));
        label_13->setFont(font);
        lblVanchuyen = new QLabel(groupBox);
        lblVanchuyen->setObjectName(QString::fromUtf8("lblVanchuyen"));
        lblVanchuyen->setGeometry(QRect(100, 280, 161, 21));
        lblVanchuyen->setFont(font);
        lblVanchuyen->setFrameShape(QFrame::StyledPanel);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(280, 160, 61, 21));
        label_7->setFont(font);
        lblMahang = new QLabel(groupBox);
        lblMahang->setObjectName(QString::fromUtf8("lblMahang"));
        lblMahang->setGeometry(QRect(360, 160, 121, 21));
        lblMahang->setFont(font);
        lblMahang->setFrameShape(QFrame::StyledPanel);
        bntLuu = new QPushButton(centralwidget);
        bntLuu->setObjectName(QString::fromUtf8("bntLuu"));
        bntLuu->setGeometry(QRect(500, 460, 31, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        bntLuu->setIcon(icon2);
        bntLuu->setIconSize(QSize(20, 20));
        btnThoat = new QPushButton(centralwidget);
        btnThoat->setObjectName(QString::fromUtf8("btnThoat"));
        btnThoat->setGeometry(QRect(980, 460, 75, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThoat->setIcon(icon3);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 100, 71, 21));
        leditFind = new QLineEdit(centralwidget);
        leditFind->setObjectName(QString::fromUtf8("leditFind"));
        leditFind->setGeometry(QRect(100, 100, 121, 21));
        btnFind = new QPushButton(centralwidget);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setGeometry(QRect(230, 100, 31, 31));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/res/icon/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFind->setIcon(icon4);
        btnFind->setIconSize(QSize(24, 24));
        btnRefresh = new QPushButton(centralwidget);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(20, 460, 31, 31));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/res/icon/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRefresh->setIcon(icon5);
        btnRefresh->setIconSize(QSize(20, 20));
        btnDel = new QPushButton(centralwidget);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));
        btnDel->setGeometry(QRect(260, 460, 31, 31));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/res/icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDel->setIcon(icon6);
        btnDel->setIconSize(QSize(30, 30));
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
        btnNew->setText(QCoreApplication::translate("danhsachdon", "  M\341\273\233i  ", nullptr));
        btnOld->setText(QCoreApplication::translate("danhsachdon", "  C\305\251   ", nullptr));
        label->setText(QCoreApplication::translate("danhsachdon", "T\303\254m theo ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblDsdon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("danhsachdon", "M\303\243 \304\220\306\241n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblDsdon->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("danhsachdon", "M\303\243 H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblDsdon->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("danhsachdon", "Ng\303\240y Mua", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblDsdon->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("danhsachdon", "Tr\341\272\241ng Th\303\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblDsdon->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("danhsachdon", "Ghi Ch\303\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("danhsachdon", "TH\303\224NG TIN CHI TI\341\272\276T", nullptr));
        label_3->setText(QCoreApplication::translate("danhsachdon", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        label_5->setText(QCoreApplication::translate("danhsachdon", "S\304\220T                    ", nullptr));
        lblID->setText(QString());
        label_4->setText(QCoreApplication::translate("danhsachdon", "ID                    ", nullptr));
        leditAdress->setText(QString());
        label_6->setText(QCoreApplication::translate("danhsachdon", "\304\220\341\273\213a Ch\341\273\211    ", nullptr));
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
        lblTenhang->setText(QString());
        label_8->setText(QCoreApplication::translate("danhsachdon", "Thanh To\303\241n", nullptr));
        lblThanhToan->setText(QString());
        label_13->setText(QCoreApplication::translate("danhsachdon", "V\341\272\255n Chuy\341\273\203n", nullptr));
        lblVanchuyen->setText(QString());
        label_7->setText(QCoreApplication::translate("danhsachdon", "M\303\243 H\303\240ng", nullptr));
        lblMahang->setText(QString());
        bntLuu->setText(QString());
        btnThoat->setText(QCoreApplication::translate("danhsachdon", "Tho\303\241t", nullptr));
        label_9->setText(QCoreApplication::translate("danhsachdon", "T\303\254m m\303\243 \304\221\306\241n", nullptr));
        btnFind->setText(QString());
        btnRefresh->setText(QString());
        btnDel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class danhsachdon: public Ui_danhsachdon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DANHSACHDON_H

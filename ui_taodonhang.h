/********************************************************************************
** Form generated from reading UI file 'taodonhang.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAODONHANG_H
#define UI_TAODONHANG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_taodonhang
{
public:
    QWidget *centralwidget;
    QPushButton *btnLuu;
    QPushButton *btnHuy;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *leditName;
    QLabel *label_5;
    QLabel *lblID;
    QLineEdit *leditPhone;
    QLabel *label_3;
    QLineEdit *leditAdress;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *label_17;
    QComboBox *cbxDanhmuc;
    QLabel *label_16;
    QLabel *lblLoai;
    QComboBox *cbxLoai;
    QComboBox *comboBox_5;
    QComboBox *comboBox_4;
    QSpinBox *spinBox;
    QLabel *label_15;
    QLabel *label_18;
    QPushButton *btnThemvaogio;
    QLabel *lblMuc;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_11;
    QGroupBox *groupBox_3;
    QSplitter *splitter_4;
    QLabel *lblThanhtoan;
    QComboBox *cbxThanhtoan;
    QTableWidget *tblGiohang;
    QSplitter *splitter_3;
    QLabel *lblGiao;
    QComboBox *cbxGiao;
    QPushButton *btnXoakhoigio;
    QLabel *lblTongtien;
    QLabel *lblTong;
    QLabel *label;
    QLabel *label_6;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *taodonhang)
    {
        if (taodonhang->objectName().isEmpty())
            taodonhang->setObjectName(QString::fromUtf8("taodonhang"));
        taodonhang->resize(663, 568);
        taodonhang->setMinimumSize(QSize(663, 395));
        centralwidget = new QWidget(taodonhang);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(461, 520, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(550, 520, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon1);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 571, 80));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(329, 24, 80, 16));
        leditName = new QLineEdit(groupBox);
        leditName->setObjectName(QString::fromUtf8("leditName"));
        leditName->setGeometry(QRect(421, 24, 133, 20));
        leditName->setMaxLength(60);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(329, 50, 80, 16));
        lblID = new QLabel(groupBox);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(91, 22, 131, 21));
        lblID->setFrameShape(QFrame::StyledPanel);
        lblID->setFrameShadow(QFrame::Plain);
        leditPhone = new QLineEdit(groupBox);
        leditPhone->setObjectName(QString::fromUtf8("leditPhone"));
        leditPhone->setGeometry(QRect(421, 50, 133, 20));
        leditPhone->setMaxLength(12);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 24, 71, 16));
        leditAdress = new QLineEdit(groupBox);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(90, 50, 211, 20));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 71, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 631, 181));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 73, 81, 20));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 110, 61, 21));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(330, 150, 47, 21));
        cbxDanhmuc = new QComboBox(groupBox_2);
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->addItem(QString());
        cbxDanhmuc->setObjectName(QString::fromUtf8("cbxDanhmuc"));
        cbxDanhmuc->setGeometry(QRect(420, 30, 161, 22));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(420, 150, 121, 21));
        label_16->setFrameShape(QFrame::StyledPanel);
        lblLoai = new QLabel(groupBox_2);
        lblLoai->setObjectName(QString::fromUtf8("lblLoai"));
        lblLoai->setGeometry(QRect(10, 30, 71, 21));
        cbxLoai = new QComboBox(groupBox_2);
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->addItem(QString());
        cbxLoai->setObjectName(QString::fromUtf8("cbxLoai"));
        cbxLoai->setGeometry(QRect(90, 30, 181, 22));
        comboBox_5 = new QComboBox(groupBox_2);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(90, 110, 131, 22));
        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(90, 70, 181, 22));
        spinBox = new QSpinBox(groupBox_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(420, 110, 51, 20));
        spinBox->setMinimum(1);
        spinBox->setMaximum(999);
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(330, 110, 45, 16));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(550, 150, 21, 21));
        btnThemvaogio = new QPushButton(groupBox_2);
        btnThemvaogio->setObjectName(QString::fromUtf8("btnThemvaogio"));
        btnThemvaogio->setGeometry(QRect(580, 150, 51, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/icon/cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThemvaogio->setIcon(icon2);
        btnThemvaogio->setIconSize(QSize(25, 25));
        lblMuc = new QLabel(groupBox_2);
        lblMuc->setObjectName(QString::fromUtf8("lblMuc"));
        lblMuc->setGeometry(QRect(330, 30, 61, 21));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(550, 70, 47, 21));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(420, 70, 121, 21));
        label_12->setFrameShape(QFrame::StyledPanel);
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(330, 70, 47, 21));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 290, 631, 221));
        splitter_4 = new QSplitter(groupBox_3);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(10, 180, 181, 20));
        splitter_4->setOrientation(Qt::Horizontal);
        lblThanhtoan = new QLabel(splitter_4);
        lblThanhtoan->setObjectName(QString::fromUtf8("lblThanhtoan"));
        splitter_4->addWidget(lblThanhtoan);
        cbxThanhtoan = new QComboBox(splitter_4);
        cbxThanhtoan->addItem(QString());
        cbxThanhtoan->addItem(QString());
        cbxThanhtoan->addItem(QString());
        cbxThanhtoan->setObjectName(QString::fromUtf8("cbxThanhtoan"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxThanhtoan->sizePolicy().hasHeightForWidth());
        cbxThanhtoan->setSizePolicy(sizePolicy);
        splitter_4->addWidget(cbxThanhtoan);
        tblGiohang = new QTableWidget(groupBox_3);
        if (tblGiohang->columnCount() < 5)
            tblGiohang->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblGiohang->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblGiohang->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblGiohang->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblGiohang->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblGiohang->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tblGiohang->setObjectName(QString::fromUtf8("tblGiohang"));
        tblGiohang->setGeometry(QRect(40, 30, 541, 111));
        splitter_3 = new QSplitter(groupBox_3);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(320, 180, 251, 20));
        splitter_3->setOrientation(Qt::Horizontal);
        lblGiao = new QLabel(splitter_3);
        lblGiao->setObjectName(QString::fromUtf8("lblGiao"));
        splitter_3->addWidget(lblGiao);
        cbxGiao = new QComboBox(splitter_3);
        cbxGiao->addItem(QString());
        cbxGiao->addItem(QString());
        cbxGiao->addItem(QString());
        cbxGiao->addItem(QString());
        cbxGiao->setObjectName(QString::fromUtf8("cbxGiao"));
        cbxGiao->setEnabled(true);
        sizePolicy.setHeightForWidth(cbxGiao->sizePolicy().hasHeightForWidth());
        cbxGiao->setSizePolicy(sizePolicy);
        splitter_3->addWidget(cbxGiao);
        btnXoakhoigio = new QPushButton(groupBox_3);
        btnXoakhoigio->setObjectName(QString::fromUtf8("btnXoakhoigio"));
        btnXoakhoigio->setGeometry(QRect(580, 140, 51, 31));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/res/icon/cart (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnXoakhoigio->setIcon(icon3);
        btnXoakhoigio->setIconSize(QSize(25, 26));
        lblTongtien = new QLabel(groupBox_3);
        lblTongtien->setObjectName(QString::fromUtf8("lblTongtien"));
        lblTongtien->setGeometry(QRect(260, 150, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblTongtien->setFont(font);
        lblTongtien->setAlignment(Qt::AlignCenter);
        lblTong = new QLabel(groupBox_3);
        lblTong->setObjectName(QString::fromUtf8("lblTong"));
        lblTong->setGeometry(QRect(200, 150, 58, 16));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 150, 20, 16));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(323, 150, 16, 16));
        taodonhang->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(taodonhang);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        taodonhang->setStatusBar(statusbar);

        retranslateUi(taodonhang);

        QMetaObject::connectSlotsByName(taodonhang);
    } // setupUi

    void retranslateUi(QMainWindow *taodonhang)
    {
        taodonhang->setWindowTitle(QCoreApplication::translate("taodonhang", "MainWindow", nullptr));
        btnLuu->setText(QCoreApplication::translate("taodonhang", "L\306\260u", nullptr));
        btnHuy->setText(QCoreApplication::translate("taodonhang", "Hu\341\273\267", nullptr));
        groupBox->setTitle(QCoreApplication::translate("taodonhang", "TH\303\224NG TIN KH\303\201CH H\303\200NG ", nullptr));
        label_2->setText(QCoreApplication::translate("taodonhang", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        label_5->setText(QCoreApplication::translate("taodonhang", "S\304\220T                    ", nullptr));
        lblID->setText(QString());
        leditPhone->setText(QString());
        label_3->setText(QCoreApplication::translate("taodonhang", "ID                    ", nullptr));
        label_4->setText(QCoreApplication::translate("taodonhang", "\304\220\341\273\213a ch\341\273\211             ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("taodonhang", "\304\220\306\240N H\303\200NG", nullptr));
        label_10->setText(QCoreApplication::translate("taodonhang", "T\303\252n M\341\272\267t H\303\240ng", nullptr));
        label_14->setText(QCoreApplication::translate("taodonhang", "Voucher", nullptr));
        label_17->setText(QCoreApplication::translate("taodonhang", "T\341\273\225ng Ti\341\273\201n", nullptr));
        cbxDanhmuc->setItemText(0, QCoreApplication::translate("taodonhang", "\304\220i\341\273\207n tho\341\272\241i di \304\221\341\273\231ng", nullptr));
        cbxDanhmuc->setItemText(1, QCoreApplication::translate("taodonhang", "M\303\241y t\303\255nh  b\341\272\243ng", nullptr));
        cbxDanhmuc->setItemText(2, QCoreApplication::translate("taodonhang", "Laptop", nullptr));
        cbxDanhmuc->setItemText(3, QCoreApplication::translate("taodonhang", "M\303\241y t\303\255nh \304\221\341\273\203 b\303\240n", nullptr));
        cbxDanhmuc->setItemText(4, QCoreApplication::translate("taodonhang", "\303\202m thanh", nullptr));
        cbxDanhmuc->setItemText(5, QCoreApplication::translate("taodonhang", "Camera gi\303\241m s\303\241t", nullptr));
        cbxDanhmuc->setItemText(6, QCoreApplication::translate("taodonhang", "M\303\241y \341\272\243nh k\341\273\271 thu\341\272\255t s\341\273\221", nullptr));
        cbxDanhmuc->setItemText(7, QCoreApplication::translate("taodonhang", "M\303\241y quay phim", nullptr));
        cbxDanhmuc->setItemText(8, QCoreApplication::translate("taodonhang", "M\303\240n h\303\254nh vi t\303\255nh", nullptr));
        cbxDanhmuc->setItemText(9, QCoreApplication::translate("taodonhang", "M\303\241y in", nullptr));
        cbxDanhmuc->setItemText(10, QCoreApplication::translate("taodonhang", "\304\220\341\273\223ng h\341\273\223 th\303\264ng minh", nullptr));
        cbxDanhmuc->setItemText(11, QCoreApplication::translate("taodonhang", "M\303\241y ch\306\241i game", nullptr));

        label_16->setText(QString());
        lblLoai->setText(QCoreApplication::translate("taodonhang", "Ph\303\242n Lo\341\272\241i", nullptr));
        cbxLoai->setItemText(0, QCoreApplication::translate("taodonhang", "Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxLoai->setItemText(1, QCoreApplication::translate("taodonhang", "Ph\341\273\245 Ki\341\273\207n \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxLoai->setItemText(2, QCoreApplication::translate("taodonhang", "TV & Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n Gia D\341\273\245ng", nullptr));
        cbxLoai->setItemText(3, QCoreApplication::translate("taodonhang", "S\341\273\251c Kho\341\272\273 & L\303\240m \304\220\341\272\271p", nullptr));
        cbxLoai->setItemText(4, QCoreApplication::translate("taodonhang", "H\303\240ng M\341\272\271, B\303\251 & \304\220\341\273\223 Ch\306\241i", nullptr));
        cbxLoai->setItemText(5, QCoreApplication::translate("taodonhang", "Si\303\252u Th\341\273\213 T\341\272\241p Ho\303\241", nullptr));
        cbxLoai->setItemText(6, QCoreApplication::translate("taodonhang", "H\303\240ng Gia D\341\273\245ng & \304\220\341\273\235i S\341\273\221ng", nullptr));
        cbxLoai->setItemText(7, QCoreApplication::translate("taodonhang", "Th\341\273\235i Trang N\341\273\257", nullptr));
        cbxLoai->setItemText(8, QCoreApplication::translate("taodonhang", "Th\341\273\235i Trang Nam", nullptr));
        cbxLoai->setItemText(9, QCoreApplication::translate("taodonhang", "Ph\341\273\245 Ki\341\273\207n Th\341\273\235i Trang", nullptr));
        cbxLoai->setItemText(10, QCoreApplication::translate("taodonhang", "Th\341\273\203 Thao & Du L\341\273\213ch", nullptr));
        cbxLoai->setItemText(11, QCoreApplication::translate("taodonhang", "\303\224t\303\264, Xe M\303\241y & Thi\341\272\277t B\341\273\213 \304\220\341\273\213nh V\341\273\213", nullptr));

        label_15->setText(QCoreApplication::translate("taodonhang", "S\341\273\221 L\306\260\341\273\243ng", nullptr));
        label_18->setText(QCoreApplication::translate("taodonhang", "VND", nullptr));
        btnThemvaogio->setText(QString());
        lblMuc->setText(QCoreApplication::translate("taodonhang", "Danh M\341\273\245c", nullptr));
        label_13->setText(QCoreApplication::translate("taodonhang", "VND", nullptr));
        label_12->setText(QString());
        label_11->setText(QCoreApplication::translate("taodonhang", "\304\220\306\241n Gi\303\241", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("taodonhang", "GI\341\273\216 H\303\200NG", nullptr));
        lblThanhtoan->setText(QCoreApplication::translate("taodonhang", "Thanh to\303\241n      ", nullptr));
        cbxThanhtoan->setItemText(0, QCoreApplication::translate("taodonhang", "Thanh to\303\241n th\341\272\273", nullptr));
        cbxThanhtoan->setItemText(1, QCoreApplication::translate("taodonhang", "V\303\255 \304\221\341\273\207n t\341\273\255", nullptr));
        cbxThanhtoan->setItemText(2, QCoreApplication::translate("taodonhang", "Ship COD", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tblGiohang->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("taodonhang", "M\303\243 H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblGiohang->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("taodonhang", "T\303\252n H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblGiohang->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("taodonhang", "Lo\341\272\241i H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblGiohang->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("taodonhang", "S\341\273\221 L\306\260\341\273\243ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblGiohang->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("taodonhang", "Th\303\240nh Ti\341\273\201n", nullptr));
        lblGiao->setText(QCoreApplication::translate("taodonhang", "\304\220\306\241n v\341\273\213 giao h\303\240ng ", nullptr));
        cbxGiao->setItemText(0, QCoreApplication::translate("taodonhang", "Giao h\303\240ng ti\341\272\277t ki\341\273\207m - GHTK", nullptr));
        cbxGiao->setItemText(1, QCoreApplication::translate("taodonhang", "Giao h\303\240ng nhanh - GHN", nullptr));
        cbxGiao->setItemText(2, QCoreApplication::translate("taodonhang", "Vietnam Post", nullptr));
        cbxGiao->setItemText(3, QCoreApplication::translate("taodonhang", "Viettel Post", nullptr));

        btnXoakhoigio->setText(QString());
        lblTongtien->setText(QString());
        lblTong->setText(QCoreApplication::translate("taodonhang", "T\341\273\224NG TI\341\273\200N:", nullptr));
        label->setText(QCoreApplication::translate("taodonhang", "VND", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class taodonhang: public Ui_taodonhang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAODONHANG_H

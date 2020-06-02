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
    QPushButton *pushButton;
    QLabel *lblMuc;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_11;
    QGroupBox *groupBox_3;
    QSplitter *splitter_5;
    QLabel *lblTongtien;
    QLabel *label_6;
    QLabel *label;
    QSplitter *splitter_4;
    QLabel *lblThanhtoan;
    QComboBox *cbxThanhtoan;
    QTableWidget *tableWidget;
    QSplitter *splitter_3;
    QLabel *lblGiao;
    QComboBox *cbxGiao;
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
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(550, 520, 75, 23));
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
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(580, 150, 51, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 25));
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
        splitter_5 = new QSplitter(groupBox_3);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setGeometry(QRect(200, 140, 201, 21));
        splitter_5->setOrientation(Qt::Horizontal);
        lblTongtien = new QLabel(splitter_5);
        lblTongtien->setObjectName(QString::fromUtf8("lblTongtien"));
        splitter_5->addWidget(lblTongtien);
        label_6 = new QLabel(splitter_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        splitter_5->addWidget(label_6);
        label = new QLabel(splitter_5);
        label->setObjectName(QString::fromUtf8("label"));
        splitter_5->addWidget(label);
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
        tableWidget = new QTableWidget(groupBox_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 541, 111));
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
        lblID->setText(QCoreApplication::translate("taodonhang", "User ID", nullptr));
        leditPhone->setText(QString());
        label_3->setText(QCoreApplication::translate("taodonhang", "ID                    ", nullptr));
        label_4->setText(QCoreApplication::translate("taodonhang", "\304\220\341\273\213a ch\341\273\211             ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("taodonhang", "\304\220\306\240N H\303\200NG", nullptr));
        label_10->setText(QCoreApplication::translate("taodonhang", "T\303\252n M\341\272\267t H\303\240ng", nullptr));
        label_14->setText(QCoreApplication::translate("taodonhang", "Voucher", nullptr));
        label_17->setText(QCoreApplication::translate("taodonhang", "T\341\273\225ng Ti\341\273\201n", nullptr));
        label_16->setText(QCoreApplication::translate("taodonhang", "lbl T\341\273\225ng", nullptr));
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
        pushButton->setText(QString());
        lblMuc->setText(QCoreApplication::translate("taodonhang", "Danh M\341\273\245c", nullptr));
        label_13->setText(QCoreApplication::translate("taodonhang", "VND", nullptr));
        label_12->setText(QCoreApplication::translate("taodonhang", "lbl \304\220\306\241n gi\303\241", nullptr));
        label_11->setText(QCoreApplication::translate("taodonhang", "\304\220\306\241n Gi\303\241", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("taodonhang", "GI\341\273\216 H\303\200NG", nullptr));
        lblTongtien->setText(QCoreApplication::translate("taodonhang", "T\341\273\224NG TI\341\273\200N:", nullptr));
        label_6->setText(QCoreApplication::translate("taodonhang", "lblTongtien2", nullptr));
        label->setText(QCoreApplication::translate("taodonhang", "VND", nullptr));
        lblThanhtoan->setText(QCoreApplication::translate("taodonhang", "Thanh to\303\241n      ", nullptr));
        cbxThanhtoan->setItemText(0, QCoreApplication::translate("taodonhang", "Thanh to\303\241n th\341\272\273", nullptr));
        cbxThanhtoan->setItemText(1, QCoreApplication::translate("taodonhang", "V\303\255 \304\221\341\273\207n t\341\273\255", nullptr));
        cbxThanhtoan->setItemText(2, QCoreApplication::translate("taodonhang", "Ship COD", nullptr));

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("taodonhang", "M\303\243 h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("taodonhang", "T\303\252n h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("taodonhang", "Lo\341\272\241i h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("taodonhang", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("taodonhang", "Th\303\240nh ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("taodonhang", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("taodonhang", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("taodonhang", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("taodonhang", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("taodonhang", "5", nullptr));
        lblGiao->setText(QCoreApplication::translate("taodonhang", "\304\220\306\241n v\341\273\213 giao h\303\240ng ", nullptr));
        cbxGiao->setItemText(0, QCoreApplication::translate("taodonhang", "Giao h\303\240ng ti\341\272\277t ki\341\273\207m - GHTK", nullptr));
        cbxGiao->setItemText(1, QCoreApplication::translate("taodonhang", "Giao h\303\240ng nhanh - GHN", nullptr));
        cbxGiao->setItemText(2, QCoreApplication::translate("taodonhang", "Vietnam Post", nullptr));
        cbxGiao->setItemText(3, QCoreApplication::translate("taodonhang", "Viettel Post", nullptr));

    } // retranslateUi

};

namespace Ui {
    class taodonhang: public Ui_taodonhang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAODONHANG_H

/********************************************************************************
** Form generated from reading UI file 'lichsumua.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICHSUMUA_H
#define UI_LICHSUMUA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_lichsumua
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *lblID;
    QLabel *label_3;
    QLineEdit *leditAdress;
    QLabel *label_4;
    QLabel *lblTen;
    QLabel *lblSdt;
    QLabel *label;
    QTableWidget *tblLichsudon;
    QPushButton *btnLuu;
    QPushButton *btnThoat;
    QGroupBox *groupBox_2;
    QLabel *label_10;
    QGroupBox *groupBox_3;
    QLabel *lblSodon;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *lblGiatri;
    QLabel *label_7;
    QLabel *lblThanhcong;
    QLabel *label_8;

    void setupUi(QDialog *lichsumua)
    {
        if (lichsumua->objectName().isEmpty())
            lichsumua->setObjectName(QString::fromUtf8("lichsumua"));
        lichsumua->resize(986, 613);
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        lichsumua->setFont(font);
        groupBox = new QGroupBox(lichsumua);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(220, 60, 691, 121));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(359, 24, 101, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(359, 70, 80, 16));
        lblID = new QLabel(groupBox);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(91, 22, 151, 21));
        QFont font1;
        font1.setPointSize(10);
        lblID->setFont(font1);
        lblID->setFrameShape(QFrame::StyledPanel);
        lblID->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 24, 71, 16));
        leditAdress = new QLineEdit(groupBox);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(90, 70, 231, 20));
        leditAdress->setFont(font1);
        leditAdress->setReadOnly(false);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 70, 71, 16));
        lblTen = new QLabel(groupBox);
        lblTen->setObjectName(QString::fromUtf8("lblTen"));
        lblTen->setGeometry(QRect(460, 20, 161, 21));
        lblTen->setFont(font1);
        lblTen->setFrameShape(QFrame::StyledPanel);
        lblSdt = new QLabel(groupBox);
        lblSdt->setObjectName(QString::fromUtf8("lblSdt"));
        lblSdt->setGeometry(QRect(460, 70, 161, 21));
        lblSdt->setFont(font1);
        lblSdt->setFrameShape(QFrame::StyledPanel);
        label = new QLabel(lichsumua);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 20, 151, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        tblLichsudon = new QTableWidget(lichsumua);
        if (tblLichsudon->columnCount() < 10)
            tblLichsudon->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tblLichsudon->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tblLichsudon->setObjectName(QString::fromUtf8("tblLichsudon"));
        tblLichsudon->setGeometry(QRect(30, 200, 921, 271));
        tblLichsudon->setFont(font1);
        btnLuu = new QPushButton(lichsumua);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(754, 560, 81, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        btnThoat = new QPushButton(lichsumua);
        btnThoat->setObjectName(QString::fromUtf8("btnThoat"));
        btnThoat->setGeometry(QRect(850, 560, 75, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThoat->setIcon(icon1);
        groupBox_2 = new QGroupBox(lichsumua);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 30, 171, 161));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 161, 161));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/res/res/icon/personal-card.png")));
        label_10->setScaledContents(true);
        groupBox_3 = new QGroupBox(lichsumua);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 480, 381, 121));
        lblSodon = new QLabel(groupBox_3);
        lblSodon->setObjectName(QString::fromUtf8("lblSodon"));
        lblSodon->setGeometry(QRect(250, 20, 91, 21));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        lblSodon->setFont(font3);
        lblSodon->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 20, 101, 21));
        label_6->setFont(font3);
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(350, 80, 31, 21));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(140, 80, 81, 21));
        label_9->setFont(font3);
        lblGiatri = new QLabel(groupBox_3);
        lblGiatri->setObjectName(QString::fromUtf8("lblGiatri"));
        lblGiatri->setGeometry(QRect(250, 80, 91, 21));
        lblGiatri->setFont(font3);
        lblGiatri->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(140, 50, 111, 21));
        label_7->setFont(font3);
        lblThanhcong = new QLabel(groupBox_3);
        lblThanhcong->setObjectName(QString::fromUtf8("lblThanhcong"));
        lblThanhcong->setGeometry(QRect(250, 50, 91, 21));
        lblThanhcong->setFont(font3);
        lblThanhcong->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 111, 101));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/res/res/icon/pen.png")));
        label_8->setScaledContents(true);

        retranslateUi(lichsumua);

        QMetaObject::connectSlotsByName(lichsumua);
    } // setupUi

    void retranslateUi(QDialog *lichsumua)
    {
        lichsumua->setWindowTitle(QCoreApplication::translate("lichsumua", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("lichsumua", "TH\303\224NG TIN", nullptr));
        label_2->setText(QCoreApplication::translate("lichsumua", "T\303\252n kh\303\241ch h\303\240ng", nullptr));
        label_5->setText(QCoreApplication::translate("lichsumua", "S\304\220T                    ", nullptr));
        lblID->setText(QString());
        label_3->setText(QCoreApplication::translate("lichsumua", "ID                    ", nullptr));
        label_4->setText(QCoreApplication::translate("lichsumua", "\304\220\341\273\213a ch\341\273\211             ", nullptr));
        lblTen->setText(QString());
        lblSdt->setText(QString());
        label->setText(QCoreApplication::translate("lichsumua", "\304\220\306\240N H\303\200NG C\341\273\246A T\303\224I", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblLichsudon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("lichsumua", "M\303\243 \304\220\306\241n", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblLichsudon->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("lichsumua", "T\303\252n H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblLichsudon->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("lichsumua", "S\341\273\221 L\306\260\341\273\243ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblLichsudon->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("lichsumua", "Th\303\240nh Ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblLichsudon->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("lichsumua", "Ng\303\240y Mua", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tblLichsudon->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("lichsumua", "Thanh To\303\241n", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tblLichsudon->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("lichsumua", "V\341\272\255n Chuy\341\273\203n", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tblLichsudon->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("lichsumua", "Tr\341\272\241ng Th\303\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tblLichsudon->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("lichsumua", "Ghi Ch\303\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tblLichsudon->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("lichsumua", "M\303\243 H\303\240ng", nullptr));
        btnLuu->setText(QCoreApplication::translate("lichsumua", "L\306\260u", nullptr));
        btnThoat->setText(QCoreApplication::translate("lichsumua", "Tho\303\241t", nullptr));
        groupBox_2->setTitle(QString());
        label_10->setText(QString());
        groupBox_3->setTitle(QString());
        lblSodon->setText(QString());
        label_6->setText(QCoreApplication::translate("lichsumua", "S\341\273\221 \304\221\306\241n \304\221\303\243 t\341\272\241o:", nullptr));
        label_11->setText(QCoreApplication::translate("lichsumua", "VND", nullptr));
        label_9->setText(QCoreApplication::translate("lichsumua", "T\341\273\225ng gi\303\241 tr\341\273\213:", nullptr));
        lblGiatri->setText(QString());
        label_7->setText(QCoreApplication::translate("lichsumua", "Giao th\303\240nh c\303\264ng:", nullptr));
        lblThanhcong->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class lichsumua: public Ui_lichsumua {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICHSUMUA_H

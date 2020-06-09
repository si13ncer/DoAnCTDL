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
    QTableWidget *tbvLichsudon;
    QPushButton *btnLuu;
    QPushButton *btnThoat;
    QPushButton *btnHuydon;

    void setupUi(QDialog *lichsumua)
    {
        if (lichsumua->objectName().isEmpty())
            lichsumua->setObjectName(QString::fromUtf8("lichsumua"));
        lichsumua->resize(868, 493);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        lichsumua->setFont(font);
        groupBox = new QGroupBox(lichsumua);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(130, 70, 571, 80));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(329, 24, 80, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(329, 50, 80, 16));
        lblID = new QLabel(groupBox);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(91, 22, 131, 21));
        lblID->setFrameShape(QFrame::StyledPanel);
        lblID->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 24, 71, 16));
        leditAdress = new QLineEdit(groupBox);
        leditAdress->setObjectName(QString::fromUtf8("leditAdress"));
        leditAdress->setGeometry(QRect(90, 50, 211, 20));
        leditAdress->setReadOnly(false);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 71, 16));
        lblTen = new QLabel(groupBox);
        lblTen->setObjectName(QString::fromUtf8("lblTen"));
        lblTen->setGeometry(QRect(430, 20, 121, 21));
        lblTen->setFrameShape(QFrame::StyledPanel);
        lblSdt = new QLabel(groupBox);
        lblSdt->setObjectName(QString::fromUtf8("lblSdt"));
        lblSdt->setGeometry(QRect(430, 50, 121, 21));
        lblSdt->setFrameShape(QFrame::StyledPanel);
        label = new QLabel(lichsumua);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 151, 31));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        tbvLichsudon = new QTableWidget(lichsumua);
        if (tbvLichsudon->columnCount() < 8)
            tbvLichsudon->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tbvLichsudon->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tbvLichsudon->setObjectName(QString::fromUtf8("tbvLichsudon"));
        tbvLichsudon->setGeometry(QRect(20, 170, 821, 181));
        btnLuu = new QPushButton(lichsumua);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(680, 410, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        btnThoat = new QPushButton(lichsumua);
        btnThoat->setObjectName(QString::fromUtf8("btnThoat"));
        btnThoat->setGeometry(QRect(770, 410, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnThoat->setIcon(icon1);
        btnHuydon = new QPushButton(lichsumua);
        btnHuydon->setObjectName(QString::fromUtf8("btnHuydon"));
        btnHuydon->setGeometry(QRect(740, 370, 75, 23));

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
        QTableWidgetItem *___qtablewidgetitem = tbvLichsudon->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("lichsumua", "M\303\243 H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tbvLichsudon->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("lichsumua", "T\303\252n H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tbvLichsudon->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("lichsumua", "Lo\341\272\241i H\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tbvLichsudon->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("lichsumua", "S\341\273\221 L\306\260\341\273\243ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tbvLichsudon->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("lichsumua", "Th\303\240nh Ti\341\273\201n", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tbvLichsudon->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("lichsumua", "Ng\303\240y Mua", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tbvLichsudon->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("lichsumua", "Tr\341\272\241ng Th\303\241i", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tbvLichsudon->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("lichsumua", "Ghi Ch\303\272", nullptr));
        btnLuu->setText(QCoreApplication::translate("lichsumua", "L\306\260u", nullptr));
        btnThoat->setText(QCoreApplication::translate("lichsumua", "Tho\303\241t", nullptr));
        btnHuydon->setText(QCoreApplication::translate("lichsumua", "Hu\341\273\267 \304\221\306\241n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lichsumua: public Ui_lichsumua {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICHSUMUA_H

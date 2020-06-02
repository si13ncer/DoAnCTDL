/********************************************************************************
** Form generated from reading UI file 'nhapkho.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NHAPKHO_H
#define UI_NHAPKHO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nhapkho
{
public:
    QWidget *centralwidget;
    QLabel *lblLoaihang;
    QComboBox *cbxLoaihang;
    QLabel *lblTenhang;
    QLineEdit *IEditGiaNhapK;
    QLineEdit *IEditMahang;
    QLineEdit *lEditTenhang;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *soluong;
    QLabel *label_6;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QPushButton *Luu;
    QPushButton *huy;
    QLabel *label_7;

    void setupUi(QMainWindow *nhapkho)
    {
        if (nhapkho->objectName().isEmpty())
            nhapkho->setObjectName(QString::fromUtf8("nhapkho"));
        nhapkho->resize(456, 333);
        centralwidget = new QWidget(nhapkho);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblLoaihang = new QLabel(centralwidget);
        lblLoaihang->setObjectName(QString::fromUtf8("lblLoaihang"));
        lblLoaihang->setGeometry(QRect(30, 60, 74, 20));
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
        cbxLoaihang->setGeometry(QRect(140, 60, 174, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbxLoaihang->sizePolicy().hasHeightForWidth());
        cbxLoaihang->setSizePolicy(sizePolicy);
        lblTenhang = new QLabel(centralwidget);
        lblTenhang->setObjectName(QString::fromUtf8("lblTenhang"));
        lblTenhang->setGeometry(QRect(30, 90, 86, 20));
        IEditGiaNhapK = new QLineEdit(centralwidget);
        IEditGiaNhapK->setObjectName(QString::fromUtf8("IEditGiaNhapK"));
        IEditGiaNhapK->setGeometry(QRect(140, 160, 133, 20));
        IEditMahang = new QLineEdit(centralwidget);
        IEditMahang->setObjectName(QString::fromUtf8("IEditMahang"));
        IEditMahang->setGeometry(QRect(140, 120, 133, 20));
        lEditTenhang = new QLineEdit(centralwidget);
        lEditTenhang->setObjectName(QString::fromUtf8("lEditTenhang"));
        lEditTenhang->setGeometry(QRect(140, 90, 133, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 61, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 160, 121, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(280, 160, 71, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 200, 61, 21));
        soluong = new QSpinBox(centralwidget);
        soluong->setObjectName(QString::fromUtf8("soluong"));
        soluong->setGeometry(QRect(140, 200, 42, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 240, 111, 21));
        timeEdit = new QTimeEdit(centralwidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(140, 240, 71, 22));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(230, 240, 81, 22));
        Luu = new QPushButton(centralwidget);
        Luu->setObjectName(QString::fromUtf8("Luu"));
        Luu->setGeometry(QRect(200, 280, 111, 31));
        huy = new QPushButton(centralwidget);
        huy->setObjectName(QString::fromUtf8("huy"));
        huy->setGeometry(QRect(330, 280, 101, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 20, 201, 16));
        nhapkho->setCentralWidget(centralwidget);

        retranslateUi(nhapkho);

        QMetaObject::connectSlotsByName(nhapkho);
    } // setupUi

    void retranslateUi(QMainWindow *nhapkho)
    {
        nhapkho->setWindowTitle(QCoreApplication::translate("nhapkho", "MainWindow", nullptr));
        lblLoaihang->setText(QCoreApplication::translate("nhapkho", "Lo\341\272\241i h\303\240ng         ", nullptr));
        cbxLoaihang->setItemText(0, QCoreApplication::translate("nhapkho", "Thi\341\272\277t b\341\273\213 \304\221i\341\273\207n t\341\273\255", nullptr));
        cbxLoaihang->setItemText(1, QCoreApplication::translate("nhapkho", "Ph\341\273\245 ki\341\273\207n \304\221i\341\273\207n t\341\273\255", nullptr));
        cbxLoaihang->setItemText(2, QCoreApplication::translate("nhapkho", "TV & Thi\341\272\277t b\341\273\213 \304\221i\341\273\207n gia d\341\273\245ng", nullptr));
        cbxLoaihang->setItemText(3, QCoreApplication::translate("nhapkho", "S\341\273\251c kho\341\272\273 v\303\240 l\303\240m \304\221\341\272\271p", nullptr));
        cbxLoaihang->setItemText(4, QCoreApplication::translate("nhapkho", "H\303\240ng m\341\272\271, b\303\251 v\303\240 \304\221\341\273\223 ch\306\241i", nullptr));
        cbxLoaihang->setItemText(5, QCoreApplication::translate("nhapkho", "Si\303\252u th\341\273\213 t\341\272\241p ho\303\241", nullptr));
        cbxLoaihang->setItemText(6, QCoreApplication::translate("nhapkho", "H\303\240ng gia d\341\273\245ng v\303\240 \304\221\341\273\235i s\341\273\221ng", nullptr));
        cbxLoaihang->setItemText(7, QCoreApplication::translate("nhapkho", "Th\341\273\235i trang n\341\273\257", nullptr));
        cbxLoaihang->setItemText(8, QCoreApplication::translate("nhapkho", "Th\341\273\235i trang nam", nullptr));
        cbxLoaihang->setItemText(9, QCoreApplication::translate("nhapkho", "Ph\341\273\245 ki\341\273\207n th\341\273\235i trang", nullptr));
        cbxLoaihang->setItemText(10, QCoreApplication::translate("nhapkho", "Th\341\273\203 thao v\303\240 du l\341\273\213ch", nullptr));
        cbxLoaihang->setItemText(11, QCoreApplication::translate("nhapkho", "\303\224 t\303\264, xe m\303\241y v\303\240 thi\341\272\277t b\341\273\213 \304\221\341\273\213nh v\341\273\213", nullptr));

        lblTenhang->setText(QCoreApplication::translate("nhapkho", "T\303\252n h\303\240ng             ", nullptr));
        label->setText(QCoreApplication::translate("nhapkho", "M\303\243 h\303\240ng", nullptr));
        label_2->setText(QCoreApplication::translate("nhapkho", "Gi\303\241 nh\341\272\255p kho", nullptr));
        label_3->setText(QCoreApplication::translate("nhapkho", "VND", nullptr));
        label_5->setText(QCoreApplication::translate("nhapkho", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        label_6->setText(QCoreApplication::translate("nhapkho", "Th\341\273\235i gian nh\341\272\255p kho", nullptr));
        Luu->setText(QCoreApplication::translate("nhapkho", "L\306\260u", nullptr));
        huy->setText(QCoreApplication::translate("nhapkho", "H\341\273\247y", nullptr));
        label_7->setText(QCoreApplication::translate("nhapkho", "TH\303\224NG TIN S\341\272\242N PH\341\272\250M NH\341\272\254P KHO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nhapkho: public Ui_nhapkho {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NHAPKHO_H

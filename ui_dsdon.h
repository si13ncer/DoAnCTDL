/********************************************************************************
** Form generated from reading UI file 'dsdon.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSDON_H
#define UI_DSDON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_dsdon
{
public:
    QPushButton *PB_Huy;
    QLabel *LA_STT;
    QPushButton *PB_ThongTin_2;
    QPushButton *PB_KiemTra;
    QPushButton *PB_ThongTin_6;
    QLabel *LA_TinhTrang;
    QLineEdit *LE_KhungSDT;
    QPushButton *PB_ThongTin_3;
    QPushButton *PB_ThongTin_1;
    QLineEdit *LE_KhungMaDonHang;
    QLabel *LA_SDT;
    QLabel *LA_MaDonHang_1;
    QPushButton *PB_ThongTin_4;
    QLabel *LA_TenKhachHang;
    QLabel *LA_ThongTinKhachHang;
    QLineEdit *LE_KhungTenKhachHang;
    QLabel *LA_NgayNhan;
    QTextBrowser *textBrowser;
    QLabel *LA_NgayDat;
    QPushButton *PB_ThongTin_7;
    QPushButton *PB_ThongTin_5;
    QLabel *LA_MaDonHang_2;

    void setupUi(QDialog *dsdon)
    {
        if (dsdon->objectName().isEmpty())
            dsdon->setObjectName(QString::fromUtf8("dsdon"));
        dsdon->resize(1192, 365);
        PB_Huy = new QPushButton(dsdon);
        PB_Huy->setObjectName(QString::fromUtf8("PB_Huy"));
        PB_Huy->setGeometry(QRect(150, 200, 75, 23));
        LA_STT = new QLabel(dsdon);
        LA_STT->setObjectName(QString::fromUtf8("LA_STT"));
        LA_STT->setGeometry(QRect(340, 20, 21, 16));
        PB_ThongTin_2 = new QPushButton(dsdon);
        PB_ThongTin_2->setObjectName(QString::fromUtf8("PB_ThongTin_2"));
        PB_ThongTin_2->setGeometry(QRect(1050, 80, 75, 21));
        PB_KiemTra = new QPushButton(dsdon);
        PB_KiemTra->setObjectName(QString::fromUtf8("PB_KiemTra"));
        PB_KiemTra->setGeometry(QRect(40, 200, 75, 23));
        PB_ThongTin_6 = new QPushButton(dsdon);
        PB_ThongTin_6->setObjectName(QString::fromUtf8("PB_ThongTin_6"));
        PB_ThongTin_6->setGeometry(QRect(1050, 240, 75, 21));
        LA_TinhTrang = new QLabel(dsdon);
        LA_TinhTrang->setObjectName(QString::fromUtf8("LA_TinhTrang"));
        LA_TinhTrang->setGeometry(QRect(840, 20, 101, 16));
        LE_KhungSDT = new QLineEdit(dsdon);
        LE_KhungSDT->setObjectName(QString::fromUtf8("LE_KhungSDT"));
        LE_KhungSDT->setGeometry(QRect(120, 150, 151, 20));
        PB_ThongTin_3 = new QPushButton(dsdon);
        PB_ThongTin_3->setObjectName(QString::fromUtf8("PB_ThongTin_3"));
        PB_ThongTin_3->setGeometry(QRect(1050, 120, 75, 21));
        PB_ThongTin_1 = new QPushButton(dsdon);
        PB_ThongTin_1->setObjectName(QString::fromUtf8("PB_ThongTin_1"));
        PB_ThongTin_1->setGeometry(QRect(1050, 40, 75, 21));
        LE_KhungMaDonHang = new QLineEdit(dsdon);
        LE_KhungMaDonHang->setObjectName(QString::fromUtf8("LE_KhungMaDonHang"));
        LE_KhungMaDonHang->setGeometry(QRect(120, 110, 151, 20));
        LA_SDT = new QLabel(dsdon);
        LA_SDT->setObjectName(QString::fromUtf8("LA_SDT"));
        LA_SDT->setGeometry(QRect(20, 150, 101, 16));
        LA_MaDonHang_1 = new QLabel(dsdon);
        LA_MaDonHang_1->setObjectName(QString::fromUtf8("LA_MaDonHang_1"));
        LA_MaDonHang_1->setGeometry(QRect(430, 20, 81, 16));
        PB_ThongTin_4 = new QPushButton(dsdon);
        PB_ThongTin_4->setObjectName(QString::fromUtf8("PB_ThongTin_4"));
        PB_ThongTin_4->setGeometry(QRect(1050, 160, 75, 21));
        LA_TenKhachHang = new QLabel(dsdon);
        LA_TenKhachHang->setObjectName(QString::fromUtf8("LA_TenKhachHang"));
        LA_TenKhachHang->setGeometry(QRect(20, 60, 101, 41));
        LA_ThongTinKhachHang = new QLabel(dsdon);
        LA_ThongTinKhachHang->setObjectName(QString::fromUtf8("LA_ThongTinKhachHang"));
        LA_ThongTinKhachHang->setGeometry(QRect(20, 20, 131, 41));
        LE_KhungTenKhachHang = new QLineEdit(dsdon);
        LE_KhungTenKhachHang->setObjectName(QString::fromUtf8("LE_KhungTenKhachHang"));
        LE_KhungTenKhachHang->setGeometry(QRect(120, 70, 151, 20));
        LA_NgayNhan = new QLabel(dsdon);
        LA_NgayNhan->setObjectName(QString::fromUtf8("LA_NgayNhan"));
        LA_NgayNhan->setGeometry(QRect(710, 20, 101, 16));
        textBrowser = new QTextBrowser(dsdon);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(330, 40, 711, 271));
        LA_NgayDat = new QLabel(dsdon);
        LA_NgayDat->setObjectName(QString::fromUtf8("LA_NgayDat"));
        LA_NgayDat->setGeometry(QRect(580, 20, 61, 16));
        PB_ThongTin_7 = new QPushButton(dsdon);
        PB_ThongTin_7->setObjectName(QString::fromUtf8("PB_ThongTin_7"));
        PB_ThongTin_7->setGeometry(QRect(1050, 280, 75, 21));
        PB_ThongTin_5 = new QPushButton(dsdon);
        PB_ThongTin_5->setObjectName(QString::fromUtf8("PB_ThongTin_5"));
        PB_ThongTin_5->setGeometry(QRect(1050, 200, 75, 21));
        LA_MaDonHang_2 = new QLabel(dsdon);
        LA_MaDonHang_2->setObjectName(QString::fromUtf8("LA_MaDonHang_2"));
        LA_MaDonHang_2->setGeometry(QRect(20, 110, 101, 16));

        retranslateUi(dsdon);

        QMetaObject::connectSlotsByName(dsdon);
    } // setupUi

    void retranslateUi(QDialog *dsdon)
    {
        dsdon->setWindowTitle(QCoreApplication::translate("dsdon", "Dialog", nullptr));
        PB_Huy->setText(QCoreApplication::translate("dsdon", "H\341\273\246Y", nullptr));
        LA_STT->setText(QCoreApplication::translate("dsdon", "STT", nullptr));
        PB_ThongTin_2->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        PB_KiemTra->setText(QCoreApplication::translate("dsdon", "KI\341\273\202M TRA", nullptr));
        PB_ThongTin_6->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        LA_TinhTrang->setText(QCoreApplication::translate("dsdon", "T\303\214NH TR\341\272\240NG          ", nullptr));
        PB_ThongTin_3->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        PB_ThongTin_1->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        LA_SDT->setText(QCoreApplication::translate("dsdon", "S\304\220T                       :            ", nullptr));
        LA_MaDonHang_1->setText(QCoreApplication::translate("dsdon", "M\303\203 \304\220\306\240N H\303\200NG   ", nullptr));
        PB_ThongTin_4->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        LA_TenKhachHang->setText(QCoreApplication::translate("dsdon", "T\303\212N KH\303\201CH H\303\200NG :", nullptr));
        LA_ThongTinKhachHang->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN KH\303\201CH H\303\200NG", nullptr));
        LA_NgayNhan->setText(QCoreApplication::translate("dsdon", "NG\303\200Y NH\341\272\254N        ", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("dsdon", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   1                         TB\304\220TA100M-101                        27/04/2020                         21/09/2020                           \304\220\303\203 GIAO</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-i"
                        "ndent:0; text-indent:0px;\">   2                         TB\304\220TA100M-102                        28/04/2020                         22/09/2020                           \304\220\303\203 GIAO                                             </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   3                         TB\304\220TA100M-103                        29/04/2020                         23/09/2020                           \304\220\303\203 GIAO                                                 </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  </p>\n"
"<p sty"
                        "le=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   4                         TB\304\220TA100M-104                        30/04/2020                         24/09/2020                           \304\220\303\203 GIAO                                                    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   5                         TB\304\220TA100M-105                        01/05/2020                         "
                        "25/09/2020                           \304\220\303\203 GIAO                                                       </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   6                         TB\304\220TA100M-106                        02/05/2020                         26/09/2020                           \304\220\303\203 GIAO                                                    </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   7                         TB\304\220TA100M-107                        03/05/2020                         27/09/2020                           \304\220\303\203 GIAO                                                </p></body></html>", nullptr));
        LA_NgayDat->setText(QCoreApplication::translate("dsdon", "NG\303\200Y \304\220\341\272\266T      ", nullptr));
        PB_ThongTin_7->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        PB_ThongTin_5->setText(QCoreApplication::translate("dsdon", "TH\303\224NG TIN", nullptr));
        LA_MaDonHang_2->setText(QCoreApplication::translate("dsdon", "M\303\203 \304\220\306\240N H\303\200NG      :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dsdon: public Ui_dsdon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSDON_H

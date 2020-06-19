/********************************************************************************
** Form generated from reading UI file 'khohang.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KHOHANG_H
#define UI_KHOHANG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_khohang
{
public:
    QWidget *centralwidget;
    QTableWidget *tblkhohang;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *cbxdmh;
    QPushButton *btnload;
    QLabel *label;
    QLineEdit *lineEditid;
    QLabel *label_4;
    QPushButton *btnxoa;
    QPushButton *btnexit;
    QComboBox *cbxelement;
    QLineEdit *lineEditchange;
    QPushButton *btnchange;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnsapxep;
    QComboBox *cbxplh;
    QPushButton *btnEditsl;
    QLabel *label_7;
    QPushButton *btnsearch;
    QComboBox *cbxplh_2;
    QPushButton *btnEditpldm;
    QComboBox *cbxdmh_2;
    QLabel *label_8;
    QSpinBox *spinbsl;

    void setupUi(QMainWindow *khohang)
    {
        if (khohang->objectName().isEmpty())
            khohang->setObjectName(QString::fromUtf8("khohang"));
        khohang->resize(1648, 586);
        centralwidget = new QWidget(khohang);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tblkhohang = new QTableWidget(centralwidget);
        if (tblkhohang->columnCount() < 7)
            tblkhohang->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(170, 0, 0));
        tblkhohang->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(255, 255, 127));
        tblkhohang->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(170, 255, 255));
        tblkhohang->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(170, 255, 127));
        tblkhohang->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(255, 170, 255));
        tblkhohang->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setBackground(QColor(0, 170, 255));
        tblkhohang->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setBackground(QColor(0, 170, 0));
        tblkhohang->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tblkhohang->setObjectName(QString::fromUtf8("tblkhohang"));
        tblkhohang->setGeometry(QRect(10, 20, 1621, 411));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 440, 141, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 490, 151, 31));
        cbxdmh = new QComboBox(centralwidget);
        cbxdmh->setObjectName(QString::fromUtf8("cbxdmh"));
        cbxdmh->setGeometry(QRect(10, 520, 181, 22));
        btnload = new QPushButton(centralwidget);
        btnload->setObjectName(QString::fromUtf8("btnload"));
        btnload->setGeometry(QRect(10, 550, 181, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 111, 16));
        lineEditid = new QLineEdit(centralwidget);
        lineEditid->setObjectName(QString::fromUtf8("lineEditid"));
        lineEditid->setGeometry(QRect(430, 500, 181, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 460, 201, 31));
        btnxoa = new QPushButton(centralwidget);
        btnxoa->setObjectName(QString::fromUtf8("btnxoa"));
        btnxoa->setGeometry(QRect(550, 540, 81, 23));
        btnexit = new QPushButton(centralwidget);
        btnexit->setObjectName(QString::fromUtf8("btnexit"));
        btnexit->setGeometry(QRect(1550, 560, 75, 23));
        cbxelement = new QComboBox(centralwidget);
        cbxelement->addItem(QString());
        cbxelement->addItem(QString());
        cbxelement->addItem(QString());
        cbxelement->setObjectName(QString::fromUtf8("cbxelement"));
        cbxelement->setGeometry(QRect(630, 500, 91, 22));
        lineEditchange = new QLineEdit(centralwidget);
        lineEditchange->setObjectName(QString::fromUtf8("lineEditchange"));
        lineEditchange->setGeometry(QRect(740, 500, 131, 20));
        btnchange = new QPushButton(centralwidget);
        btnchange->setObjectName(QString::fromUtf8("btnchange"));
        btnchange->setGeometry(QRect(670, 540, 81, 23));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(630, 460, 91, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(730, 460, 161, 31));
        btnsapxep = new QPushButton(centralwidget);
        btnsapxep->setObjectName(QString::fromUtf8("btnsapxep"));
        btnsapxep->setGeometry(QRect(780, 540, 81, 21));
        cbxplh = new QComboBox(centralwidget);
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->addItem(QString());
        cbxplh->setObjectName(QString::fromUtf8("cbxplh"));
        cbxplh->setGeometry(QRect(10, 470, 181, 22));
        btnEditsl = new QPushButton(centralwidget);
        btnEditsl->setObjectName(QString::fromUtf8("btnEditsl"));
        btnEditsl->setGeometry(QRect(1190, 540, 121, 23));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1220, 470, 51, 21));
        btnsearch = new QPushButton(centralwidget);
        btnsearch->setObjectName(QString::fromUtf8("btnsearch"));
        btnsearch->setGeometry(QRect(430, 540, 81, 23));
        cbxplh_2 = new QComboBox(centralwidget);
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->addItem(QString());
        cbxplh_2->setObjectName(QString::fromUtf8("cbxplh_2"));
        cbxplh_2->setGeometry(QRect(880, 500, 131, 22));
        btnEditpldm = new QPushButton(centralwidget);
        btnEditpldm->setObjectName(QString::fromUtf8("btnEditpldm"));
        btnEditpldm->setGeometry(QRect(960, 540, 131, 23));
        cbxdmh_2 = new QComboBox(centralwidget);
        cbxdmh_2->setObjectName(QString::fromUtf8("cbxdmh_2"));
        cbxdmh_2->setGeometry(QRect(1030, 500, 131, 22));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(960, 470, 161, 16));
        spinbsl = new QSpinBox(centralwidget);
        spinbsl->setObjectName(QString::fromUtf8("spinbsl"));
        spinbsl->setGeometry(QRect(1210, 500, 71, 22));
        khohang->setCentralWidget(centralwidget);

        retranslateUi(khohang);

        QMetaObject::connectSlotsByName(khohang);
    } // setupUi

    void retranslateUi(QMainWindow *khohang)
    {
        khohang->setWindowTitle(QCoreApplication::translate("khohang", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblkhohang->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("khohang", "Ph\303\242n lo\341\272\241i h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblkhohang->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("khohang", "Danh m\341\273\245c h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblkhohang->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("khohang", "T\303\252n h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tblkhohang->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("khohang", "M\303\243 h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tblkhohang->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("khohang", "Ng\303\240y nh\341\272\255p h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tblkhohang->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("khohang", "Gi\303\241 h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tblkhohang->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("khohang", "S\341\273\221 l\306\260\341\273\243ng h\303\240ng", nullptr));
        label_2->setText(QCoreApplication::translate("khohang", "Ph\303\242n lo\341\272\241i h\303\240ng mu\341\273\221n xem", nullptr));
        label_3->setText(QCoreApplication::translate("khohang", "Danh m\341\273\245c h\303\240ng mu\341\273\221n xem", nullptr));
        btnload->setText(QCoreApplication::translate("khohang", "Load Th\303\264ng Tin", nullptr));
        label->setText(QCoreApplication::translate("khohang", "Danh s\303\241ch kho h\303\240ng", nullptr));
        label_4->setText(QCoreApplication::translate("khohang", "Nh\341\272\255p m\303\243 h\303\240ng mu\341\273\221n xo\303\241/ s\341\273\255a/t\303\254m ki\341\272\277m", nullptr));
        btnxoa->setText(QCoreApplication::translate("khohang", "Xo\303\241", nullptr));
        btnexit->setText(QCoreApplication::translate("khohang", "Tho\303\241t", nullptr));
        cbxelement->setItemText(0, QCoreApplication::translate("khohang", "T\303\252n h\303\240ng", nullptr));
        cbxelement->setItemText(1, QCoreApplication::translate("khohang", "M\303\243 h\303\240ng", nullptr));
        cbxelement->setItemText(2, QCoreApplication::translate("khohang", "Gi\303\241 nh\341\272\255p", nullptr));

        btnchange->setText(QCoreApplication::translate("khohang", "Ch\341\273\211nh S\341\273\255a", nullptr));
        label_5->setText(QCoreApplication::translate("khohang", "  S\341\273\255a th\303\264ng tin", nullptr));
        label_6->setText(QCoreApplication::translate("khohang", "N\341\273\231i dung mu\341\273\221n ch\341\273\211nh s\341\273\255a th\303\240nh", nullptr));
        btnsapxep->setText(QCoreApplication::translate("khohang", "S\341\272\257p X\341\272\277p", nullptr));
        cbxplh->setItemText(0, QCoreApplication::translate("khohang", "Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxplh->setItemText(1, QCoreApplication::translate("khohang", "Ph\341\273\245 Ki\341\273\207n \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxplh->setItemText(2, QCoreApplication::translate("khohang", "TV & Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n Gia D\341\273\245ng", nullptr));
        cbxplh->setItemText(3, QCoreApplication::translate("khohang", "S\341\273\251c Kho\341\272\273 & L\303\240m \304\220\341\272\271p", nullptr));
        cbxplh->setItemText(4, QCoreApplication::translate("khohang", "H\303\240ng M\341\272\271, B\303\251 & \304\220\341\273\223 Ch\306\241i", nullptr));
        cbxplh->setItemText(5, QCoreApplication::translate("khohang", "Si\303\252u Th\341\273\213 T\341\272\241p Ho\303\241", nullptr));
        cbxplh->setItemText(6, QCoreApplication::translate("khohang", "H\303\240ng Gia D\341\273\245ng & \304\220\341\273\235i S\341\273\221ng", nullptr));
        cbxplh->setItemText(7, QCoreApplication::translate("khohang", "Th\341\273\235i Trang N\341\273\257", nullptr));
        cbxplh->setItemText(8, QCoreApplication::translate("khohang", "Th\341\273\235i Trang Nam", nullptr));
        cbxplh->setItemText(9, QCoreApplication::translate("khohang", "Ph\341\273\245 Ki\341\273\207n Th\341\273\235i Trang", nullptr));
        cbxplh->setItemText(10, QCoreApplication::translate("khohang", "Th\341\273\203 Thao & Du L\341\273\213ch", nullptr));
        cbxplh->setItemText(11, QCoreApplication::translate("khohang", "\303\224t\303\264, Xe M\303\241y & Thi\341\272\277t B\341\273\213 \304\220\341\273\213nh V\341\273\213", nullptr));
        cbxplh->setItemText(12, QCoreApplication::translate("khohang", "To\303\240n b\341\273\231", nullptr));

        btnEditsl->setText(QCoreApplication::translate("khohang", "S\341\273\255a s\341\273\221 l\306\260\341\273\243ng", nullptr));
        label_7->setText(QCoreApplication::translate("khohang", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        btnsearch->setText(QCoreApplication::translate("khohang", "T\303\254m ki\341\272\277m", nullptr));
        cbxplh_2->setItemText(0, QCoreApplication::translate("khohang", "Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxplh_2->setItemText(1, QCoreApplication::translate("khohang", "Ph\341\273\245 Ki\341\273\207n \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxplh_2->setItemText(2, QCoreApplication::translate("khohang", "TV & Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n Gia D\341\273\245ng", nullptr));
        cbxplh_2->setItemText(3, QCoreApplication::translate("khohang", "S\341\273\251c Kho\341\272\273 & L\303\240m \304\220\341\272\271p", nullptr));
        cbxplh_2->setItemText(4, QCoreApplication::translate("khohang", "H\303\240ng M\341\272\271, B\303\251 & \304\220\341\273\223 Ch\306\241i", nullptr));
        cbxplh_2->setItemText(5, QCoreApplication::translate("khohang", "Si\303\252u Th\341\273\213 T\341\272\241p Ho\303\241", nullptr));
        cbxplh_2->setItemText(6, QCoreApplication::translate("khohang", "H\303\240ng Gia D\341\273\245ng & \304\220\341\273\235i S\341\273\221ng", nullptr));
        cbxplh_2->setItemText(7, QCoreApplication::translate("khohang", "Th\341\273\235i Trang N\341\273\257", nullptr));
        cbxplh_2->setItemText(8, QCoreApplication::translate("khohang", "Th\341\273\235i Trang Nam", nullptr));
        cbxplh_2->setItemText(9, QCoreApplication::translate("khohang", "Ph\341\273\245 Ki\341\273\207n Th\341\273\235i Trang", nullptr));
        cbxplh_2->setItemText(10, QCoreApplication::translate("khohang", "Th\341\273\203 Thao & Du L\341\273\213ch", nullptr));
        cbxplh_2->setItemText(11, QCoreApplication::translate("khohang", "\303\224t\303\264, Xe M\303\241y & Thi\341\272\277t B\341\273\213 \304\220\341\273\213nh V\341\273\213", nullptr));
        cbxplh_2->setItemText(12, QCoreApplication::translate("khohang", "To\303\240n b\341\273\231", nullptr));

        btnEditpldm->setText(QCoreApplication::translate("khohang", "S\341\273\255a danh m\341\273\245c/ ph\303\242n lo\341\272\241i", nullptr));
        label_8->setText(QCoreApplication::translate("khohang", "Ph\303\242n lo\341\272\241i / Danh m\341\273\245c mu\341\273\221n s\341\273\255a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class khohang: public Ui_khohang {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KHOHANG_H

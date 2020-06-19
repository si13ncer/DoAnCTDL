/********************************************************************************
** Form generated from reading UI file 'qlvoucher.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLVOUCHER_H
#define UI_QLVOUCHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qlvoucher
{
public:
    QWidget *centralwidget;
    QPushButton *btnTrolai;
    QTableWidget *tableWidgetQLVC;
    QLabel *lblQLVC;
    QPushButton *btnLuu;
    QPushButton *btnlvc;
    QPushButton *btnXoa;
    QPushButton *btnFind;
    QLineEdit *lineEditFind;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qlvoucher)
    {
        if (qlvoucher->objectName().isEmpty())
            qlvoucher->setObjectName(QString::fromUtf8("qlvoucher"));
        qlvoucher->resize(791, 402);
        centralwidget = new QWidget(qlvoucher);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnTrolai = new QPushButton(centralwidget);
        btnTrolai->setObjectName(QString::fromUtf8("btnTrolai"));
        btnTrolai->setGeometry(QRect(710, 270, 75, 23));
        tableWidgetQLVC = new QTableWidget(centralwidget);
        if (tableWidgetQLVC->columnCount() < 6)
            tableWidgetQLVC->setColumnCount(6);
        QFont font;
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        __qtablewidgetitem->setBackground(QColor(255, 255, 255));
        tableWidgetQLVC->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        __qtablewidgetitem1->setBackground(QColor(255, 255, 255));
        tableWidgetQLVC->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        __qtablewidgetitem2->setBackground(QColor(255, 255, 255));
        tableWidgetQLVC->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        __qtablewidgetitem3->setBackground(QColor(255, 255, 255));
        tableWidgetQLVC->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetQLVC->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        __qtablewidgetitem5->setBackground(QColor(255, 255, 255));
        tableWidgetQLVC->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetQLVC->setObjectName(QString::fromUtf8("tableWidgetQLVC"));
        tableWidgetQLVC->setGeometry(QRect(40, 50, 661, 291));
        tableWidgetQLVC->setFocusPolicy(Qt::WheelFocus);
        tableWidgetQLVC->setLayoutDirection(Qt::LeftToRight);
        tableWidgetQLVC->setAutoFillBackground(true);
        tableWidgetQLVC->setAutoScrollMargin(16);
        tableWidgetQLVC->setDragEnabled(false);
        tableWidgetQLVC->setSelectionBehavior(QAbstractItemView::SelectItems);
        tableWidgetQLVC->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidgetQLVC->setShowGrid(true);
        tableWidgetQLVC->setGridStyle(Qt::SolidLine);
        tableWidgetQLVC->setSortingEnabled(true);
        tableWidgetQLVC->setWordWrap(true);
        tableWidgetQLVC->setRowCount(0);
        tableWidgetQLVC->setColumnCount(6);
        tableWidgetQLVC->horizontalHeader()->setMinimumSectionSize(39);
        lblQLVC = new QLabel(centralwidget);
        lblQLVC->setObjectName(QString::fromUtf8("lblQLVC"));
        lblQLVC->setGeometry(QRect(320, 0, 111, 31));
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(710, 230, 75, 23));
        btnlvc = new QPushButton(centralwidget);
        btnlvc->setObjectName(QString::fromUtf8("btnlvc"));
        btnlvc->setGeometry(QRect(710, 50, 75, 23));
        btnXoa = new QPushButton(centralwidget);
        btnXoa->setObjectName(QString::fromUtf8("btnXoa"));
        btnXoa->setGeometry(QRect(710, 110, 75, 23));
        btnFind = new QPushButton(centralwidget);
        btnFind->setObjectName(QString::fromUtf8("btnFind"));
        btnFind->setGeometry(QRect(640, 10, 61, 23));
        lineEditFind = new QLineEdit(centralwidget);
        lineEditFind->setObjectName(QString::fromUtf8("lineEditFind"));
        lineEditFind->setGeometry(QRect(522, 10, 111, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 80, 75, 23));
        qlvoucher->setCentralWidget(centralwidget);
        btnTrolai->raise();
        lblQLVC->raise();
        btnLuu->raise();
        btnlvc->raise();
        btnXoa->raise();
        btnFind->raise();
        lineEditFind->raise();
        tableWidgetQLVC->raise();
        pushButton->raise();
        menubar = new QMenuBar(qlvoucher);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 791, 21));
        qlvoucher->setMenuBar(menubar);
        statusbar = new QStatusBar(qlvoucher);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        qlvoucher->setStatusBar(statusbar);

        retranslateUi(qlvoucher);

        QMetaObject::connectSlotsByName(qlvoucher);
    } // setupUi

    void retranslateUi(QMainWindow *qlvoucher)
    {
        qlvoucher->setWindowTitle(QCoreApplication::translate("qlvoucher", "qlvoucher", nullptr));
        btnTrolai->setText(QCoreApplication::translate("qlvoucher", "Tho\303\241t", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetQLVC->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("qlvoucher", "M\303\243 Voucher", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetQLVC->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("qlvoucher", "T\303\252n Voucher", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetQLVC->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("qlvoucher", "\303\201p d\341\273\245ng cho", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetQLVC->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("qlvoucher", "Gi\303\241 tr\341\273\213 Voucher(%)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetQLVC->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("qlvoucher", "Th\341\273\235i gian b\341\272\257t \304\221\341\272\247u", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetQLVC->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("qlvoucher", "Th\341\273\235i gian k\341\272\277t th\303\272c", nullptr));
        lblQLVC->setText(QCoreApplication::translate("qlvoucher", "QU\341\272\242N L\303\235 VOUCHER", nullptr));
        btnLuu->setText(QCoreApplication::translate("qlvoucher", "L\306\260u", nullptr));
        btnlvc->setText(QCoreApplication::translate("qlvoucher", "List", nullptr));
        btnXoa->setText(QCoreApplication::translate("qlvoucher", "X\303\263a", nullptr));
        btnFind->setText(QCoreApplication::translate("qlvoucher", "T\303\254m ki\341\272\277m", nullptr));
        pushButton->setText(QCoreApplication::translate("qlvoucher", "Th\303\252m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qlvoucher: public Ui_qlvoucher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLVOUCHER_H

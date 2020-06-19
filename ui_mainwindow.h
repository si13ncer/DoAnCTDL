/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actTaodon;
    QAction *actTrangthai;
    QAction *actTonkho;
    QAction *actTaoVc;
    QAction *actQliVc;
    QAction *actTaouser;
    QAction *actQliUser;
    QAction *actDsdon;
    QAction *actNhaphang;
    QAction *actDanhmuc;
    QAction *actionDoanh_thu;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnload;
    QLabel *label_2;
    QComboBox *cbxdmh;
    QTableWidget *tblkhohang;
    QComboBox *cbxplh;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menu_n_h_ng;
    QMenu *menuS_n_ph_m;
    QMenu *menuVoucher;
    QMenu *menuB_o_c_o;
    QMenu *menuQu_n_l_User;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(850, 505);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actTaodon = new QAction(MainWindow);
        actTaodon->setObjectName(QString::fromUtf8("actTaodon"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/taodonhang.png"), QSize(), QIcon::Normal, QIcon::Off);
        actTaodon->setIcon(icon);
        actTaodon->setVisible(true);
        actTaodon->setIconVisibleInMenu(true);
        actTrangthai = new QAction(MainWindow);
        actTrangthai->setObjectName(QString::fromUtf8("actTrangthai"));
        actTonkho = new QAction(MainWindow);
        actTonkho->setObjectName(QString::fromUtf8("actTonkho"));
        actTaoVc = new QAction(MainWindow);
        actTaoVc->setObjectName(QString::fromUtf8("actTaoVc"));
        actQliVc = new QAction(MainWindow);
        actQliVc->setObjectName(QString::fromUtf8("actQliVc"));
        actTaouser = new QAction(MainWindow);
        actTaouser->setObjectName(QString::fromUtf8("actTaouser"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/adduser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actTaouser->setIcon(icon1);
        actQliUser = new QAction(MainWindow);
        actQliUser->setObjectName(QString::fromUtf8("actQliUser"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/icon/quanlyuser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actQliUser->setIcon(icon2);
        actDsdon = new QAction(MainWindow);
        actDsdon->setObjectName(QString::fromUtf8("actDsdon"));
        actNhaphang = new QAction(MainWindow);
        actNhaphang->setObjectName(QString::fromUtf8("actNhaphang"));
        actDanhmuc = new QAction(MainWindow);
        actDanhmuc->setObjectName(QString::fromUtf8("actDanhmuc"));
        actionDoanh_thu = new QAction(MainWindow);
        actionDoanh_thu->setObjectName(QString::fromUtf8("actionDoanh_thu"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/res/icon/baocao.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDoanh_thu->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(640, 10, 201, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/background.png")));
        label->setScaledContents(true);
        btnload = new QPushButton(centralwidget);
        btnload->setObjectName(QString::fromUtf8("btnload"));
        btnload->setGeometry(QRect(430, 60, 181, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 161, 16));
        cbxdmh = new QComboBox(centralwidget);
        cbxdmh->setObjectName(QString::fromUtf8("cbxdmh"));
        cbxdmh->setGeometry(QRect(220, 60, 181, 22));
        tblkhohang = new QTableWidget(centralwidget);
        if (tblkhohang->columnCount() < 3)
            tblkhohang->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(170, 255, 255));
        tblkhohang->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(0, 170, 255));
        tblkhohang->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(0, 170, 0));
        tblkhohang->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tblkhohang->setObjectName(QString::fromUtf8("tblkhohang"));
        tblkhohang->setGeometry(QRect(10, 110, 831, 311));
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
        cbxplh->setObjectName(QString::fromUtf8("cbxplh"));
        cbxplh->setGeometry(QRect(10, 60, 181, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 20, 171, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 850, 21));
        menu_n_h_ng = new QMenu(menubar);
        menu_n_h_ng->setObjectName(QString::fromUtf8("menu_n_h_ng"));
        menuS_n_ph_m = new QMenu(menubar);
        menuS_n_ph_m->setObjectName(QString::fromUtf8("menuS_n_ph_m"));
        menuVoucher = new QMenu(menubar);
        menuVoucher->setObjectName(QString::fromUtf8("menuVoucher"));
        menuB_o_c_o = new QMenu(menubar);
        menuB_o_c_o->setObjectName(QString::fromUtf8("menuB_o_c_o"));
        menuQu_n_l_User = new QMenu(menubar);
        menuQu_n_l_User->setObjectName(QString::fromUtf8("menuQu_n_l_User"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setIconSize(QSize(30, 30));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menubar->addAction(menu_n_h_ng->menuAction());
        menubar->addAction(menuS_n_ph_m->menuAction());
        menubar->addAction(menuVoucher->menuAction());
        menubar->addAction(menuB_o_c_o->menuAction());
        menubar->addAction(menuQu_n_l_User->menuAction());
        menu_n_h_ng->addAction(actTaodon);
        menu_n_h_ng->addAction(actTrangthai);
        menu_n_h_ng->addAction(actDsdon);
        menuS_n_ph_m->addAction(actNhaphang);
        menuS_n_ph_m->addSeparator();
        menuS_n_ph_m->addAction(actDanhmuc);
        menuVoucher->addAction(actTaoVc);
        menuVoucher->addAction(actQliVc);
        menuB_o_c_o->addAction(actionDoanh_thu);
        menuQu_n_l_User->addAction(actTaouser);
        menuQu_n_l_User->addAction(actQliUser);
        toolBar->addAction(actTaodon);
        toolBar->addAction(actionDoanh_thu);
        toolBar->addAction(actTaouser);
        toolBar->addAction(actQliUser);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actTaodon->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o \304\221\306\241n", nullptr));
        actTrangthai->setText(QCoreApplication::translate("MainWindow", "\304\220\306\241n \304\221\303\243 t\341\272\241o", nullptr));
        actTonkho->setText(QCoreApplication::translate("MainWindow", "T\341\273\223n kho", nullptr));
        actTaoVc->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o Voucher", nullptr));
        actQliVc->setText(QCoreApplication::translate("MainWindow", "Qu\341\272\243n l\303\255 Voucher", nullptr));
        actTaouser->setText(QCoreApplication::translate("MainWindow", "T\341\272\241o User", nullptr));
        actQliUser->setText(QCoreApplication::translate("MainWindow", "Qu\341\272\243n l\303\255 User", nullptr));
        actDsdon->setText(QCoreApplication::translate("MainWindow", "Danh s\303\241ch \304\221\306\241n", nullptr));
        actNhaphang->setText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p s\341\272\243n ph\341\272\251m", nullptr));
        actDanhmuc->setText(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c s\341\272\243n ph\341\272\251m", nullptr));
        actionDoanh_thu->setText(QCoreApplication::translate("MainWindow", "Doanh thu", nullptr));
        label->setText(QString());
        btnload->setText(QCoreApplication::translate("MainWindow", "Load Th\303\264ng Tin", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ph\303\242n lo\341\272\241i h\303\240ng mu\341\273\221n xem", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tblkhohang->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "T\303\252n h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tblkhohang->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Gi\303\241 h\303\240ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tblkhohang->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 l\306\260\341\273\243ng h\303\240ng", nullptr));
        cbxplh->setItemText(0, QCoreApplication::translate("MainWindow", "Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxplh->setItemText(1, QCoreApplication::translate("MainWindow", "Ph\341\273\245 Ki\341\273\207n \304\220i\341\273\207n T\341\273\255", nullptr));
        cbxplh->setItemText(2, QCoreApplication::translate("MainWindow", "TV & Thi\341\272\277t B\341\273\213 \304\220i\341\273\207n Gia D\341\273\245ng", nullptr));
        cbxplh->setItemText(3, QCoreApplication::translate("MainWindow", "S\341\273\251c Kho\341\272\273 & L\303\240m \304\220\341\272\271p", nullptr));
        cbxplh->setItemText(4, QCoreApplication::translate("MainWindow", "H\303\240ng M\341\272\271, B\303\251 & \304\220\341\273\223 Ch\306\241i", nullptr));
        cbxplh->setItemText(5, QCoreApplication::translate("MainWindow", "Si\303\252u Th\341\273\213 T\341\272\241p Ho\303\241", nullptr));
        cbxplh->setItemText(6, QCoreApplication::translate("MainWindow", "H\303\240ng Gia D\341\273\245ng & \304\220\341\273\235i S\341\273\221ng", nullptr));
        cbxplh->setItemText(7, QCoreApplication::translate("MainWindow", "Th\341\273\235i Trang N\341\273\257", nullptr));
        cbxplh->setItemText(8, QCoreApplication::translate("MainWindow", "Th\341\273\235i Trang Nam", nullptr));
        cbxplh->setItemText(9, QCoreApplication::translate("MainWindow", "Ph\341\273\245 Ki\341\273\207n Th\341\273\235i Trang", nullptr));
        cbxplh->setItemText(10, QCoreApplication::translate("MainWindow", "Th\341\273\203 Thao & Du L\341\273\213ch", nullptr));
        cbxplh->setItemText(11, QCoreApplication::translate("MainWindow", "\303\224t\303\264, Xe M\303\241y & Thi\341\272\277t B\341\273\213 \304\220\341\273\213nh V\341\273\213", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c h\303\240ng mu\341\273\221n xem", nullptr));
        menu_n_h_ng->setTitle(QCoreApplication::translate("MainWindow", "\304\220\306\241n h\303\240ng", nullptr));
        menuS_n_ph_m->setTitle(QCoreApplication::translate("MainWindow", "S\341\272\243n ph\341\272\251m", nullptr));
        menuVoucher->setTitle(QCoreApplication::translate("MainWindow", "Voucher", nullptr));
        menuB_o_c_o->setTitle(QCoreApplication::translate("MainWindow", "Th\341\273\221ng k\303\252", nullptr));
        menuQu_n_l_User->setTitle(QCoreApplication::translate("MainWindow", "User", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

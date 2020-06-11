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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
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
    QAction *actBaocao;
    QAction *actDsdon;
    QAction *actNhaphang;
    QAction *actDanhmuc;
    QWidget *centralwidget;
    QLabel *label;
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
        MainWindow->resize(660, 372);
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
        actBaocao = new QAction(MainWindow);
        actBaocao->setObjectName(QString::fromUtf8("actBaocao"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/res/icon/baocao.png"), QSize(), QIcon::Normal, QIcon::Off);
        actBaocao->setIcon(icon3);
        actDsdon = new QAction(MainWindow);
        actDsdon->setObjectName(QString::fromUtf8("actDsdon"));
        actNhaphang = new QAction(MainWindow);
        actNhaphang->setObjectName(QString::fromUtf8("actNhaphang"));
        actDanhmuc = new QAction(MainWindow);
        actDanhmuc->setObjectName(QString::fromUtf8("actDanhmuc"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 411, 211));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/background.png")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 21));
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
        menuB_o_c_o->addAction(actBaocao);
        menuQu_n_l_User->addAction(actTaouser);
        menuQu_n_l_User->addAction(actQliUser);
        toolBar->addAction(actTaodon);
        toolBar->addAction(actBaocao);
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
        actBaocao->setText(QCoreApplication::translate("MainWindow", "Xu\341\272\245t b\303\241o c\303\241o", nullptr));
        actDsdon->setText(QCoreApplication::translate("MainWindow", "Danh s\303\241ch \304\221\306\241n", nullptr));
        actNhaphang->setText(QCoreApplication::translate("MainWindow", "Nh\341\272\255p s\341\272\243n ph\341\272\251m", nullptr));
        actDanhmuc->setText(QCoreApplication::translate("MainWindow", "Danh m\341\273\245c s\341\272\243n ph\341\272\251m", nullptr));
        label->setText(QString());
        menu_n_h_ng->setTitle(QCoreApplication::translate("MainWindow", "\304\220\306\241n h\303\240ng", nullptr));
        menuS_n_ph_m->setTitle(QCoreApplication::translate("MainWindow", "S\341\272\243n ph\341\272\251m", nullptr));
        menuVoucher->setTitle(QCoreApplication::translate("MainWindow", "Voucher", nullptr));
        menuB_o_c_o->setTitle(QCoreApplication::translate("MainWindow", "B\303\241o c\303\241o", nullptr));
        menuQu_n_l_User->setTitle(QCoreApplication::translate("MainWindow", "User", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

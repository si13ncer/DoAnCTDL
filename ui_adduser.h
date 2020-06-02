/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adduser
{
public:
    QWidget *centralwidget;
    QRadioButton *btnAD;
    QLineEdit *leditNID;
    QLabel *lblNUser;
    QLabel *label_2;
    QLabel *lblNPW;
    QRadioButton *btnKH;
    QPushButton *btnHuy;
    QLabel *lblNID;
    QLineEdit *leditNPW;
    QPushButton *btnLuu;
    QPushButton *btnShow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adduser)
    {
        if (adduser->objectName().isEmpty())
            adduser->setObjectName(QString::fromUtf8("adduser"));
        adduser->resize(393, 305);
        centralwidget = new QWidget(adduser);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnAD = new QRadioButton(centralwidget);
        btnAD->setObjectName(QString::fromUtf8("btnAD"));
        btnAD->setGeometry(QRect(100, 200, 101, 31));
        leditNID = new QLineEdit(centralwidget);
        leditNID->setObjectName(QString::fromUtf8("leditNID"));
        leditNID->setGeometry(QRect(131, 90, 181, 20));
        leditNID->setMaxLength(15);
        lblNUser = new QLabel(centralwidget);
        lblNUser->setObjectName(QString::fromUtf8("lblNUser"));
        lblNUser->setGeometry(QRect(40, 40, 208, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(49, 177, 56, 16));
        lblNPW = new QLabel(centralwidget);
        lblNPW->setObjectName(QString::fromUtf8("lblNPW"));
        lblNPW->setGeometry(QRect(50, 134, 74, 16));
        btnKH = new QRadioButton(centralwidget);
        btnKH->setObjectName(QString::fromUtf8("btnKH"));
        btnKH->setGeometry(QRect(230, 200, 79, 31));
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(291, 250, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon);
        lblNID = new QLabel(centralwidget);
        lblNID->setObjectName(QString::fromUtf8("lblNID"));
        lblNID->setGeometry(QRect(50, 90, 75, 16));
        leditNPW = new QLineEdit(centralwidget);
        leditNPW->setObjectName(QString::fromUtf8("leditNPW"));
        leditNPW->setGeometry(QRect(130, 130, 181, 23));
        leditNPW->setMaxLength(15);
        leditNPW->setEchoMode(QLineEdit::Password);
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(210, 250, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon1);
        btnShow = new QPushButton(centralwidget);
        btnShow->setObjectName(QString::fromUtf8("btnShow"));
        btnShow->setGeometry(QRect(317, 130, 31, 23));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/icon/showpw.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnShow->setIcon(icon2);
        btnShow->setIconSize(QSize(24, 24));
        adduser->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(adduser);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adduser->setStatusBar(statusbar);

        retranslateUi(adduser);

        QMetaObject::connectSlotsByName(adduser);
    } // setupUi

    void retranslateUi(QMainWindow *adduser)
    {
        adduser->setWindowTitle(QCoreApplication::translate("adduser", "MainWindow", nullptr));
        btnAD->setText(QCoreApplication::translate("adduser", "Qu\341\272\243n l\303\275", nullptr));
        leditNID->setText(QString());
        lblNUser->setText(QCoreApplication::translate("adduser", "                              TH\303\212M NG\306\257\341\273\234I D\303\231NG M\341\273\232I", nullptr));
        label_2->setText(QCoreApplication::translate("adduser", "C\341\272\245p quy\341\273\201n:", nullptr));
        lblNPW->setText(QCoreApplication::translate("adduser", "M\341\272\255t kh\341\272\251u          ", nullptr));
        btnKH->setText(QCoreApplication::translate("adduser", "Kh\303\241ch h\303\240ng", nullptr));
        btnHuy->setText(QCoreApplication::translate("adduser", "Hu\341\273\267", nullptr));
        lblNID->setText(QCoreApplication::translate("adduser", "T\303\252n ng\306\260\341\273\235i d\303\271ng", nullptr));
        leditNPW->setText(QString());
        btnLuu->setText(QCoreApplication::translate("adduser", "L\306\260u", nullptr));
        btnShow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adduser: public Ui_adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H

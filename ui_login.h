/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *btnLog;
    QLineEdit *leditPW;
    QLabel *lblPW;
    QLabel *lblID;
    QLineEdit *leditID;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(460, 247);
        login->setMinimumSize(QSize(451, 235));
        QFont font;
        font.setPointSize(10);
        login->setFont(font);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 40, 131, 131));
        label->setPixmap(QPixmap(QString::fromUtf8(":/res/res/icon/login (2).png")));
        label->setScaledContents(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(210, 50, 231, 131));
        btnLog = new QPushButton(groupBox);
        btnLog->setObjectName(QString::fromUtf8("btnLog"));
        btnLog->setGeometry(QRect(80, 90, 91, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLog->setIcon(icon);
        leditPW = new QLineEdit(groupBox);
        leditPW->setObjectName(QString::fromUtf8("leditPW"));
        leditPW->setGeometry(QRect(80, 60, 128, 20));
        leditPW->setMaxLength(15);
        leditPW->setEchoMode(QLineEdit::Password);
        lblPW = new QLabel(groupBox);
        lblPW->setObjectName(QString::fromUtf8("lblPW"));
        lblPW->setGeometry(QRect(10, 62, 61, 16));
        lblID = new QLabel(groupBox);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        lblID->setGeometry(QRect(10, 30, 61, 16));
        leditID = new QLineEdit(groupBox);
        leditID->setObjectName(QString::fromUtf8("leditID"));
        leditID->setGeometry(QRect(81, 28, 128, 20));
        leditID->setMaxLength(15);
        leditID->setClearButtonEnabled(false);
        login->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "MainWindow", nullptr));
        label->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("login", "\304\220\304\202NG NH\341\272\254P", nullptr));
        btnLog->setText(QCoreApplication::translate("login", "\304\220\304\203ng nh\341\272\255p", nullptr));
        leditPW->setText(QString());
        lblPW->setText(QCoreApplication::translate("login", "M\341\272\255t kh\341\272\251u          ", nullptr));
        lblID->setText(QCoreApplication::translate("login", "ID", nullptr));
        leditID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

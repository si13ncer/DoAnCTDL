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
#include <QtWidgets/QSplitter>
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
    QSplitter *splitter;
    QLabel *lblID;
    QLineEdit *leditID;
    QSplitter *splitter_2;
    QLabel *lblPW;
    QLineEdit *leditPW;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(451, 235);
        login->setMinimumSize(QSize(451, 235));
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
        btnLog->setGeometry(QRect(90, 90, 80, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLog->setIcon(icon);
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 30, 208, 20));
        splitter->setOrientation(Qt::Horizontal);
        lblID = new QLabel(splitter);
        lblID->setObjectName(QString::fromUtf8("lblID"));
        splitter->addWidget(lblID);
        leditID = new QLineEdit(splitter);
        leditID->setObjectName(QString::fromUtf8("leditID"));
        leditID->setMaxLength(15);
        leditID->setClearButtonEnabled(false);
        splitter->addWidget(leditID);
        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(10, 62, 207, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        lblPW = new QLabel(splitter_2);
        lblPW->setObjectName(QString::fromUtf8("lblPW"));
        splitter_2->addWidget(lblPW);
        leditPW = new QLineEdit(splitter_2);
        leditPW->setObjectName(QString::fromUtf8("leditPW"));
        leditPW->setMaxLength(15);
        leditPW->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(leditPW);
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
        lblID->setText(QCoreApplication::translate("login", "T\303\252n ng\306\260\341\273\235i d\303\271ng", nullptr));
        leditID->setText(QString());
        lblPW->setText(QCoreApplication::translate("login", "M\341\272\255t kh\341\272\251u          ", nullptr));
        leditPW->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

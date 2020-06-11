/********************************************************************************
** Form generated from reading UI file 'changepw.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPW_H
#define UI_CHANGEPW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changepw
{
public:
    QWidget *centralwidget;
    QPushButton *btnLuu;
    QPushButton *btnHuy;
    QLabel *lblNP;
    QLineEdit *lEditNP;
    QLabel *label;
    QPushButton *btnShow;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *changepw)
    {
        if (changepw->objectName().isEmpty())
            changepw->setObjectName(QString::fromUtf8("changepw"));
        changepw->resize(350, 216);
        QFont font;
        font.setPointSize(10);
        changepw->setFont(font);
        centralwidget = new QWidget(changepw);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnLuu = new QPushButton(centralwidget);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(180, 160, 71, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        btnHuy = new QPushButton(centralwidget);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(260, 160, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon1);
        lblNP = new QLabel(centralwidget);
        lblNP->setObjectName(QString::fromUtf8("lblNP"));
        lblNP->setGeometry(QRect(20, 70, 131, 16));
        lEditNP = new QLineEdit(centralwidget);
        lEditNP->setObjectName(QString::fromUtf8("lEditNP"));
        lEditNP->setGeometry(QRect(50, 110, 211, 23));
        lEditNP->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 181, 31));
        btnShow = new QPushButton(centralwidget);
        btnShow->setObjectName(QString::fromUtf8("btnShow"));
        btnShow->setGeometry(QRect(270, 110, 31, 23));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/icon/showpw.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnShow->setIcon(icon2);
        btnShow->setIconSize(QSize(25, 25));
        changepw->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(changepw);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        changepw->setStatusBar(statusbar);

        retranslateUi(changepw);

        QMetaObject::connectSlotsByName(changepw);
    } // setupUi

    void retranslateUi(QMainWindow *changepw)
    {
        changepw->setWindowTitle(QCoreApplication::translate("changepw", "MainWindow", nullptr));
        btnLuu->setText(QCoreApplication::translate("changepw", "L\306\260u", nullptr));
        btnHuy->setText(QCoreApplication::translate("changepw", "Hu\341\273\267", nullptr));
        lblNP->setText(QCoreApplication::translate("changepw", "\304\220\341\272\267t l\341\272\241i m\341\272\255t kh\341\272\251u m\341\273\233i:", nullptr));
        label->setText(QCoreApplication::translate("changepw", "\304\220\341\273\224I M\341\272\254T KH\341\272\250U", nullptr));
        btnShow->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class changepw: public Ui_changepw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPW_H

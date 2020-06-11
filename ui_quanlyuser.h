/********************************************************************************
** Form generated from reading UI file 'quanlyuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANLYUSER_H
#define UI_QUANLYUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_quanlyuser
{
public:
    QLabel *lblTitle;
    QLabel *lblSlt;
    QComboBox *cBxUser;
    QToolButton *btnCPW;
    QToolButton *btnCapquyen;
    QToolButton *btnDeluser;

    void setupUi(QDialog *quanlyuser)
    {
        if (quanlyuser->objectName().isEmpty())
            quanlyuser->setObjectName(QString::fromUtf8("quanlyuser"));
        quanlyuser->resize(402, 319);
        QFont font;
        font.setPointSize(10);
        quanlyuser->setFont(font);
        lblTitle = new QLabel(quanlyuser);
        lblTitle->setObjectName(QString::fromUtf8("lblTitle"));
        lblTitle->setGeometry(QRect(110, 10, 191, 41));
        lblSlt = new QLabel(quanlyuser);
        lblSlt->setObjectName(QString::fromUtf8("lblSlt"));
        lblSlt->setGeometry(QRect(30, 50, 121, 21));
        cBxUser = new QComboBox(quanlyuser);
        cBxUser->setObjectName(QString::fromUtf8("cBxUser"));
        cBxUser->setGeometry(QRect(80, 80, 251, 22));
        btnCPW = new QToolButton(quanlyuser);
        btnCPW->setObjectName(QString::fromUtf8("btnCPW"));
        btnCPW->setGeometry(QRect(80, 120, 251, 41));
        btnCPW->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/changepw.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCPW->setIcon(icon);
        btnCPW->setIconSize(QSize(30, 30));
        btnCPW->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnCapquyen = new QToolButton(quanlyuser);
        btnCapquyen->setObjectName(QString::fromUtf8("btnCapquyen"));
        btnCapquyen->setGeometry(QRect(80, 170, 251, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/permission.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCapquyen->setIcon(icon1);
        btnCapquyen->setIconSize(QSize(60, 60));
        btnCapquyen->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btnDeluser = new QToolButton(quanlyuser);
        btnDeluser->setObjectName(QString::fromUtf8("btnDeluser"));
        btnDeluser->setGeometry(QRect(80, 220, 251, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/res/icon/deluser.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeluser->setIcon(icon2);
        btnDeluser->setIconSize(QSize(45, 45));
        btnDeluser->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        retranslateUi(quanlyuser);

        QMetaObject::connectSlotsByName(quanlyuser);
    } // setupUi

    void retranslateUi(QDialog *quanlyuser)
    {
        quanlyuser->setWindowTitle(QCoreApplication::translate("quanlyuser", "Dialog", nullptr));
        lblTitle->setText(QCoreApplication::translate("quanlyuser", "      QU\341\272\242N L\303\235 NG\306\257\341\273\234I D\303\231NG", nullptr));
        lblSlt->setText(QCoreApplication::translate("quanlyuser", "Ch\341\273\215n ng\306\260\341\273\235i d\303\271ng:", nullptr));
        btnCPW->setText(QCoreApplication::translate("quanlyuser", "               \304\220\341\273\225i m\341\272\255t kh\341\272\251u", nullptr));
        btnCapquyen->setText(QCoreApplication::translate("quanlyuser", "              C\341\272\245p quy\341\273\201n", nullptr));
        btnDeluser->setText(QCoreApplication::translate("quanlyuser", "           Xo\303\241 ng\306\260\341\273\235i d\303\271ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class quanlyuser: public Ui_quanlyuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANLYUSER_H

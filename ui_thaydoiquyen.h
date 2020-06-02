/********************************************************************************
** Form generated from reading UI file 'thaydoiquyen.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THAYDOIQUYEN_H
#define UI_THAYDOIQUYEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_thaydoiquyen
{
public:
    QRadioButton *btnAD;
    QRadioButton *btnKH;
    QPushButton *btnLuu;
    QPushButton *btnHuy;
    QLabel *lblCapquyen;

    void setupUi(QDialog *thaydoiquyen)
    {
        if (thaydoiquyen->objectName().isEmpty())
            thaydoiquyen->setObjectName(QString::fromUtf8("thaydoiquyen"));
        thaydoiquyen->resize(352, 162);
        btnAD = new QRadioButton(thaydoiquyen);
        btnAD->setObjectName(QString::fromUtf8("btnAD"));
        btnAD->setGeometry(QRect(70, 70, 101, 31));
        btnKH = new QRadioButton(thaydoiquyen);
        btnKH->setObjectName(QString::fromUtf8("btnKH"));
        btnKH->setGeometry(QRect(190, 70, 101, 31));
        btnLuu = new QPushButton(thaydoiquyen);
        btnLuu->setObjectName(QString::fromUtf8("btnLuu"));
        btnLuu->setGeometry(QRect(170, 120, 75, 23));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/res/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLuu->setIcon(icon);
        btnHuy = new QPushButton(thaydoiquyen);
        btnHuy->setObjectName(QString::fromUtf8("btnHuy"));
        btnHuy->setGeometry(QRect(260, 120, 75, 23));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/res/icon/discard.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHuy->setIcon(icon1);
        lblCapquyen = new QLabel(thaydoiquyen);
        lblCapquyen->setObjectName(QString::fromUtf8("lblCapquyen"));
        lblCapquyen->setGeometry(QRect(100, 10, 161, 61));

        retranslateUi(thaydoiquyen);

        QMetaObject::connectSlotsByName(thaydoiquyen);
    } // setupUi

    void retranslateUi(QDialog *thaydoiquyen)
    {
        thaydoiquyen->setWindowTitle(QCoreApplication::translate("thaydoiquyen", "Dialog", nullptr));
        btnAD->setText(QCoreApplication::translate("thaydoiquyen", "Qu\341\272\243n l\303\275", nullptr));
        btnKH->setText(QCoreApplication::translate("thaydoiquyen", "Kh\303\241ch h\303\240ng", nullptr));
        btnLuu->setText(QCoreApplication::translate("thaydoiquyen", "L\306\260u", nullptr));
        btnHuy->setText(QCoreApplication::translate("thaydoiquyen", "Hu\341\273\267", nullptr));
        lblCapquyen->setText(QCoreApplication::translate("thaydoiquyen", "THAY \304\220\341\273\224I QUY\341\273\200N TRUY C\341\272\254P", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thaydoiquyen: public Ui_thaydoiquyen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THAYDOIQUYEN_H

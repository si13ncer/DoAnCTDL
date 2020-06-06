/********************************************************************************
** Form generated from reading UI file 'dsdon.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSDON_H
#define UI_DSDON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_dsdon
{
public:

    void setupUi(QDialog *dsdon)
    {
        if (dsdon->objectName().isEmpty())
            dsdon->setObjectName(QString::fromUtf8("dsdon"));
        dsdon->resize(612, 365);

        retranslateUi(dsdon);

        QMetaObject::connectSlotsByName(dsdon);
    } // setupUi

    void retranslateUi(QDialog *dsdon)
    {
        dsdon->setWindowTitle(QCoreApplication::translate("dsdon", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dsdon: public Ui_dsdon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSDON_H

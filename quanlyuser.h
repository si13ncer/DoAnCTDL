//#endif // QUANLYUSER_H
#ifndef QUANLYUSER_H
#define QUANLYUSER_H

#include <QDialog>
#include "changepw.h"
#include "thaydoiquyen.h"

namespace Ui {
class quanlyuser;
}

class quanlyuser : public QDialog
{
    Q_OBJECT

public:
    explicit quanlyuser(QWidget *parent = nullptr);
    ~quanlyuser();

private slots:

    void on_btnCPW_pressed();

    void on_btnCapquyen_pressed();

    void on_btnDeluser_pressed();

    void on_cBxUser_activated(const QString &arg1);

private:
    Ui::quanlyuser *ui;
    changepw *cpw;
    thaydoiquyen *tdq;
};

#endif // QUANLYUSER_H

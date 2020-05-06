#include "quanlyuser.h"
#include "ui_quanlyuser.h"

quanlyuser::quanlyuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quanlyuser)
{
    ui->setupUi(this);
}

quanlyuser::~quanlyuser()
{
    delete ui;
}

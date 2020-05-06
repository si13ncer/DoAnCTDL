#include "quanlyuser2.h"
#include "ui_quanlyuser2.h"

quanlyuser2::quanlyuser2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quanlyuser2)
{
    ui->setupUi(this);
}

quanlyuser2::~quanlyuser2()
{
    delete ui;
}

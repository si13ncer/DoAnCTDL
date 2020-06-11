#include "kiemtrathongtin.h"
#include "ui_kiemtrathongtin.h"

kiemtrathongtin::kiemtrathongtin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kiemtrathongtin)
{
    ui->setupUi(this);
}

kiemtrathongtin::~kiemtrathongtin()
{
    delete ui;
}

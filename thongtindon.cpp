#include "thongtindon.h"
#include "ui_thongtindon.h"

thongtindon::thongtindon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thongtindon)
{
    ui->setupUi(this);
}

thongtindon::~thongtindon()
{
    delete ui;
}

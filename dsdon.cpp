#include "dsdon.h"
#include "ui_dsdon.h"

dsdon::dsdon(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dsdon)
{
    ui->setupUi(this);
}

dsdon::~dsdon()
{
    delete ui;
}

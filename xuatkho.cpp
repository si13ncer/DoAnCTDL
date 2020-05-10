#include "xuatkho.h"
#include "ui_xuatkho.h"
#include <QString>

xuatkho::xuatkho(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::xuatkho)
{
    ui->setupUi(this);
    QString title="Xuất kho";
    this->setWindowTitle(title);
}

xuatkho::~xuatkho()
{
    delete ui;
}

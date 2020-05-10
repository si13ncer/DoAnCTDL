#include "nhapkho.h"
#include "ui_nhapkho.h"
#include "QString"


nhapkho::nhapkho(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nhapkho)
{
    ui->setupUi(this);
    QString title="Nhập kho";
    this->setWindowTitle(title);
}

nhapkho::~nhapkho()
{
    delete ui;
}


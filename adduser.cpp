#include "adduser.h"
#include "ui_adduser.h"
#include "QString"

adduser::adduser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);
    QString title="Thêm người dùng";
    this->setWindowTitle(title);
}

adduser::~adduser()
{
    delete ui;
}

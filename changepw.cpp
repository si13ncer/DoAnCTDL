#include "changepw.h"
#include "ui_changepw.h"
#include "QString"

changepw::changepw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::changepw)
{
    ui->setupUi(this);
    QString title="Đổi mật khẩu";
    this->setWindowTitle(title);
}

changepw::~changepw()
{
    delete ui;
}

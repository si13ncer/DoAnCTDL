#include "thaydoiquyen.h"
#include "ui_thaydoiquyen.h"
#include "QString"

thaydoiquyen::thaydoiquyen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thaydoiquyen)
{
    ui->setupUi(this);
    QString title="Thay đổi quyền truy cập";
    this->setWindowTitle(title);
}

thaydoiquyen::~thaydoiquyen()
{
    delete ui;
}

#include "quanlyuser.h"
#include "ui_quanlyuser.h"
#include "QString"
quanlyuser::quanlyuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quanlyuser)
{
    ui->setupUi(this);
    QString title="Quản lý User";
    this->setWindowTitle(title);
}

quanlyuser::~quanlyuser()
{
    delete ui;
}

void quanlyuser::on_btnCPW_clicked()
{
    cpw=new changepw(this);
    cpw->show();
}

void quanlyuser::on_btnCapquyen_clicked()
{
    tdq =new thaydoiquyen(this);
    tdq->show();
}

#include "quanlyuser.h"
#include "ui_quanlyuser.h"
#include "QString"
#include "QMessageBox"
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

void quanlyuser::on_btnCPW_pressed()
{
    cpw=new changepw(this);
    cpw->show();
}

void quanlyuser::on_btnCapquyen_pressed()
{
    tdq =new thaydoiquyen(this);
    tdq->setModal(true);
    tdq->exec();

}

void quanlyuser::on_btnDeluser_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn xoá người dùng này?")==QMessageBox::Yes)
    {
        //Xoá người dùng
    }
}

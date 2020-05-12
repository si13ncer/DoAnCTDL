#include "changepw.h"
#include "ui_changepw.h"
#include "QString"
#include "QMessageBox"
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

/*void changepw::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
    {
        event->ignore();
    }
}*/
void changepw::on_btnHuy_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

/*void changepw::on_btnHuy_pressed()
{
    QMessageBox msgBox(QMessageBox::Question,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát????",QMessageBox::Yes|QMessageBox::No);
    msgBox.setButtonText(QMessageBox::Yes,"Đồng ý");
    msgBox.setButtonText(QMessageBox::No,"Huỷ");
    msgBox.setModal(false);
    if (msgBox.exec()==QMessageBox::Yes)
    {
    msgBox.close();
    }//========Tuỳ biến nút thất bại===========
}*/


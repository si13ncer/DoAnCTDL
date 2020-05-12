#include "adduser.h"
#include "ui_adduser.h"
#include "QString"
#include "QMessageBox"
#include "QCloseEvent"

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



void adduser::on_btnHuy_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}
/*void adduser::closeEvent(QCloseEvent *event)
{
   if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
   {
    event->ignore();
   }
}========Trùng===============
*/


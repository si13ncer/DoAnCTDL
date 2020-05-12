#include "taodonhang.h"
#include "ui_taodonhang.h"
#include "QString"
#include "QMessageBox"


taodonhang::taodonhang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::taodonhang)
{
    ui->setupUi(this);
    QString title="Tạo đơn hàng";
    this->setWindowTitle(title);
}

taodonhang::~taodonhang()
{
    delete ui;
}
//==========CloseEvent lặp với Btn Huy==========
/*void taodonhang::closeEvent(QCloseEvent *event)
{
  if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
   {
       event->ignore();
   }
}*/
void taodonhang::on_btnHuy_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}


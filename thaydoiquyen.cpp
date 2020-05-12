#include "thaydoiquyen.h"
#include "ui_thaydoiquyen.h"
#include "QString"
#include "QMessageBox"

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

void thaydoiquyen::on_btnHuy_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        close();
    }
}

/*void thaydoiquyen::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
    {
        event->ignore();
    }

}*/

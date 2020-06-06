#include "danhsachdon.h"
#include "ui_danhsachdon.h"
#include "QMessageBox"

danhsachdon::danhsachdon(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::danhsachdon)
{
    ui->setupUi(this);
    ui->tblDsdon->setItemDelegateForColumn(2,new ComboBoxItemDelegate);
}

danhsachdon::~danhsachdon()
{
    delete ui;
}

void danhsachdon::on_btnThoat_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

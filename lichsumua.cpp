#include "lichsumua.h"
#include "ui_lichsumua.h"
#include "QString"
#include "dslkUser.h"
#include "thongtinkhach.h"
#include "QMessageBox"

lichsumua::lichsumua(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lichsumua)
{
    ui->setupUi(this);
    ui->lblID->setText(QString::fromStdString(usingid));
    nodek* n = lkh.head;
    while (n)
    {
        if (n->data.id==usingid)
        {
           ui->lblTen->setText(QString::fromStdString(n->data.ten));
           ui->leditAdress->setText(QString::fromStdString(n->data.addr));
           ui->lblSdt->setText(QString::fromStdString(n->data.phone));
           break;
        }
        n = n->next;
    }
    ui->tbvLichsudon->setItemDelegateForColumn(6,new ComboBoxItemDelegate);
}

lichsumua::~lichsumua()
{
    delete ui;
}


void lichsumua::on_btnThoat_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

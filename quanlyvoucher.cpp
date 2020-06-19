#include "quanlyvoucher.h"
#include "ui_quanlyvoucher.h"
#include "QMessageBox"
#include "voucher.h"

QuanlyVoucher::QuanlyVoucher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QuanlyVoucher)
{
    ui->setupUi(this);
    QString title= "Quản lý Voucher";
    this->setWindowTitle(title);



}

QuanlyVoucher::~QuanlyVoucher()
{
    delete ui;
}


void QuanlyVoucher::on_btnThoat_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}



void QuanlyVoucher::on_btnList_clicked()
{
    ui->tableWidgetQLVC->setRowCount(0);
    nodevc *p=lvc.head;

   while (p)
   {

       QString ma = QString::fromStdString(p->data.ma);
       QString ten = QString::fromStdString(p->data.ten);
       QString loai = QString::fromStdString(p->data.loai);
       float giatri=p->data.giatri;
       QString datefr = QString::fromStdString(p->data.datefr);
       QString dateto = QString::fromStdString(p->data.dateto);

       ui->tableWidgetQLVC->insertRow(ui->tableWidgetQLVC->rowCount());
       ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,0,new QTableWidgetItem(ma));
       ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,1,new QTableWidgetItem(ten));
       ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,2,new QTableWidgetItem(loai));
       ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,3,new QTableWidgetItem(giatri));
       ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,4,new QTableWidgetItem(datefr));
       ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,5,new QTableWidgetItem(dateto));

       p=p->next;

   }

}

void QuanlyVoucher::on_btnXoa_clicked()
{
    int slt=ui->tableWidgetQLVC->currentRow();
    QString ten=ui->tableWidgetQLVC->item(slt,0)->text();

    nodevc* p = lvc.head;
    while (p)
    {
                ui->tableWidgetQLVC->removeRow(slt);
                delSltvc(lvc,p->data.ma);
                ghilistvoucher(lvc);
                break;

        }
        p=p->next;

}

void QuanlyVoucher::on_btnTimkiem_clicked()
{
    ui->tableWidgetQLVC->setRowCount(0);

    string find= ui->lineEditTimkiem->text().toStdString();
    nodevc* p = lvc.head;

    while(p){
        if (p->data.ma==find || p->data.ten==find)

        {
            QString ma = QString::fromStdString(p->data.ma);
            QString ten = QString::fromStdString(p->data.ten);
            QString loai = QString::fromStdString(p->data.loai);
            float giatri=p->data.giatri;
            QString datefr = QString::fromStdString(p->data.datefr);
            QString dateto = QString::fromStdString(p->data.dateto);
            ui->tableWidgetQLVC->insertRow(ui->tableWidgetQLVC->rowCount());
            ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,0,new QTableWidgetItem(ma));
            ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,1,new QTableWidgetItem(ten));
            ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,2,new QTableWidgetItem(loai));
            ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,3,new QTableWidgetItem(giatri));
            ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,4,new QTableWidgetItem(datefr));
            ui->tableWidgetQLVC->setItem(ui->tableWidgetQLVC->rowCount()-1,5,new QTableWidgetItem(dateto));
       }
        p=p->next;
    }
}
void QuanlyVoucher::on_btnLuu_clicked()
{
    if(QMessageBox::question(this,"Thông báo","Các thay đổi sẽ được lưu lại, tiếp tục?")==QMessageBox::No)
    {
        ghilistvoucher(lvc);
        QMessageBox::information(this,"Xác nhận","Lưu thành công!");
        this->close();
    }

}

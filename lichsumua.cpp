#include "lichsumua.h"
#include "ui_lichsumua.h"
#include "QString"
#include "dslkUser.h"
#include "thongtinkhach.h"
#include "QMessageBox"
#include "listdonhang.h"
#include <QDebug>

lichsumua::lichsumua(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lichsumua)
{
    ui->setupUi(this);
    QString title= "Đơn đã tạo";
    this->setWindowTitle(title);
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
    ui->tblLichsudon->setItemDelegateForColumn(7,new ComboBoxItemDelegate);
    int create=0;
    int done=0;
    int price=0;
    nodedon* k = ldon.head;
    while (k)
    {
        if (k->data.idmua==usingid)
        {
            create+=1;
            QString ngay = QString::number(k->data.ngaytao.ngay); //QString from int
            QString thang = QString::number(k->data.ngaytao.thang);
            QString nam = QString::number(k->data.ngaytao.nam);
            QString pref=QString::fromStdString(k->data.ma.pref);
            QString stt=QString::number(k->data.ma.stt);
            QString danhmuc=QString::fromStdString(k->data.loai);
            QString tenhang=QString::fromStdString(k->data.ten);
            QString thanhtoan=QString::fromStdString(k->data.thanhtoan);
            QString vanchuyen=QString::fromStdString(k->data.vanchuyen);
            QString trangthai=QString::fromStdString(k->data.trangthai);
            QString ghichu=QString::fromStdString(k->data.ghichu);
            if (trangthai=="Đã nhận")
            {
                done+=1;
                price+=k->data.thanhtien;
            }
            ui->tblLichsudon->insertRow(ui->tblLichsudon->rowCount());
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 0, new QTableWidgetItem(pref+"-"+stt));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 1, new QTableWidgetItem(tenhang));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 2, new QTableWidgetItem(QString::number(k->data.soluong)));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 3, new QTableWidgetItem(QString::number(k->data.thanhtien)));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 4, new QTableWidgetItem(ngay+"/"+thang+"/"+nam));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 5, new QTableWidgetItem(thanhtoan));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 6, new QTableWidgetItem(vanchuyen));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 7, new QTableWidgetItem(trangthai));
            ui->tblLichsudon->setItem(ui->tblLichsudon->rowCount()-1, 8, new QTableWidgetItem(ghichu));
        }
        k = k->next;
    }
    ui->lblSodon->setNum(create);
    ui->lblThanhcong->setNum(done);
    ui->lblGiatri->setNum(price);
    ui->lblGiatri->setStyleSheet("color: green;");
}

lichsumua::~lichsumua()
{
    delete ui;
}

void lichsumua::on_tblLichsudon_cellChanged(int row, int column)
{
    row=ui->tblLichsudon->currentRow();
    column=ui->tblLichsudon->currentColumn();
    if (column==7 || column==8)
    {
        std::string trangthai=ui->tblLichsudon->item(row,7)->text().toStdString(); //get cell of col7 content
        std::string ghichu=ui->tblLichsudon->item(row,8)->text().toStdString(); //get cell of col8 content
        QString match=ui->tblLichsudon->item(row,0)->text();//cell of col0 (madon)
        nodedon* k = ldon.head;
        while (k)
        {
            QString pref=QString::fromStdString(k->data.ma.pref);
            QString stt=QString::number(k->data.ma.stt);
            QString madon=pref+"-"+stt;
            if(madon==match)
            {
                k->data.trangthai=trangthai;
                k->data.ghichu=ghichu;
                break;
            }
            k = k->next;
        }
    }
}
void lichsumua::on_btnThoat_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

void lichsumua::on_btnLuu_clicked()
{
    if(QMessageBox::question(this,"Thông báo","Các thay đổi sẽ được lưu lại, tiếp tục?")==QMessageBox::Yes)
    {
        ghilistdon(ldon);
        QMessageBox::information(this,"Xác nhận","Lưu thành công!");
        this->close();
    }
}


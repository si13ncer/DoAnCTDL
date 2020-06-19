#include "AddVoucher.h"
#include "ui_AddVoucher.h"
#include "QString"
#include "QMessageBox"
#include "QCloseEvent"
#include <string>
#include <QDateTime>
#include "voucher.h"
AddVoucher::AddVoucher(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddVoucher)
{
    ui->setupUi(this);
    QString title="Thêm voucher";
    this->setWindowTitle(title);
    ui->cbxLoaiVoucher->addItem("Thiết Bị Điện Tử");
    ui->cbxLoaiVoucher->addItem("Phụ Kiện Điện Tử");
    ui->cbxLoaiVoucher->addItem("TV & Thiết Bị Điện Gia Dụng");
    ui->cbxLoaiVoucher->addItem("Sức Khoẻ & Làm Đẹp");
    ui->cbxLoaiVoucher->addItem("Hàng Mẹ, Bé & Đồ Chơi");
    ui->cbxLoaiVoucher->addItem("Siêu Thị Tạp Hoá");
    ui->cbxLoaiVoucher->addItem("Hàng Gia Dụng & Đời Sống");
    ui->cbxLoaiVoucher->addItem("Thời Trang Nữ");
    ui->cbxLoaiVoucher->addItem("Thời Trang Nam");
    ui->cbxLoaiVoucher->addItem("Phụ Kiện Thời Trang");
    ui->cbxLoaiVoucher->addItem("Thể Thao & Du Lịch");
    ui->cbxLoaiVoucher->addItem("Ôtô, Xe Máy & Thiết Bị Định Vị");
}

AddVoucher::~AddVoucher()
{
    delete ui;
}



void AddVoucher::on_btnHuy_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

void AddVoucher::on_btnLuu_clicked()
{


   /* if (giatri.length()<=0)
    {
        ui->statusbar->showMessage("Giá trị Voucher không được để trống");
        return;
    }*/


    voucher vc;

    QString ma = ui->LineEditMa->text();
    std::string mastd = ma.toStdString();
    if (ma.length()<=0)
    {
        ui->statusbar->showMessage("Mã Voucher không được để trống");
        return;
    }

        if (avaiable(lvc,mastd)==false)
        {
        ui->statusbar->showMessage("Mã Voucher đã tồn tại!");
        return;
        }
    vc.ma=mastd;
    QString ten = ui->LineEditTen->text();
    std::string tenstd = ten.toStdString();
    if (ten.length()<=0)
    {
        ui->statusbar->showMessage("Tên Voucher không được để trống");
        return;
    }
    vc.ten=tenstd;

    QString loai = ui->cbxLoaiVoucher->currentText();
    vc.loai= loai.toStdString();

    float giatri = ui->dspinBoxGiatri->value();
    vc.giatri=giatri;

    QDate Mydatefr=ui->dateEditTimefrom->date();
    QString datefr=Mydatefr.toString("dd/MM/yyyy");
    vc.datefr=datefr.toStdString();
    QDate Mydateto=ui->dateEditTimeto->date();
    QString dateto=Mydateto.toString("dd/MM/yyyy");
    vc.dateto=dateto.toStdString();

   nodevc* n = nodeInitvc(vc);
   addTailvc(lvc, n);
   ghilistvoucher(lvc);
    ui->statusbar->showMessage("Lưu thành công!");
    if(QMessageBox::question(this,"Thông báo","Dữ liệu đã được lưu, bạn có muốn thêm voucher khác?")==QMessageBox::Yes)
    {
        foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())//clear data form
        {
            widget->clear();
            ui->statusbar->clearMessage();
        }
    }
    else this->close();
}



#include "thongkedon.h"
#include "ui_thongkedon.h"
#include "listdonhang.h"
#include "QDate"
#include "QDebug"
#include "QMessageBox"
int hientai=QDate::currentDate().toString("dd/MM/yy").mid(3,2).toInt();
thongkedon::thongkedon(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::thongkedon)
{
    ui->setupUi(this);
    this->setWindowTitle("Thống kê doanh số theo tháng");
    int thang=hientai;
    ui->spbThang->setValue(thang);
    int tong=0;
    int giatri2=0;
    int thanhcong=0;
    int giatri=0;
    int doitra=0;
    int huy=0;
    float tangtruongthang=0;
    int tongcacthang=0;
    nodedon* n=ldon.head;
    while (n)
    {

        if(n->data.ngaytao.thang==thang)
        {
            tong+=1;
            if (n->data.trangthai=="Đã nhận")
            {
                thanhcong+=1;
                 giatri+=n->data.thanhtien;
            }
            if (n->data.trangthai=="Huỷ đơn")
            {
                huy+=1;
            }
            if (n->data.trangthai=="Lỗi - Gửi trả")
            {
                doitra+=1;
            }
        }
        if(n->data.ngaytao.thang==thang-1 && n->data.trangthai=="Đã nhận")// so sánh tăng trưởng tháng
        {
           giatri2+=n->data.thanhtien;
        }
        if(n->data.ngaytao.thang<thang && n->data.trangthai=="Đã nhận")// so sánh tăng trưởng tb tháng
        {
           tongcacthang+=n->data.thanhtien;
        }
        n=n->next;       
    }
    if (giatri2<=0)
        giatri2=1;
    tangtruongthang=((giatri/giatri2)-1)*100;
    if (tangtruongthang<0)
     {
        ui->lbltangthang->setStyleSheet("color: red;");
        ui->lblTangthang->setStyleSheet("color: red;");
        ui->lbltangthang->setText("-");
        ui->lblTangthang->setNum(abs(tangtruongthang));
     }
    else
     {
//        ui->lbltangthang->setStyleSheet("color: green;");
//        ui->lblTangthang->setStyleSheet("color: green;");
        ui->lbltangthang->setText("+");
        ui->lblTangthang->setNum(tangtruongthang);
     }
    float tb=0;
    float tangtruongtb=0;
    if (thang<2)
        ui->statusbar->showMessage("Chưa đủ dữ liệu thống kê");

    else
    {
        tb=tongcacthang/(thang-1);
        tangtruongtb=((giatri/tb)-1)*100;
    }
    if (tangtruongtb<0)
    {
        ui->lblbinhquanduong->setStyleSheet("color: red;");
        ui->lblTTB->setStyleSheet("color: red;");
        ui->lblbinhquanduong->setText("-");
        ui->lblTTB->setNum(abs(tangtruongtb));
    }
    else
     {
        ui->lblbinhquanduong->setStyleSheet("color: green;");
        ui->lblTTB->setStyleSheet("color: green;");
        ui->lblbinhquanduong->setText("+");
        ui->lblTTB->setNum(tangtruongtb);
     }
    ui->lblSodon->setNum(tong);
    ui->lblGiatri->setNum(giatri);
    ui->lblThanhcong->setNum(thanhcong);
    ui->lblHuy->setNum(huy);
    ui->lblDoitra->setNum(doitra);
}

thongkedon::~thongkedon()
{
    delete ui;
}

void thongkedon::on_spbThang_valueChanged(int arg1)
{
    ui->spbThang->setMaximum(hientai);
    Q_UNUSED(arg1);
    ui->statusbar->clearMessage();
    ui->lblSodon->setNum(0);
    ui->lblGiatri->setNum(0);
    ui->lblThanhcong->setNum(0);
    ui->lblHuy->setNum(0);
    ui->lblDoitra->setNum(0);
    int thang=ui->spbThang->value();
    int tong=0;
    int giatri2=0;
    int thanhcong=0;
    int giatri=0;
    int doitra=0;
    int huy=0;
    float tangtruongthang;
    int tongcacthang=0;
    nodedon* n=ldon.head;
    while (n)
    {

        if(n->data.ngaytao.thang==thang)
        {
            tong+=1;
            if (n->data.trangthai=="Đã nhận")
            {
                thanhcong+=1;
                 giatri+=n->data.thanhtien;
            }
            if (n->data.trangthai=="Huỷ đơn")
            {
                huy+=1;
            }
            if (n->data.trangthai=="Lỗi - Gửi trả")
            {
                doitra+=1;
            }
        }
        if(n->data.ngaytao.thang==thang-1 && n->data.trangthai=="Đã nhận")// so sánh tăng trưởng tháng
        {
           giatri2+=n->data.thanhtien;
        }
        if(n->data.ngaytao.thang<thang && n->data.trangthai=="Đã nhận")// so sánh tăng trưởng tb tháng
        {
           tongcacthang+=n->data.thanhtien;
        }
        n=n->next;
    }
    if (giatri2<=0)
        giatri2=1;
    tangtruongthang=((giatri/giatri2)-1)*100;
    if (tangtruongthang<0)
     {
        ui->lbltangthang->setStyleSheet("color: red;");
        ui->lblTangthang->setStyleSheet("color: red;");
        ui->lbltangthang->setText("-");
        ui->lblTangthang->setNum(abs(tangtruongthang));
     }
    else
     {
        ui->lbltangthang->setStyleSheet("color: green;");
        ui->lblTangthang->setStyleSheet("color: green;");
        ui->lbltangthang->setText("+");
        ui->lblTangthang->setNum(tangtruongthang);
     }
    float tb=0;
    float tangtruongtb=0;
    if (thang<2)
        ui->statusbar->showMessage("Chưa đủ dữ liệu thống kê");

    else
    {
        tb=tongcacthang/(thang-1);
        tangtruongtb=((giatri/tb)-1)*100;
    }
    if (tangtruongtb<0)
    {
        ui->lblbinhquanduong->setStyleSheet("color: red;");
        ui->lblTTB->setStyleSheet("color: red;");
        ui->lblbinhquanduong->setText("-");
        ui->lblTTB->setNum(abs(tangtruongtb));
    }
    else
     {
        ui->lblbinhquanduong->setStyleSheet("color: green;");
        ui->lblTTB->setStyleSheet("color: green;");
        ui->lblbinhquanduong->setText("+");
        ui->lblTTB->setNum(tangtruongtb);
     }
    ui->lblSodon->setNum(tong);
    ui->lblGiatri->setNum(giatri);
    ui->lblThanhcong->setNum(thanhcong);
    ui->lblHuy->setNum(huy);
    ui->lblDoitra->setNum(doitra);
}

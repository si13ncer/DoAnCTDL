#include "ThongTinKiemTraSanPhamDonHang_2.h"
#include "ui_thongtinkiemtradonhang_2.h"

ThongTinKiemTraDonHang_2::ThongTinKiemTraDonHang_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThongTinKiemTraDonHang_2)
{
    ui->setupUi(this);
}

ThongTinKiemTraDonHang_2::~ThongTinKiemTraDonHang_2()
{
    delete ui;
}

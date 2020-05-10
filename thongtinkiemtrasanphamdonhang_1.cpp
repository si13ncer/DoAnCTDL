#include "thongtinkiemtrasanphamdonhang_1.h"
#include "ui_thongtinkiemtrasanphamdonhang_1.h"

ThongTinKiemTraSanPhamDonHang_1::ThongTinKiemTraSanPhamDonHang_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThongTinKiemTraSanPhamDonHang_1)
{
    ui->setupUi(this);
}

ThongTinKiemTraSanPhamDonHang_1::~ThongTinKiemTraSanPhamDonHang_1()
{
    delete ui;
}

#include "thongtinkiemtrasanphamdonhang.h"
#include "ui_thongtinkiemtrasanphamdonhang.h"

thongtinkiemtrasanphamdonhang::thongtinkiemtrasanphamdonhang(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thongtinkiemtrasanphamdonhang)
{
    ui->setupUi(this);
}

thongtinkiemtrasanphamdonhang::~thongtinkiemtrasanphamdonhang()
{
    delete ui;
}

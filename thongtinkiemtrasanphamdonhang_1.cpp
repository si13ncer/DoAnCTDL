#include "thongtinkiemtrasanphamdonhang_1.h"
#include "ui_thongtinkiemtrasanphamdonhang_1.h"

thongtinkiemtrasanphamdonhang_1::thongtinkiemtrasanphamdonhang_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thongtinkiemtrasanphamdonhang_1)
{
    ui->setupUi(this);
}

thongtinkiemtrasanphamdonhang_1::~thongtinkiemtrasanphamdonhang_1()
{
    delete ui;
}

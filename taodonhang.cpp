#include "taodonhang.h"
#include "ui_taodonhang.h"
#include "QString"


taodonhang::taodonhang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::taodonhang)
{
    ui->setupUi(this);
    QString title="Tạo đơn hàng";
    this->setWindowTitle(title);
}

taodonhang::~taodonhang()
{
    delete ui;
}


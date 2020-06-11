#include "khohang.h"
#include "ui_khohang.h"

khohang::khohang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::khohang)
{
    ui->setupUi(this);
}

khohang::~khohang()
{
    delete ui;
}


void khohang::on_cbxplh_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
}

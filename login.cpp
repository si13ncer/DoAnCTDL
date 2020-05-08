#include "login.h"
#include "ui_login.h"
#include "QString"
#include "mainwindow.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QString title="Đăng nhập";
    this->setWindowTitle(title);
}

login::~login()
{
    delete ui;
}

void login::on_btnLog_clicked()
{
    hide();
    mainwindow = new MainWindow(this);
    mainwindow->show();
}

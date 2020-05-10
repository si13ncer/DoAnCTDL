#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "taodonhang.h"
#include "adduser.h"
#include "quanlyuser.h"
#include<nhapkho.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString title="Phần mềm quản lí bán hàng Lazada";
    this->setWindowTitle(title);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actTaodon_triggered()
{
    tdh = new taodonhang(this);
    tdh->show();
}

void MainWindow::on_actTaouser_triggered()
{
    ausr = new adduser(this);
    ausr->show();
}

void MainWindow::on_actQliUser_triggered()
{
    qlusr = new quanlyuser(this);
    qlusr->show();
}


void MainWindow::on_actNhapkho_triggered()
{
    nk= new nhapkho(this);
    nk->show();
}

void MainWindow::on_actXuatkho_triggered()
{
 xk= new xuatkho(this);
 xk->show();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "taodonhang.h"
#include "adduser.h"
#include "quanlyuser.h"
#include "QMessageBox"
#include "dslkUser.h"
#include "QToolBar"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString title="Phần mềm quản lí bán hàng Lazada";
    this->setWindowTitle(title);
    if (per!="ad")
    {
        ui->actQliUser->setDisabled(true);
        ui->actTaouser->setDisabled(true);
        ui->actDsdon->setDisabled(true);
    }
    ui->statusBar->showMessage("Xin chào " + QString::fromStdString(usingid)+"!",10000);
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

void MainWindow::on_actTrangthai_triggered()
{
    lichsu=new  lichsumua(this);
    lichsu->show();
}

void MainWindow::on_actDsdon_triggered()
{
    dsdon = new danhsachdon(this);
    dsdon->show();
}

void MainWindow::on_actNhaphang_triggered()
{
    nhap =new nhaphang(this);
    nhap->show();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "taodonhang.h"
#include "adduser.h"
#include "quanlyuser.h"
#include "QMessageBox"
#include "dslkUser.h"
#include "QToolBar"
#include "listdonhang.h"
#include "thongtinkhach.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString title="Phần mềm quản lí bán hàng Lazada";
    this->setWindowTitle(title);
    if (per!="ad")
    {
        ui->actTaouser->setDisabled(true);
        ui->actDsdon->setDisabled(true);
        ui->actBaocao->setDisabled(true);
    }
    ui->statusBar->showMessage("Xin chào " + QString::fromStdString(usingid)+"!",5000);
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

void MainWindow::closeEvent(QCloseEvent *event) //Giải phóng bộ nhớ sau khi đóng chương trình
{
    Q_UNUSED(event);
    urmemfree(lur);
    kmemfree(lkh);
    dmemfree(ldon);
}

void MainWindow::on_actTaoVc_triggered()
{
    avc = new AddVoucher(this);
    avc->show();
}

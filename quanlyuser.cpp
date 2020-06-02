#include "quanlyuser.h"
#include "ui_quanlyuser.h"
#include "QString"
#include "QMessageBox"
#include "dslkUser.h"
#include "thongtinkhach.h"
#include "QProcess"
#include "QApplication"

quanlyuser::quanlyuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::quanlyuser)
{
    ui->setupUi(this);
    QString title="Quản lý User";
    this->setWindowTitle(title);
    node* k = lur.head;
    while (k)
    {
        QString item=QString::fromStdString(k->data.id);// convert std::string to Qstring
        ui->cBxUser->addItem(item);
        k = k->next;
    }
}

quanlyuser::~quanlyuser()
{
    delete ui;
}

void quanlyuser::on_cBxUser_currentIndexChanged(const QString &arg1)//lựa chọn hiện tại
{
    Q_UNUSED(arg1);
    QString chose = ui->cBxUser->currentText();
    chosenone = chose.toStdString();
}

 void quanlyuser::on_btnCPW_pressed()
{
    cpw=new changepw(this);
    cpw->show();
}

void quanlyuser::on_btnCapquyen_pressed()
{
    tdq =new thaydoiquyen(this);
    tdq->setModal(true);
    tdq->exec();
}

void quanlyuser::on_btnDeluser_pressed()
{
    if(chosenone==usingid)
    {
      QMessageBox::warning(this,"Lưu ý!","Tài khoản này đang được sử dụng, yêu cầu đăng nhập lại sau khi thay đổi");
    }
    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn xoá người dùng này?")==QMessageBox::Yes)
    {
        delSlt(lur, chosenone);
        delKSlt(lkh, chosenone);
        ghilistuser(lur);
        ghilistkh(lkh);
        QMessageBox::information(this,"Xác nhận","Người dùng này đã bị xoá");
        if (chosenone==usingid)
        {
            qApp->quit();
            QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
        }
    }
    ui->cBxUser->clear();
    node* k = lur.head;
    while (k)//update danh sach
    {
        QString item=QString::fromStdString(k->data.id);// convert std::string to Qstring
        ui->cBxUser->addItem(item);
        k = k->next;
    }
}


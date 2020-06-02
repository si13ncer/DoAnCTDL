#include "changepw.h"
#include "ui_changepw.h"
#include "QString"
#include "QMessageBox"
#include "dslkUser.h"
#include <QApplication>
#include <QProcess>
changepw::changepw(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::changepw)
{
    ui->setupUi(this);
    QString title="Đổi mật khẩu";
    this->setWindowTitle(title);
    if(chosenone==usingid)
    {
      QMessageBox::warning(this,"Lưu ý!","Tài khoản này đang được sử dụng, yêu cầu đăng nhập lại sau khi thay đổi");
    }
}

changepw::~changepw()
{
    delete ui;
}
void changepw::on_btnShow_pressed()
{
    ui->lEditNP->setEchoMode(QLineEdit::Normal);
}

void changepw::on_btnShow_released()
{
    ui->lEditNP->setEchoMode(QLineEdit::Password);
}

/*void changepw::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
    {
        event->ignore();
    }
}*/
void changepw::on_btnHuy_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

/*void changepw::on_btnHuy_pressed()
{
    QMessageBox msgBox(QMessageBox::Question,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát????",QMessageBox::Yes|QMessageBox::No);
    msgBox.setButtonText(QMessageBox::Yes,"Đồng ý");
    msgBox.setButtonText(QMessageBox::No,"Huỷ");
    msgBox.setModal(false);
    if (msgBox.exec()==QMessageBox::Yes)
    {
    msgBox.close();
    }//========Tuỳ biến nút thất bại===========
}*/


void changepw::on_btnLuu_clicked()
{
    QString npw = ui->lEditNP->text();
    if (npw.length()<=0)
    {
        ui->statusbar->showMessage("Password không được để trống");
        return;
    }
    for (int i =0;i<npw.size();i++)
    {
        if (!npw[i].isDigit() && !npw[i].isLetter())
       {
            ui->statusbar->showMessage("Password không hợp lệ! Chỉ được dùng chữ và số");
            return;
        }
    }
    std::string npwstd = npw.toStdString();
    node* k = lur.head;
        while (k)
        {
            if (k->data.id == chosenone)
            {
                k->data.pw=npwstd;
            }
            k = k->next;
        }
    ghilistuser(lur);
    QMessageBox::information(this,"Xác nhận","Mật khẩu đã được thay đổi");
    if (chosenone==usingid)
    {
        qApp->quit();
        QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
    }
    this->close();
}

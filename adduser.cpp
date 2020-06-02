#include "adduser.h"
#include "ui_adduser.h"
#include "QString"
#include "QMessageBox"
#include "QCloseEvent"
#include <string>
#include "dslkUser.h"

adduser::adduser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);
    QString title="Thêm người dùng";
    this->setWindowTitle(title);
}

adduser::~adduser()
{
    delete ui;
}

void adduser::on_btnShow_pressed()
{
    ui->leditNPW->setEchoMode(QLineEdit::Normal);
}

void adduser::on_btnShow_released()
{
    ui->leditNPW->setEchoMode(QLineEdit::Password);
}

void adduser::on_btnHuy_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}
/*void adduser::closeEvent(QCloseEvent *event)
{
   if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
   {
    event->ignore();
   }
}========Trùng===============
*/
void adduser::on_btnLuu_clicked()
{
    QString nid = ui->leditNID->text();
    std::string nidstd = nid.toStdString();
    if (nid.length()<=0)
    {
        ui->statusbar->showMessage("Username không được để trống");
        return;
    }
    for (int i =0;i<nid.size();i++)//kiểm tra đầu vào id
    {
        if (!nid[i].isDigit() && !nid[i].isLetter())
       {
            ui->statusbar->showMessage("Username không hợp lệ! Chỉ được dùng chữ và số");
            return;
        }
    }
    if (avaiable(lur,nidstd)==false)
    {
        ui->statusbar->showMessage("Username đã tồn tại!");
        return;
    }
    QString npw = ui->leditNPW->text();
    std::string npwstd = npw.toStdString();
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
    std::string pm;
    if (ui->btnAD->isChecked())
    {
        pm="ad";
    }
    else if (ui->btnKH->isChecked())
    {
        pm="kh";
    }
    else
    {
        ui->statusbar->showMessage("Người dùng chưa được cấp quyền!");
        return;
    }
    user u;
    u.id=nidstd;
    u.pw=npwstd;
    u.pm=pm;
    node* n = nodeinit(u);
    addTail(lur, n);
    ghilistuser(lur);
    ui->statusbar->showMessage("Lưu thành công!");
    if(QMessageBox::question(this,"Thông báo","Dữ liệu đã được lưu, bạn có muốn thêm người dùng khác?")==QMessageBox::Yes)
    {
        foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())//clear data form
        {
            widget->clear();
            ui->statusbar->clearMessage();
        }
    }
    else this->close();
}

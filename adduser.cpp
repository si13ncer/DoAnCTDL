#include "adduser.h"
#include "ui_adduser.h"
#include "QString"
#include "QMessageBox"
#include "QCloseEvent"
#include <QFile>
#include "QTextStream"
#include <cctype>
#include <cstring>
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



void adduser::on_btnHuy_pressed()
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


void adduser::on_btnLuu_clicked() //Lưu vào file
{

    QFile file("E:/Source Code/DoAn/DoAnCTDL/data/user.txt");
    if (!file.open(QFile::Append|QFile::Text))
    {
        ui->statusbar->showMessage("Không thể truy cập file!");
    }
    QTextStream out(&file);
    ui->statusbar->clearMessage();
    bool legal=true; //kiểm tra dữ liệu hợp lệ
    QString nid = ui->leditNID->text();
    QString npw = ui->leditNPW->text();
    //kiểm tra đầu vào id pw
    for (int i =0;i<nid.size();i++)
    {
        if (!nid[i].isDigit() && !nid[i].isLetter())
       {
            legal=false;
            ui->statusbar->showMessage("Username không hợp lệ! Chỉ được dùng chữ và số.");
        }
    }
    for (int i =0;i<npw.size();i++)
    {
        if (!npw[i].isDigit() && !npw[i].isLetter())
       {
            legal=false;
            ui->statusbar->showMessage("Password không hợp lệ! Chỉ được dùng chữ và số.");
        }
    }
    if (legal==true)
    {
        if (ui->btnAD->isChecked())
        {
            out <<nid<<","<<npw<<","<< 0 <<endl;
        }
        else if (ui->btnRW->isChecked())
        {
            out <<nid<<","<<npw<<","<< 1 <<endl;
        }
        else if (ui->btnRO->isChecked())
        {
            out <<nid<<","<<npw<<","<< 2 <<endl;
        }
        else
        {
            ui->statusbar->showMessage("Người dùng chưa được cấp quyền!");
            legal=false;
        }
    }
    if (legal==true)
    {
        ui->statusbar->showMessage("Lưu thành công!");
        file.flush();
        file.close();
        QMessageBox::information(this,"Xác nhận","Dữ liệu đã được lưu");
        this->close();
    }
}

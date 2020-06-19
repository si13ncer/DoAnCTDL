#include "thongtin.h"
#include "ui_thongtin.h"
#include "dslkUser.h"
#include "thongtinkhach.h"
#include <QMessageBox>
#include "QProcess"

thongtin::thongtin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::thongtin)
{
    ui->setupUi(this);
    QString title = "Thông tin cá nhân";
    this->setWindowTitle(title);
    nodek* n = lkh.head;
    while (n)
    {
        if (n->data.id==usingid)
        {
           ui->leditName->setText(QString::fromStdString(n->data.ten));
           ui->leditAdress->setText(QString::fromStdString(n->data.addr));
           ui->leditPhone->setText(QString::fromStdString(n->data.phone));
           break;
        }
        n = n->next;
    }
    if(chosenone==usingid)
    {
      QMessageBox::warning(this,"Lưu ý!","Tài khoản này đang được sử dụng, yêu cầu đăng nhập lại sau khi thay đổi");
    }
}

thongtin::~thongtin()
{
    delete ui;
}

void thongtin::on_btnLuu_clicked()
{
    QString name=ui->leditName->text();
        if (name.length()<=0)
            {
                ui->statusbar->showMessage("Tên khách hàng trống!");
                return;
            }
            for (int i =0;i<name.size();i++)
            {
                if (name[i].isNumber()) // Chỉ check số vì dấu cũng là kí tự đặc biệt
               {
                    ui->statusbar->showMessage("Tên không hợp lệ! Không được dùng số");
                    return;
               }
            }
        QString addr=ui->leditAdress->text();
        if (addr.length()<=0)
            {
                ui->statusbar->showMessage("Địa chỉ trống!");
                return;
            }
        QString phone=ui->leditPhone->text();
        if (phone.length()<=0)
            {
                ui->statusbar->showMessage("Số điện thoại trống!");
                return;
            }
        for (int i =0;i<phone.size();i++)
        {
            if (!phone[i].isNumber())
           {
                ui->statusbar->showMessage("SĐT không hợp lệ!");
                return;
           }
        }
        std::string names = name.toStdString();
        std::string addrs = addr.toStdString();
        std::string phones = phone.toStdString();
        if (avaiableK(lkh,usingid)==false)// nếu chưa có - thêm vào đuôi; nếu đã có - cập nhật
        {
            nodek* n = lkh.head;
            while (n)
            {
                if (n->data.id==usingid)
                {
                   n->data.ten=names;
                   n->data.addr=addrs;
                   n->data.phone=phones;
                   break;
                }
                n = n->next;
            }
        }
        else
        {
            kh k;
            k.id=usingid;
            k.ten=names;
            k.addr=addrs;
            k.phone=phones;
            nodek* n = nkinit(k);
            addTailk(lkh, n);
        }
        if(QMessageBox::question(this,"Xác nhận","Cập nhật lại thông tin ?")==QMessageBox::Yes)
        {
            ghilistkh(lkh);
        }
        QMessageBox::information(this,"Xác nhận","Thông tin đã được lưu lại");
        if (chosenone==usingid)
        {
            qApp->quit();
            QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
        }
        this->close();
}

void thongtin::on_btnHuy_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

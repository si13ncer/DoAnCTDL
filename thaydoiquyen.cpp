#include "thaydoiquyen.h"
#include "ui_thaydoiquyen.h"
#include "QString"
#include "QMessageBox"
#include "dslkUser.h"
#include "QProcess"
#include "QApplication"

thaydoiquyen::thaydoiquyen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thaydoiquyen)
{
    ui->setupUi(this);
    QString title="Thay đổi quyền truy cập";
    this->setWindowTitle(title);
    if(chosenone==usingid)
    {
      QMessageBox::warning(this,"Lưu ý!","Tài khoản này đang được sử dụng, yêu cầu đăng nhập lại sau khi thay đổi");
    }
    node* k = lur.head;
        while (k)
        {
            if (k->data.id == chosenone)
            {
                if (k->data.pm =="ad")
                    ui->btnAD->setChecked(1);
                else ui->btnKH->setChecked(1);
                break;
            }
            k = k->next;
        }
}

thaydoiquyen::~thaydoiquyen()
{
    delete ui;
}

void thaydoiquyen::on_btnHuy_pressed()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        close();
    }
}

/*void thaydoiquyen::closeEvent(QCloseEvent *event)
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
    {
        event->ignore();
    }

}*/

void thaydoiquyen::on_btnLuu_clicked()
{
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
        QMessageBox::critical(this,"Lỗi!","Chưa cấp quyền truy cập cho người dùng");
        return;
    }
    node* k = lur.head;
        while (k)
        {
            if (k->data.id == chosenone)
            {
                k->data.pm=pm;
            }
            k = k->next;
        }
    ghilistuser(lur);
    QMessageBox::information(this,"Xác nhận","Thay đổi quyển truy cập thành công!");
    if (chosenone==usingid)
    {
        qApp->quit();
        QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
    }
    this->close();
}

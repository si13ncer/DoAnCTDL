#include "login.h"
#include "ui_login.h"
#include "QString"
#include "mainwindow.h"
#include "dslkUser.h"

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
    QString id = ui->leditID->text();
    QString pw = ui->leditPW->text();
    //kiểm tra đầu vào id pw
    if (id.length()<=0||pw.length()<=0)
    {
        ui->statusbar->showMessage("Không được bỏ trống Username và Password");
        return;
    }
    for (int i =0;i<id.size();i++)
    {
        if (!id[i].isDigit() && !id[i].isLetter())
       {
            ui->statusbar->showMessage("Username không hợp lệ! Chỉ được dùng chữ và số");
            return;
       }
    }
    for (int i =0;i<pw.size();i++)
    {
        if (!pw[i].isDigit() && !pw[i].isLetter())
       {
            ui->statusbar->showMessage("Password không hợp lệ! Chỉ được dùng chữ và số");
            return;
       }
    }
    std::string idstd = id.toStdString();//convert Qstring to std::string
    std::string pwstd = pw.toStdString();

//    qDebug() << QString::fromStdString(idstd);// debug std::string
//    qDebug() << QString::fromStdString(pwstd);
    if (auth(lur, idstd, pwstd)==true)
    {
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();
    }
    else ui->statusbar->showMessage("Username hoặc mật khẩu không đúng");
}

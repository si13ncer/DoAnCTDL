#include "mainwindow.h"
#include "login.h"
#include "adduser.h"
#include "changepw.h"
#include "quanlyuser.h"
#include "thaydoiquyen.h"
#include "taodonhang.h"
#include <QApplication>
#include "fstream"
#include "dslkUser.h"
#include "thongtinkhach.h"


    ::list lur;
    ::listk lkh;
    std::string per;
    std::string chosenone;
    std::string usingid;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login log;
    init(lur);//khởi tạo dslk
    std::ifstream ufilein;
    ufilein.open("E:/Source Code/DoAn/DoAnCTDL/data/user.txt", std::ios::in);
    readlist(ufilein, lur);//đọc file và thêm vào lur
    lkinit(lkh);
    ifstream kfilein;
    kfilein.open("E:/Source Code/DoAn/DoAnCTDL/data/thongtinkhach.txt", ios::in);
    readlk(kfilein, lkh);// đọc và thêm vào dslk
    log.show();
    return a.exec();
}

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
#include "listdonhang.h"
#include "AddVoucher.h"
#include "voucher.h"
#include "dslkKho.h"

    ::list lur;
    listk lkh;
    std::string per;
    std::string chosenone;
    std::string usingid;
    listkho lkho;
    listdon ldon;
    ::listvc lvc;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login log;
    init(lur);//khởi tạo dslk
    std::ifstream ufilein;
    ufilein.open("data/user.txt", std::ios::in);
    readlist(ufilein, lur);//đọc file và thêm vào lur
    log.show();
    lkinit(lkh);
    ifstream khfilein;
    khfilein.open("data/thongtinkhach.txt", ios::in);
    readlk(khfilein, lkh);// đọc và thêm vào lk
    listdoninit(ldon);
    ifstream dfilein;
    dfilein.open("data/dsdon.txt", ios::in);
    readlistdon(dfilein,ldon);
    khoitaokho(lkho);
    ifstream khofilein;
    khofilein.open("data/khohang.txt",ios::in);
    dockhohang(khofilein,lkho);
    ifstream vfilein;
    vfilein.open("data/voucher.txt",ios::in);
    readlistvc(vfilein,lvc);
    ufilein.close();
    khfilein.close();
    dfilein.close();
    khofilein.close();
    return a.exec();
}

#include "mainwindow.h"
#include "login.h"
#include "adduser.h"
#include "changepw.h"
#include "quanlyuser.h"
#include "thaydoiquyen.h"
#include "taodonhang.h"
#include <QApplication>
#include "dsdon.h"
#include "thongtindon.h"
#include "kiemtrathongtin.h"
#include "khohang.h"
#include "nhapkho.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login l;
    quanlyuser q;
    adduser ad;
    taodonhang tdh;

    dsdon ds;
    thongtindon tt;
    kiemtrathongtin kt;
    khohang kho;
    nhapkho nhap;
    //kho.show();
    //nhap.show();
    //ds.show();
    //tt.show();
    //kt.show();
    //tdh.show();
    //ad.show();
    l.show();
    return a.exec();

}

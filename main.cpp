#include "mainwindow.h"
#include "login.h"
#include "adduser.h"
#include "changepw.h"
#include "quanlyuser.h"
#include "thaydoiquyen.h"
#include "taodonhang.h"
#include "nhapkho.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login l;
    quanlyuser q;
    adduser ad;
    taodonhang tdh;
    nhapkho nk;
    xuatkho xk;
    //tdh.show();
    //ad.show();
    l.show();
    return a.exec();
}

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "taodonhang.h"
#include "adduser.h"
#include "quanlyuser.h"
#include <QMainWindow>
#include "lichsumua.h"
#include "danhsachdon.h"
#include "nhaphang.h"
#include "AddVoucher.h"
#include "khohang.h"
#include "qlvoucher.h"
#include "thongkedon.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actTaodon_triggered();

    void on_actTaouser_triggered();

    void on_actQliUser_triggered();

    void on_actTrangthai_triggered();

    void on_actDsdon_triggered();

    void on_actNhaphang_triggered();

    void closeEvent(QCloseEvent *event);

    void on_actTaoVc_triggered();

    void on_actDanhmuc_triggered();

    void on_actQliVc_triggered();

    void on_actionDoanh_thu_triggered();

    void on_btnload_clicked();

    void on_cbxplh_currentIndexChanged(const QString &arg1);



private:
    Ui::MainWindow *ui;
    taodonhang *tdh;
    adduser *ausr;
    quanlyuser *qlusr;
    lichsumua *lichsu;
    danhsachdon *dsdon;
    nhaphang *nhap;
    AddVoucher *avc;
    khohang *kho;
    qlvoucher *qlvc;
    thongkedon *thongke;
};
#endif // MAINWINDOW_H

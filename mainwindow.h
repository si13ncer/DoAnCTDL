#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "taodonhang.h"
#include "adduser.h"
#include "quanlyuser.h"
#include <QMainWindow>
#include "nhapkho.h"
#include "khohang.h"

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

    void on_actNhapkho_triggered();

    void on_actKhohang_triggered();

private:
    Ui::MainWindow *ui;
    taodonhang *tdh;
    adduser *ausr;
    quanlyuser *qlusr;
    nhapkho *nk;
    khohang *kho;
};
#endif // MAINWINDOW_H

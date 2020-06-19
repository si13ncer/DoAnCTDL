#ifndef QUANLYVOUCHER_H
#define QUANLYVOUCHER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QuanlyVoucher; }
QT_END_NAMESPACE

class QuanlyVoucher : public QMainWindow
{
    Q_OBJECT

public:
    QuanlyVoucher(QWidget *parent = nullptr);
    ~QuanlyVoucher();

private slots:
    void on_btnThoat_clicked();

    void on_btnLuu_clicked();

    void on_btnList_clicked();

    void on_btnXoa_clicked();

    void on_btnTimkiem_clicked();

private:
    Ui::QuanlyVoucher *ui;
};
#endif // QUANLYVOUCHER_H

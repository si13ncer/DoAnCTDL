#ifndef TAODONHANG_H
#define TAODONHANG_H

#include <QMainWindow>
#include "QCloseEvent"
#include "SpbTable.h"
#include "QTableWidgetItem"


namespace Ui {
class taodonhang;
}

class taodonhang : public QMainWindow
{
    Q_OBJECT

public:
    explicit taodonhang(QWidget *parent = nullptr);
    ~taodonhang();


private slots:
//protected:
//   void closeEvent(QCloseEvent *event);
    void on_btnHuy_clicked();

    void on_btnLuu_clicked();

    void on_tblGiohang_itemChanged(QTableWidgetItem *item);

    void on_btnThemvaogio_clicked();

    void on_btnXoakhoigio_clicked();

    void on_spbSoluong_valueChanged(int arg1);

    void on_cbxTenhang_currentTextChanged(const QString &arg1);

    void on_cbxVoucher_activated(const QString &arg1);

    void on_cbxLoai_activated(int index);

    void on_cbxDanhmuc_activated(const QString &arg1);

    void on_cbxTenhang_activated(const QString &arg1);

    void on_tblGiohang_itemClicked(QTableWidgetItem *item);

private:
    Ui::taodonhang *ui;
};

#endif // TAODONHANG_H

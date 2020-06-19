#ifndef QLVOUCHER_H
#define QLVOUCHER_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <QString>
#include <voucher.h>
QT_BEGIN_NAMESPACE
namespace Ui { class qlvoucher; }
QT_END_NAMESPACE

class qlvoucher : public QMainWindow
{
    Q_OBJECT

public:
    qlvoucher(QWidget *parent = nullptr);
    ~qlvoucher();

private slots:
    void on_btnTrolai_clicked();

    //void on_btnChinhsua_clicked();

    //void on_tableWidgetQLVC_cellActivated(int row, int column);

    void on_btnlvc_clicked();

    //void on_tableWidgetQLVC_cellClicked(int row, int column);

    //void on_tableWidgetQLVC_cellActivated(int row, int column);

    void on_btnXoa_clicked();
    void on_btnFind_clicked();
    void on_btnLuu_clicked();



//    void on_tableWidgetQLVC_cellChanged(int row, int column);

//    void on_tableWidgetQLVC_cellClicked(int row, int column);

    void on_pushButton_clicked();

private:
    Ui::qlvoucher *ui;
};
#endif // QLVOUCHER_H

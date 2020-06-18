#ifndef KHOHANG_H
#define KHOHANG_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <QString>
#include <dslkKho.h>
using namespace std;
namespace Ui {
class khohang;
}

class khohang : public QMainWindow
{
    Q_OBJECT

public:
    explicit khohang(QWidget *parent = nullptr);
    ~khohang();


private slots:
    void on_cbxplh_currentIndexChanged(const QString &arg1);

    void on_btnload_clicked();

    void on_btnexit_clicked();

    void on_btnxoa_clicked();

    void on_btnchange_clicked();

    void on_btnsearch_clicked();

    void on_btnEditsl_clicked();


    void on_btnsapxep_clicked();

private:
    Ui::khohang *ui;
};

#endif // KHOHANG_H

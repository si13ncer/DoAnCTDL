#ifndef DANHSACHDON_H
#define DANHSACHDON_H

#include <QMainWindow>
#include "cbxitemdelegate.h"
#include "listdonhang.h"

namespace Ui {
class danhsachdon;
}

class danhsachdon : public QMainWindow
{
    Q_OBJECT

public:
    explicit danhsachdon(QWidget *parent = nullptr);
    ~danhsachdon();

private slots:
    void on_btnThoat_clicked();

    void on_tblDsdon_cellClicked(int row, int column);

    void on_cbxID_activated(const QString &arg1);

    void on_btnRefresh_clicked();

    void on_btnFind_clicked();

    void on_bntLuu_clicked();

    void on_tblDsdon_cellChanged(int row, int column);

    void on_btnNew_clicked();

    void on_btnOld_clicked();

    void on_btnDel_clicked();

private:
    Ui::danhsachdon *ui;
};

#endif // DANHSACHDON_H

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

//    void on_cbxID_activated(const QString &arg1);

//    void on_cbxID_currentTextChanged(const QString &arg1);

private:
    Ui::danhsachdon *ui;
};

#endif // DANHSACHDON_H

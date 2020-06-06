#ifndef DANHSACHDON_H
#define DANHSACHDON_H

#include <QMainWindow>
#include "cbxitemdelegate.h"

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

private:
    Ui::danhsachdon *ui;
};

#endif // DANHSACHDON_H

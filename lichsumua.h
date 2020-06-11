#ifndef LICHSUMUA_H
#define LICHSUMUA_H

#include <QDialog>
#include "cbxitemdelegate.h"
namespace Ui {
class lichsumua;
}

class lichsumua : public QDialog
{
    Q_OBJECT

public:
    explicit lichsumua(QWidget *parent = nullptr);
    ~lichsumua();

private slots:

    void on_tblLichsudon_cellChanged(int row, int column);

    void on_btnThoat_clicked();

    void on_btnLuu_clicked();

private:
    Ui::lichsumua *ui;
};

#endif // LICHSUMUA_H

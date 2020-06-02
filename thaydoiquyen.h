#ifndef THAYDOIQUYEN_H
#define THAYDOIQUYEN_H

#include <QDialog>
#include "QCloseEvent"

namespace Ui {
class thaydoiquyen;
}

class thaydoiquyen : public QDialog
{
    Q_OBJECT

public:
    explicit thaydoiquyen(QWidget *parent = nullptr);
    ~thaydoiquyen();

private slots:
    void on_btnHuy_pressed();
//protected:
//    void closeEvent(QCloseEvent *event);
    void on_btnLuu_clicked();

private:
    Ui::thaydoiquyen *ui;
};

#endif // THAYDOIQUYEN_H

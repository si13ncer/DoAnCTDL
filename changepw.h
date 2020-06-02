#ifndef CHANGEPW_H
#define CHANGEPW_H

#include <QMainWindow>
#include "QCloseEvent"

namespace Ui {
class changepw;
}

class changepw : public QMainWindow
{
    Q_OBJECT

public:
    explicit changepw(QWidget *parent = nullptr);
    ~changepw();

private slots:

    void on_btnShow_pressed();

    void on_btnShow_released();

    void on_btnHuy_pressed();

    void on_btnLuu_clicked();

    //protected:
    //    void closeEvent(QCloseEvent *event);

private:
    Ui::changepw *ui;
};

#endif // CHANGEPW_H

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
    void on_btnHuy_pressed();
//protected:
//    void closeEvent(QCloseEvent *event);
private:
    Ui::changepw *ui;
};

#endif // CHANGEPW_H

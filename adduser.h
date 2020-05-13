#ifndef ADDUSER_H
#define ADDUSER_H

#include <QMainWindow>
#include "QCloseEvent"


namespace Ui {
class adduser;
}

class adduser : public QMainWindow
{
    Q_OBJECT

public:
    explicit adduser(QWidget *parent = nullptr);
    ~adduser();

private slots:
    void on_btnHuy_pressed();
//protected:
//    void closeEvent(QCloseEvent *event);
    void on_btnLuu_clicked();

private:
    Ui::adduser *ui;
};

#endif // ADDUSER_H

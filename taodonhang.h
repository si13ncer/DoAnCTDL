#ifndef TAODONHANG_H
#define TAODONHANG_H

#include <QMainWindow>
#include "QCloseEvent"

namespace Ui {
class taodonhang;
}

class taodonhang : public QMainWindow
{
    Q_OBJECT

public:
    explicit taodonhang(QWidget *parent = nullptr);
    ~taodonhang();


private slots:
    void on_btnHuy_pressed();

//protected:
//   void closeEvent(QCloseEvent *event);
private:
    Ui::taodonhang *ui;
};

#endif // TAODONHANG_H

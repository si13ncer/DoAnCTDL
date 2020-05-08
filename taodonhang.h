#ifndef TAODONHANG_H
#define TAODONHANG_H

#include <QMainWindow>

namespace Ui {
class taodonhang;
}

class taodonhang : public QMainWindow
{
    Q_OBJECT

public:
    explicit taodonhang(QWidget *parent = nullptr);
    ~taodonhang();


private:
    Ui::taodonhang *ui;
};

#endif // TAODONHANG_H

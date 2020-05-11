#ifndef KHOHANG_H
#define KHOHANG_H

#include <QMainWindow>

namespace Ui {
class khohang;
}

class khohang : public QMainWindow
{
    Q_OBJECT

public:
    explicit khohang(QWidget *parent = nullptr);
    ~khohang();

private:
    Ui::khohang *ui;
};

#endif // KHOHANG_H

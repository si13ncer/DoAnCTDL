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


private slots:
    void on_cbxplh_currentIndexChanged(const QString &arg1);

private:
    Ui::khohang *ui;
};

#endif // KHOHANG_H

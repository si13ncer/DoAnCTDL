#ifndef THONGTIN_H
#define THONGTIN_H

#include <QMainWindow>

namespace Ui {
class thongtin;
}

class thongtin : public QMainWindow
{
    Q_OBJECT

public:
    explicit thongtin(QWidget *parent = nullptr);
    ~thongtin();

private slots:
    void on_btnLuu_clicked();

    void on_btnHuy_clicked();

private:
    Ui::thongtin *ui;
};

#endif // THONGTIN_H

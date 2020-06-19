#ifndef THONGKEDON_H
#define THONGKEDON_H

#include <QMainWindow>

namespace Ui {
class thongkedon;
}

class thongkedon : public QMainWindow
{
    Q_OBJECT

public:
    explicit thongkedon(QWidget *parent = nullptr);
    ~thongkedon();

private slots:
    void on_spbThang_valueChanged(int arg1);

private:
    Ui::thongkedon *ui;
};

#endif // THONGKEDON_H

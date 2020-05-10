#ifndef NHAPKHO_H
#define NHAPKHO_H

#include <QMainWindow>

namespace Ui {
class nhapkho;
}

class nhapkho : public QMainWindow
{
    Q_OBJECT

public:
    explicit nhapkho(QWidget *parent = nullptr);
    ~nhapkho();

private:
    Ui::nhapkho *ui;
};

#endif // NHAPKHO_H

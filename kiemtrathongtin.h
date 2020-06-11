#ifndef KIEMTRATHONGTIN_H
#define KIEMTRATHONGTIN_H

#include <QDialog>

namespace Ui {
class kiemtrathongtin;
}

class kiemtrathongtin : public QDialog
{
    Q_OBJECT

public:
    explicit kiemtrathongtin(QWidget *parent = nullptr);
    ~kiemtrathongtin();

private:
    Ui::kiemtrathongtin *ui;
};

#endif // KIEMTRATHONGTIN_H

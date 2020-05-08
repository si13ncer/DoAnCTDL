#ifndef THAYDOIQUYEN_H
#define THAYDOIQUYEN_H

#include <QDialog>

namespace Ui {
class thaydoiquyen;
}

class thaydoiquyen : public QDialog
{
    Q_OBJECT

public:
    explicit thaydoiquyen(QWidget *parent = nullptr);
    ~thaydoiquyen();

private:
    Ui::thaydoiquyen *ui;
};

#endif // THAYDOIQUYEN_H

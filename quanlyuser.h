#ifndef QUANLYUSER_H
#define QUANLYUSER_H

#include <QDialog>

namespace Ui {
class quanlyuser;
}

class quanlyuser : public QDialog
{
    Q_OBJECT

public:
    explicit quanlyuser(QWidget *parent = nullptr);
    ~quanlyuser();

private:
    Ui::quanlyuser *ui;
};

#endif // QUANLYUSER_H

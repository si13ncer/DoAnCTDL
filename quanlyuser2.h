#ifndef QUANLYUSER2_H
#define QUANLYUSER2_H

#include <QDialog>

namespace Ui {
class quanlyuser2;
}

class quanlyuser2 : public QDialog
{
    Q_OBJECT

public:
    explicit quanlyuser2(QWidget *parent = nullptr);
    ~quanlyuser2();

private:
    Ui::quanlyuser2 *ui;
};

#endif // QUANLYUSER2_H

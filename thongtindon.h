#ifndef THONGTINDON_H
#define THONGTINDON_H

#include <QDialog>

namespace Ui {
class thongtindon;
}

class thongtindon : public QDialog
{
    Q_OBJECT

public:
    explicit thongtindon(QWidget *parent = nullptr);
    ~thongtindon();

private:
    Ui::thongtindon *ui;
};

#endif // THONGTINDON_H

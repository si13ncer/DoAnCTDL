#ifndef DSDON_H
#define DSDON_H

#include <QDialog>

namespace Ui {
class dsdon;
}

class dsdon : public QDialog
{
    Q_OBJECT

public:
    explicit dsdon(QWidget *parent = nullptr);
    ~dsdon();

private:
    Ui::dsdon *ui;
};

#endif // DSDON_H

#ifndef ADDUSER_H
#define ADDUSER_H

#include <QMainWindow>

namespace Ui {
class adduser;
}

class adduser : public QMainWindow
{
    Q_OBJECT

public:
    explicit adduser(QWidget *parent = nullptr);
    ~adduser();

private:
    Ui::adduser *ui;
};

#endif // ADDUSER_H

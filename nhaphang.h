#ifndef NHAPHANG_H
#define NHAPHANG_H

#include <QMainWindow>


namespace Ui {
class nhaphang;
}

class nhaphang : public QMainWindow
{
    Q_OBJECT

public:
    explicit nhaphang(QWidget *parent = nullptr);
    ~nhaphang();

private slots:

    void on_btnHuy_clicked();

    void on_cbxLoaihang_currentIndexChanged(const QString &arg1);

    void on_btnLuu_clicked();



private:
    Ui::nhaphang *ui;
};

#endif // NHAPHANG_H

#ifndef THONGTINKIEMTRASANPHAMDONHANG_H
#define THONGTINKIEMTRASANPHAMDONHANG_H

#include <QDialog>

namespace Ui {
class thongtinkiemtrasanphamdonhang;
}

class thongtinkiemtrasanphamdonhang : public QDialog
{
    Q_OBJECT

public:
    explicit thongtinkiemtrasanphamdonhang(QWidget *parent = nullptr);
    ~thongtinkiemtrasanphamdonhang();

private:
    Ui::thongtinkiemtrasanphamdonhang *ui;
};

#endif // THONGTINKIEMTRASANPHAMDONHANG_H

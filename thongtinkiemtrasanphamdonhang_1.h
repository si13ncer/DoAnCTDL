#ifndef THONGTINKIEMTRASANPHAMDONHANG_1_H
#define THONGTINKIEMTRASANPHAMDONHANG_1_H

#include <QDialog>

namespace Ui {
class thongtinkiemtrasanphamdonhang_1;
}

class thongtinkiemtrasanphamdonhang_1 : public QDialog
{
    Q_OBJECT

public:
    explicit thongtinkiemtrasanphamdonhang_1(QWidget *parent = nullptr);
    ~thongtinkiemtrasanphamdonhang_1();

private:
    Ui::thongtinkiemtrasanphamdonhang_1 *ui;
};

#endif // THONGTINKIEMTRASANPHAMDONHANG_1_H

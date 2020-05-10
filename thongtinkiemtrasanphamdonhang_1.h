#ifndef THONGTINKIEMTRASANPHAMDONHANG_1_H
#define THONGTINKIEMTRASANPHAMDONHANG_1_H

#include <QDialog>

namespace Ui {
class ThongTinKiemTraSanPhamDonHang_1;
}

class ThongTinKiemTraSanPhamDonHang_1 : public QDialog
{
    Q_OBJECT

public:
    explicit ThongTinKiemTraSanPhamDonHang_1(QWidget *parent = nullptr);
    ~ThongTinKiemTraSanPhamDonHang_1();

private:
    Ui::ThongTinKiemTraSanPhamDonHang_1 *ui;
};

#endif // THONGTINKIEMTRASANPHAMDONHANG_1_H

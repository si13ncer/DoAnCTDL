#ifndef THONGTINKIEMTRADONHANG_2_H
#define THONGTINKIEMTRADONHANG_2_H

#include <QDialog>

namespace Ui {
class ThongTinKiemTraDonHang_2;
}

class ThongTinKiemTraDonHang_2 : public QDialog
{
    Q_OBJECT

public:
    explicit ThongTinKiemTraDonHang_2(QWidget *parent = nullptr);
    ~ThongTinKiemTraDonHang_2();

private:
    Ui::ThongTinKiemTraDonHang_2 *ui;
};

#endif // THONGTINKIEMTRADONHANG_2_H

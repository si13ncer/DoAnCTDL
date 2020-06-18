#ifndef ADDVOUCHER_H
#define ADDVOUCHER_H

#include <QMainWindow>
#include "QCloseEvent"

QT_BEGIN_NAMESPACE
namespace Ui { class AddVoucher; }
QT_END_NAMESPACE

class AddVoucher : public QMainWindow
{
    Q_OBJECT

public:
    AddVoucher(QWidget *parent = nullptr);
    ~AddVoucher();

private slots:

   void on_btnHuy_clicked();

   void on_btnLuu_clicked();

  // void on_dateEditTimefrom_userDateChanged(const QDate &date);

   //void on_LineEditGiatri_cursorPositionChanged(int arg1, int arg2);

   \

private:
    Ui::AddVoucher *ui;
};
#endif // ADDVOUCHER_H

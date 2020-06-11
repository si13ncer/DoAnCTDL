#include "danhsachdon.h"
#include "ui_danhsachdon.h"
#include "QMessageBox"
#include "thongtinkhach.h"
#include "dslkUser.h"
#include <QDebug>
danhsachdon::danhsachdon(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::danhsachdon)
{
    ui->setupUi(this);
    QString title= "Danh sách đơn hàng";
    this->setWindowTitle(title);
    ui->tblDsdon->setItemDelegateForColumn(2,new ComboBoxItemDelegate);
    nodedon* k = ldon.head;
    while (k)
    {
        QString pref=QString::fromStdString(k->data.ma.pref);
        QString stt=QString::number(k->data.ma.stt);
        QString ngay = QString::number(k->data.ngaytao.ngay); //QString from int
        QString thang = QString::number(k->data.ngaytao.thang);
        QString nam = QString::number(k->data.ngaytao.nam);
        QString date=ngay+"/"+thang+"/"+nam;
        QString trangthai=QString::fromStdString(k->data.trangthai);
        QString ghichu=QString::fromStdString(k->data.ghichu);
        ui->tblDsdon->insertRow(ui->tblDsdon->rowCount());
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 0, new QTableWidgetItem(pref+"-"+stt));
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 1, new QTableWidgetItem(date));
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 2, new QTableWidgetItem(trangthai));
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 3, new QTableWidgetItem(ghichu));
        k=k->next;
    }
    node* u = lur.head;
    while (u)
    {
        QString item=QString::fromStdString(u->data.id);// convert std::string to Qstring
        ui->cbxID->addItem(item);
        u = u->next;
    }
}

danhsachdon::~danhsachdon()
{
    delete ui;
}

void danhsachdon::on_btnThoat_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

void danhsachdon::on_tblDsdon_cellClicked(int row, int column)
{
    row=ui->tblDsdon->currentRow();
    column=ui->tblDsdon->currentColumn();
    std::string id;
    nodedon* k = ldon.head;
    while (k)
    {
        QString pref=QString::fromStdString(k->data.ma.pref);
        QString stt=QString::number(k->data.ma.stt);
        QString madon=pref+"-"+stt;
        QString match=ui->tblDsdon->item(row,0)->text();//cell of col0 (madon)
        if (madon==match)
        {
            id=k->data.idmua;
            QString danhmuc=QString::fromStdString(k->data.loai);
            QString tenhang=QString::fromStdString(k->data.ten);
            QString mahang=QString::fromStdString(k->data.mahang);
            QString thanhtoan=QString::fromStdString(k->data.thanhtoan);
            QString vanchuyen=QString::fromStdString(k->data.vanchuyen);
            ui->lblTenhang->setText(tenhang);
            ui->lblDanhmuc->setText(danhmuc);
            ui->lblMahang->setText(mahang);
            ui->lblSoluong->setNum(k->data.soluong);
            ui->lblTongtien->setNum(k->data.thanhtien);
            ui->lblThanhToan->setText(thanhtoan);
            ui->lblVanchuyen->setText(vanchuyen);
            break;
        }
        k=k->next;
    }
    nodek* n = lkh.head;
    while (n)
    {
        if (n->data.id==id)
        {
            ui->lblID->setText(QString::fromStdString(id));
            ui->lblTen->setText(QString::fromStdString(n->data.ten));
            ui->lblSdt->setText(QString::fromStdString(n->data.phone));
            ui->leditAdress->setText(QString::fromStdString(n->data.addr));
            break;
        }
        n=n->next;
    }
}

void danhsachdon::on_cbxID_activated(const QString &arg1)
{
    Q_UNUSED(&arg1);
    ui->tblDsdon->setRowCount(0);
    QString chose = ui->cbxID->currentText();
    std::string choses=chose.toStdString();
    nodedon* k = ldon.head;
    while (k)
    {
        if (k->data.idmua==choses)
        {
            QString pref=QString::fromStdString(k->data.ma.pref);
            QString stt=QString::number(k->data.ma.stt);
            QString ngay = QString::number(k->data.ngaytao.ngay); //QString from int
            QString thang = QString::number(k->data.ngaytao.thang);
            QString nam = QString::number(k->data.ngaytao.nam);
            QString date=ngay+"/"+thang+"/"+nam;
            QString trangthai=QString::fromStdString(k->data.trangthai);
            QString ghichu=QString::fromStdString(k->data.ghichu);
            ui->tblDsdon->insertRow(ui->tblDsdon->rowCount());
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 0, new QTableWidgetItem(pref+"-"+stt));
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 1, new QTableWidgetItem(date));
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 2, new QTableWidgetItem(trangthai));
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 3, new QTableWidgetItem(ghichu));
        }
        k=k->next;
    }
}

void danhsachdon::on_btnRefresh_clicked()
{
    ui->tblDsdon->setRowCount(0);
    nodedon* k = ldon.head;
    while (k)
    {
        QString pref=QString::fromStdString(k->data.ma.pref);
        QString stt=QString::number(k->data.ma.stt);
        QString ngay = QString::number(k->data.ngaytao.ngay); //QString from int
        QString thang = QString::number(k->data.ngaytao.thang);
        QString nam = QString::number(k->data.ngaytao.nam);
        QString date=ngay+"/"+thang+"/"+nam;
        QString trangthai=QString::fromStdString(k->data.trangthai);
        QString ghichu=QString::fromStdString(k->data.ghichu);
        ui->tblDsdon->insertRow(ui->tblDsdon->rowCount());
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 0, new QTableWidgetItem(pref+"-"+stt));
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 1, new QTableWidgetItem(date));
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 2, new QTableWidgetItem(trangthai));
        ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 3, new QTableWidgetItem(ghichu));
        k=k->next;
    }
}

void danhsachdon::on_btnFind_clicked()
{
    ui->tblDsdon->setRowCount(0);
    QString find=ui->leditFind->text();
    std::string finds=find.toStdString();
    nodedon* k = ldon.head;
    while (k)
    {
        QString pref=QString::fromStdString(k->data.ma.pref);
        QString stt=QString::number(k->data.ma.stt);
        QString madon=pref+"-"+stt;
        if (madon==find)
        {
            QString pref=QString::fromStdString(k->data.ma.pref);
            QString stt=QString::number(k->data.ma.stt);
            QString ngay = QString::number(k->data.ngaytao.ngay); //QString from int
            QString thang = QString::number(k->data.ngaytao.thang);
            QString nam = QString::number(k->data.ngaytao.nam);
            QString date=ngay+"/"+thang+"/"+nam;
            QString trangthai=QString::fromStdString(k->data.trangthai);
            QString ghichu=QString::fromStdString(k->data.ghichu);
            ui->tblDsdon->insertRow(ui->tblDsdon->rowCount());
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 0, new QTableWidgetItem(pref+"-"+stt));
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 1, new QTableWidgetItem(date));
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 2, new QTableWidgetItem(trangthai));
            ui->tblDsdon->setItem(ui->tblDsdon->rowCount()-1, 3, new QTableWidgetItem(ghichu));
        }
        k=k->next;
    }
}

void danhsachdon::on_tblDsdon_cellChanged(int row, int column)
{
    row=ui->tblDsdon->currentRow();
    column=ui->tblDsdon->currentColumn();
    if (column==2 || column==3)
    {
        std::string trangthai=ui->tblDsdon->item(row,2)->text().toStdString(); //get cell of col2 content
        std::string ghichu=ui->tblDsdon->item(row,3)->text().toStdString(); //get cell of col3 content
        QString match=ui->tblDsdon->item(row,0)->text();//cell of col0 (madon)
        nodedon* k = ldon.head;
        while (k)
        {
            QString pref=QString::fromStdString(k->data.ma.pref);
            QString stt=QString::number(k->data.ma.stt);
            QString madon=pref+"-"+stt;
            if(madon==match)
            {
                k->data.trangthai=trangthai;
                k->data.ghichu=ghichu;
                break;
            }
            k = k->next;
        }
    }
}

void danhsachdon::on_bntLuu_clicked()
{

    if(QMessageBox::question(this,"Thông báo","Các thay đổi sẽ được lưu lại, tiếp tục?")==QMessageBox::Yes)
    {
        ghilistdon(ldon);
        QMessageBox::information(this,"Xác nhận","Lưu thành công!");
        this->close();
    }
}

void danhsachdon::on_btnNew_clicked()
{
    ui->tblDsdon->sortByColumn(0,Qt::AscendingOrder);
}

void danhsachdon::on_btnOld_clicked()
{
    ui->tblDsdon->sortByColumn(0,Qt::DescendingOrder);
}

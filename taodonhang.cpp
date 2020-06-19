#include "taodonhang.h"
#include "ui_taodonhang.h"
#include "QString"
#include "QMessageBox"
#include "QDate"
#include "QDebug"
#include "dslkUser.h"
#include "thongtinkhach.h"
#include "listdonhang.h"
#include "dslkKho.h"
#include "voucher.h"

float km;
QString ngaytao=QDate::currentDate().toString("dd/MM/yyyy");
QString ngay=ngaytao.left(2);
QString thang=ngaytao.mid(3,2);
QString nam=ngaytao.right(4);
QString ngaygiao=QDate::currentDate().addDays(3).toString("dd/MM/yyyy");//3 ngày sau khi đặt hàng

taodonhang::taodonhang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::taodonhang)
{
    ui->setupUi(this);
    QString title="Tạo đơn hàng";
    this->setWindowTitle(title);
    ui->lblID->setText(QString::fromStdString(usingid));
    nodek* n = lkh.head;
    while (n)
    {
        if (n->data.id==usingid)
        {
           ui->lblName->setText(QString::fromStdString(n->data.ten));
           ui->leditAddress->setText(QString::fromStdString(n->data.addr));
           ui->lblPhone->setText(QString::fromStdString(n->data.phone));
           break;
        }

        n = n->next;
    }
    ui->tblGiohang->hideColumn(0);
    ui->tblGiohang->setItemDelegateForColumn(3, new SpinBoxTable);
    ui->lblGiatridon->setStyleSheet("color: green;");
    ui->lblGiatridon->setNum(0);
//    for (int i=0;i< ui->tblGiohang->rowCount();i++) //tắt chỉnh sửa ở cột
//    {
//            QTableWidgetItem *col0 =  ui->tblGiohang->item(i,0);
//            QTableWidgetItem *col1 =  ui->tblGiohang->item(i,1);
//            QTableWidgetItem *col2 =  ui->tblGiohang->item(i,2);
//            QTableWidgetItem *col4 =  ui->tblGiohang->item(i,4);
//            col0->setFlags(col0->flags() & ~Qt::ItemIsEditable);
//            col1->setFlags(col1->flags() & ~Qt::ItemIsEditable);
//            col2->setFlags(col2->flags() & ~Qt::ItemIsEditable);
//            col4->setFlags(col4->flags() & ~Qt::ItemIsEditable);
//    }  
}

taodonhang::~taodonhang()
{
    delete ui;
}
//==========CloseEvent lặp với Btn Huy==========
/*void taodonhang::closeEvent(QCloseEvent *event)
{
  if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::No)
   {
       event->ignore();
   }
}*/

void taodonhang::on_spbSoluong_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    std::string tenhang=ui->cbxTenhang->currentText().toStdString();
    nodehang* k=lkho.pHead;
    while(k)
    {
        if (k->data.name==tenhang)
        {
            ui->spbSoluong->setMaximum(k->data.sl);
            break;
        }
        k=k->pNext;
    }
    if (ui->spbSoluong->value()==ui->spbSoluong->maximum())
    {
        ui->statusbar->showMessage("Xin lỗi,hàng trong kho đã hết",5000);
    }
    QString dg = ui->lblDongia->text();
    int dongia=dg.toInt();
    int Soluong=ui->spbSoluong->value();
    int Tong = Soluong * (dongia-dongia*km);
    ui->lblTong->setNum(Tong);
}

void taodonhang::on_btnThemvaogio_clicked()
{
    int row=ui->tblGiohang->rowCount();
    std::string danhmuc=ui->cbxDanhmuc->currentText().toStdString();
    std::string tenhang=ui->cbxTenhang->currentText().toStdString();
    ui->tblGiohang->insertRow(row);//thêm dòng vào cuối bảng
//    QTableWidgetItem *col1 =  ui->tblGiohang->item(row-1,1);
//    QTableWidgetItem *col2 =  ui->tblGiohang->item(row-1,2);
//    QTableWidgetItem *col4 =  ui->tblGiohang->item(row-1,4);
//    QTableWidgetItem *col5 =  ui->tblGiohang->item(row-1,5);
//    QTableWidgetItem *col6 =  ui->tblGiohang->item(row-1,6);
//    col1->setFlags(col1->flags() & ~Qt::ItemIsEditable);
//    col2->setFlags(col2->flags() & ~Qt::ItemIsEditable);
//    col4->setFlags(col4->flags() & ~Qt::ItemIsEditable);
//    col5->setFlags(col5->flags() & ~Qt::ItemIsEditable);
//    col5->setFlags(col6->flags() & ~Qt::ItemIsEditable);
    for (int i=0;i< ui->tblGiohang->rowCount()-1;i++) //duyệt tên hàng bị trùng
    {
        QString check=ui->tblGiohang->item(i,2)->text();
        if (check==ui->cbxTenhang->currentText())
        {
            ui->statusbar->showMessage("!!! Mặt hàng này bạn đã đặt mua, xin hãy thay đổi ở cột Số Lượng",5000);
            ui->tblGiohang->removeRow(ui->tblGiohang->rowCount()-1);
            return;
        }
    }
    int dongia=ui->lblDongia->text().toInt();
    int soluong=ui->spbSoluong->value();
    int saukm=dongia-dongia*km;
    int tong=ui->lblTong->text().toInt();
    ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 0, new QTableWidgetItem(ui->cbxDanhmuc->currentText()));
    nodehang* n=lkho.pHead;
    while (n)
    {
        if(n->data.name==tenhang)
        {
            ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 1, new QTableWidgetItem(QString::fromStdString(n->data.id)));
            break;
        }
        n=n->pNext;
    }
    ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 2, new QTableWidgetItem(ui->cbxTenhang->currentText()));
    ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 3, new QTableWidgetItem(QString::number(soluong)));
    ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 4, new QTableWidgetItem(QString::number(saukm)));
    ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 5, new QTableWidgetItem(QString::number(tong)));
    ui->tblGiohang->setItem(ui->tblGiohang->rowCount()-1, 6, new QTableWidgetItem("Dự kiến ngày giao: "+ngaygiao));
}

void taodonhang::on_tblGiohang_itemChanged(QTableWidgetItem *item)
{
    Q_UNUSED(item)
    int row=ui->tblGiohang->currentRow();
    int column=ui->tblGiohang->currentColumn();
    if (column==3)
    {
        int sl=ui->tblGiohang->item(row,3)->text().toInt();
        int dongia=ui->tblGiohang->item(row,4)->text().toInt();
        row=ui->tblGiohang->currentRow();
        ui->tblGiohang->item(row,5)->setText(QString::number(sl*dongia)); //Cập nhật giá trị != tạo mới như phần khởi tạo bảng
    }
    int Giatridon=0;
    for (int i=0;i< ui->tblGiohang->rowCount();i++)
    {
            QTableWidgetItem *item =  ui->tblGiohang->item(i,5);
            if ( !item )  continue;
            int value = item->text().toInt(); // get value to int
            Giatridon+=value;
    }
    ui->lblGiatridon->setNum(Giatridon);
}

void taodonhang::on_btnXoakhoigio_clicked()
{
    int row = ui->tblGiohang->currentRow();
    ui->tblGiohang->removeRow(row);
}

void taodonhang::on_cbxTenhang_currentTextChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    QString tenhang= ui->cbxTenhang->currentText();
    std::string tenhangs = tenhang.toStdString();
    nodehang* k = lkho.pHead;
    while (k)
    {
        if(k->data.name==tenhangs)
        {
            int dongia=k->data.price;
            ui->lblDongia->setNum(dongia);
            break;
        }
        k = k->pNext;
    }
}

void taodonhang::on_btnLuu_clicked()
{
    QString name=ui->lblName->text();
    if (name.length()<=0)
        {
            ui->statusbar->showMessage("Tên khách hàng trống!");
            return;
        }

    QString addr=ui->leditAddress->text();
    if (addr.length()<=0)
        {
            ui->statusbar->showMessage("Địa chỉ trống!");
            return;
        }
    QString phone=ui->lblPhone->text();
    if (phone.length()<=0)
        {
            ui->statusbar->showMessage("Số điện thoại trống!");
            return;
        }
    nodedon* h=ldon.head;
    int next=h->data.ma.stt+1;
    for (int i=0;i< ui->tblGiohang->rowCount();i++)
    {
        std::string danhmuc=ui->tblGiohang->item(i,0)->text().toStdString();
        std::string mahang=ui->tblGiohang->item(i,1)->text().toStdString();
        std::string tenhang=ui->tblGiohang->item(i,2)->text().toStdString();
        int soluong=ui->tblGiohang->item(i,3)->text().toInt();
        int thanhtien=ui->tblGiohang->item(i,5)->text().toInt();
        std::string ghichu=ui->tblGiohang->item(i,6)->text().toStdString();
        don d;
        d.ma.pref="LZD";
        d.ma.stt=next;
        d.idmua=usingid;
        d.loai=danhmuc;
        d.ten=tenhang;
        d.mahang=mahang;
        d.soluong=soluong;
        d.thanhtien=thanhtien;
        d.ngaytao.ngay=ngay.toInt();
        d.ngaytao.thang=thang.toInt();
        d.ngaytao.nam=nam.toInt();
        d.thanhtoan=ui->cbxThanhtoan->currentText().toStdString();
        d.vanchuyen=ui->cbxGiao->currentText().toStdString();
        d.trangthai="Đã tạo đơn";
        d.ghichu=("Dự kiến giao ngày: "+ngaygiao).toStdString();
        nodedon* n=nodedoninit(d);
        addHeaddon(ldon,n);
        nodehang* k=lkho.pHead;
        while(k)
        {
            if (k->data.id==mahang)
            {
                k->data.sl-=soluong;
                break;
            }
            k=k->pNext;
        }
    }
    ghilistdon(ldon);
    ghikhohang(lkho);
    QMessageBox::information(this,"Xác nhận","Tạo đơn hàng thành công!");
    this->close();
}

void taodonhang::on_btnHuy_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

void taodonhang::on_cbxVoucher_activated(const QString &arg1)
{
    Q_UNUSED(arg1);
    std::string vc=ui->cbxVoucher->currentText().toStdString();
    nodevc* n=lvc.head;
    while(n)
    {
        if (vc==n->data.ten)
        {
            km=float(n->data.giatri/100);
            ui->lblKm->setNum(n->data.giatri);
            break;
        }
        n=n->next;
    }
}

void taodonhang::on_cbxLoai_activated(int index)
{
    ui->cbxVoucher->clear();
    std::string loai=ui->cbxLoai->currentText().toStdString();
    nodevc* n=lvc.head;
    while(n)
    {
        if (loai==n->data.loai)
        {
            ui->cbxVoucher->addItem(QString::fromStdString(n->data.ten));
        }
        n=n->next;
    }
    index=ui->cbxLoai->currentIndex();
    switch (index)
    {
    case 0:
        {
            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Điện thoại di động");
            ui->cbxDanhmuc->addItem("Máy tính bảng");
            ui->cbxDanhmuc->addItem("Laptop");
            ui->cbxDanhmuc->addItem("Máy tính để bàn");
            ui->cbxDanhmuc->addItem("Âm thanh");
            ui->cbxDanhmuc->addItem("Camera giám sát");
            ui->cbxDanhmuc->addItem("Máy ảnh kỹ thuật số");
            ui->cbxDanhmuc->addItem("Máy quay phim");
            ui->cbxDanhmuc->addItem("Màn hình vi tính");
            ui->cbxDanhmuc->addItem("Máy in");
            ui->cbxDanhmuc->addItem("Đồng hồ thông minh");
            ui->cbxDanhmuc->addItem("Máy chơi game");
            break;
        }
    case 1:
        {
            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Phụ kiện di động");
            ui->cbxDanhmuc->addItem("Thiết bị thông minh");
            ui->cbxDanhmuc->addItem("Thiết bị số");
            ui->cbxDanhmuc->addItem("Phụ kiện máy ảnh");
            ui->cbxDanhmuc->addItem("Phụ kiện máy bay camera");
            ui->cbxDanhmuc->addItem("Thiết bị lưu trữ");
            ui->cbxDanhmuc->addItem("Phụ kiện máy tính");
            ui->cbxDanhmuc->addItem("Linh kiện máy tính");
            ui->cbxDanhmuc->addItem("Phụ kiện ống kính");
            ui->cbxDanhmuc->addItem("Thiết bị mạng");
            ui->cbxDanhmuc->addItem("Phụ kiện máy chơi game");
            break;
        }
    case 2:
        {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Tivi & Videos");
            ui->cbxDanhmuc->addItem("Điện gia dụng nhỏ");
            ui->cbxDanhmuc->addItem("Điện gia dụng lớn");
            ui->cbxDanhmuc->addItem("Phụ kiện Tivi");
            break;
        }
    case 3:
        {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Chăm sóc da");
            ui->cbxDanhmuc->addItem("Trang điểm");
            ui->cbxDanhmuc->addItem("Dụng cụ làm đẹp");
            ui->cbxDanhmuc->addItem("Chăm sóc cơ thể");
            ui->cbxDanhmuc->addItem("Chăm sóc tóc");
            ui->cbxDanhmuc->addItem("Chăm sóc cá nhân");
            ui->cbxDanhmuc->addItem("Dành cho nam giới");
            ui->cbxDanhmuc->addItem("Nước hoa");
            ui->cbxDanhmuc->addItem("Thực phẩm chức năng");
            ui->cbxDanhmuc->addItem("Thực phẩm cho sắc đẹp");
            ui->cbxDanhmuc->addItem("Sức khoẻ tình dục");
            ui->cbxDanhmuc->addItem("Thiết bị y tế");
            break;
        }
    case 4:
        {
            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Tã bỉm & dụng cụ vệ sinh");
            ui->cbxDanhmuc->addItem("Sữa bột & thức ăn cho bé");
            ui->cbxDanhmuc->addItem("Thời trang cho bé");
            ui->cbxDanhmuc->addItem("Đồ dùng ăn dặm & bú sữa");
            ui->cbxDanhmuc->addItem("Xe, ghế & đai địu");
            ui->cbxDanhmuc->addItem("Đồ dùng phỏng ngủ");
            ui->cbxDanhmuc->addItem("Tắm gội & chăm sóc cơ thể");
            ui->cbxDanhmuc->addItem("Đồ chơi cho bé");
            ui->cbxDanhmuc->addItem("Đồ chơi điện tử & điều khiển từ xa");
            ui->cbxDanhmuc->addItem("Đồ chơi thể thao & ngoài trời");
            ui->cbxDanhmuc->addItem("Đồ chơi cho bé chập chững");
            ui->cbxDanhmuc->addItem("Đồ chơi giáo dục");
            break;
        }
    case 5:
        {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Sữa tiệt trùng & sữa bột");
            ui->cbxDanhmuc->addItem("Đồ uống, bia, rượu");
            ui->cbxDanhmuc->addItem("Thực phẩm từ sữa & đồ lạnh");
            ui->cbxDanhmuc->addItem("Đồ hộp, Thực phẩm đóng gói");
            ui->cbxDanhmuc->addItem("Kẹo & Socola & đồ ăn vặt");
            ui->cbxDanhmuc->addItem("Nguyên liệu nấu ăn & làm bánh");
            ui->cbxDanhmuc->addItem("Giấy & vệ sinh nhà cửa");
            ui->cbxDanhmuc->addItem("Lau chùi vệ sinh nhà bếp");
            ui->cbxDanhmuc->addItem("Đồ dùng giặt giũ");
            ui->cbxDanhmuc->addItem("Phụ kiện thú cưng");
            ui->cbxDanhmuc->addItem("Thức ăn & chăm sóc thú cưng");
            break;
        }
    case 6:
        {
            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Bếp & phòng ăn");
            ui->cbxDanhmuc->addItem("Sửa chữa nhà cửa");
            ui->cbxDanhmuc->addItem("Dụng cụ điện");
            ui->cbxDanhmuc->addItem("Dụng cụ cầm tay");
            ui->cbxDanhmuc->addItem("Phòng ngủ");
            ui->cbxDanhmuc->addItem("Phòng tắm");
            ui->cbxDanhmuc->addItem("Đèn & thiết bị đèn");
            ui->cbxDanhmuc->addItem("Trang trí nhà cửa");
            ui->cbxDanhmuc->addItem("Đồ nội thất");
            ui->cbxDanhmuc->addItem("Văn phòng phẩm & thủ công");
            ui->cbxDanhmuc->addItem("Sách & nhạc cụ");
            ui->cbxDanhmuc->addItem("Thiết bị giặt & làm sạch");
            break;
         }
    case 7:
         {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Đầm nữ");
            ui->cbxDanhmuc->addItem("Quần & chân váy");
            ui->cbxDanhmuc->addItem("Áo nữ");
            ui->cbxDanhmuc->addItem("Jumpsuits");
            ui->cbxDanhmuc->addItem("Đồ đôi & gia đình");
            ui->cbxDanhmuc->addItem("Đồ ngủ & nội y");
            ui->cbxDanhmuc->addItem("Phụ kiện nữ");
            ui->cbxDanhmuc->addItem("Giày nữ");
            ui->cbxDanhmuc->addItem("Trang phục bé gái");
            ui->cbxDanhmuc->addItem("Giày bé gái");
            break;
        }
    case 8:
        {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Trang phục nam");
            ui->cbxDanhmuc->addItem("Giày dép nam");
            ui->cbxDanhmuc->addItem("Đồ lót nam");
            ui->cbxDanhmuc->addItem("Phụ kiện thời trang nam");
            ui->cbxDanhmuc->addItem("Trang phục bé trai");
            ui->cbxDanhmuc->addItem("Giày bé trai");
            break;
        }
    case 9:
        {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Đồng hồ nữ");
            ui->cbxDanhmuc->addItem("Trang sức nữ");
            ui->cbxDanhmuc->addItem("Kính mát");
            ui->cbxDanhmuc->addItem("Kính thời trang");
            ui->cbxDanhmuc->addItem("Túi xách nữ");
            ui->cbxDanhmuc->addItem("Balo nữ");
            ui->cbxDanhmuc->addItem("Đồng hồ nam");
            ui->cbxDanhmuc->addItem("Trang sức nam");
            ui->cbxDanhmuc->addItem("Túi xách nam");
            ui->cbxDanhmuc->addItem("Túi đeo chéo nam");
            ui->cbxDanhmuc->addItem("Vali & túi du lịch");
            ui->cbxDanhmuc->addItem("Túi trẻ em");
            break;
        }

    case 10:
        {
            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Giày thể thao nam");
            ui->cbxDanhmuc->addItem("Trang phục nam");
            ui->cbxDanhmuc->addItem("Giày thể thao nữ");
            ui->cbxDanhmuc->addItem("Trang phục nữ");
            ui->cbxDanhmuc->addItem("Vali & túi du lịch");
            ui->cbxDanhmuc->addItem("Hoạt động dã ngoại");
            ui->cbxDanhmuc->addItem("Thể thao và thể hình");
            ui->cbxDanhmuc->addItem("Thể thao dùng vợt");
            ui->cbxDanhmuc->addItem("Thể thao đồng đội");
            ui->cbxDanhmuc->addItem("Đấm bốc & võ thuật");
            ui->cbxDanhmuc->addItem("Thể thao dưới nước");
            ui->cbxDanhmuc->addItem("Phụ kiện thể thao");
            break;
        }
    case 11:
        {
            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Xe máy");
            ui->cbxDanhmuc->addItem("Chăm sóc ô tô");
            ui->cbxDanhmuc->addItem("Trang trí nội thât ô tô");
            ui->cbxDanhmuc->addItem("Trang trí ngoại thất ô tô");
            ui->cbxDanhmuc->addItem("Phụ tùng & phụ kiện ô tô");
            ui->cbxDanhmuc->addItem("Đồ điện tử dành cho ô tô");
            ui->cbxDanhmuc->addItem("Dầu nhớt & phụ gia ô tô");
            ui->cbxDanhmuc->addItem("Phụ tùng xe máy");
            ui->cbxDanhmuc->addItem("Đồ bảo hộ khi đi xe máy");
            ui->cbxDanhmuc->addItem("Phụ kiện & đồ chơi xe máy");
            ui->cbxDanhmuc->addItem("Dầu nhớt & phụ gia xe máy");
            ui->cbxDanhmuc->addItem("Vỏ ruột bánh xe máy & mâm");
            break;
        }
    }
}

void taodonhang::on_cbxDanhmuc_activated(const QString &arg1)
{
    Q_UNUSED(arg1);
    ui->cbxTenhang->clear();
    nodehang* k=lkho.pHead;
    std::string danhmuc=ui->cbxDanhmuc->currentText().toStdString();
    while (k)
    {
        if(k->data.dm==danhmuc)
        {
            ui->cbxTenhang->addItem(QString::fromStdString(k->data.name));
        }
        k=k->pNext;
    }
}

void taodonhang::on_cbxTenhang_activated(const QString &arg1)
{
    Q_UNUSED(arg1);
    nodehang* k=lkho.pHead;
    std::string tenhang=ui->cbxTenhang->currentText().toStdString();

    while (k)
    {
        if(k->data.name==tenhang)
        {
            ui->lblDongia->setNum(k->data.price);
            break;
        }
        k=k->pNext;
    }
};

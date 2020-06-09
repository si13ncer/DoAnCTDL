#include "taodonhang.h"
#include "ui_taodonhang.h"
#include "QString"
#include "QMessageBox"
#include "QDate"
#include "QDebug"
#include "dslkUser.h"
#include "thongtinkhach.h"

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
           ui->leditName->setText(QString::fromStdString(n->data.ten));
           ui->leditAdress->setText(QString::fromStdString(n->data.addr));
           ui->leditPhone->setText(QString::fromStdString(n->data.phone));
           break;
        }

        n = n->next;
    }
    ui->tblGiohang->setItemDelegateForColumn(3, new SpinBoxTable);
    ui->lblGiatridon->setStyleSheet("color: green;");
    ui->lblGiatridon->setNum(0);
    for (int i=0;i< ui->tblGiohang->rowCount();i++) //tắt chỉnh sửa ở cột
    {
            QTableWidgetItem *col0 =  ui->tblGiohang->item(i,0);
            QTableWidgetItem *col1 =  ui->tblGiohang->item(i,1);
            QTableWidgetItem *col2 =  ui->tblGiohang->item(i,2);
            QTableWidgetItem *col4 =  ui->tblGiohang->item(i,4);
            col0->setFlags(col0->flags() & ~Qt::ItemIsEditable);
            col1->setFlags(col1->flags() & ~Qt::ItemIsEditable);
            col2->setFlags(col2->flags() & ~Qt::ItemIsEditable);
            col4->setFlags(col4->flags() & ~Qt::ItemIsEditable);
    }
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
void taodonhang::on_btnLuu_clicked()
{
//    QString id=ui->lblID->text();
    QString name=ui->leditName->text();
    if (name.length()<=0)
        {
            ui->statusbar->showMessage("Tên khách hàng trống!");
            return;
        }
        for (int i =0;i<name.size();i++)
        {
            if (name[i].isNumber()) // Chỉ check số vì dấu cũng là kí tự đặc biệt
           {
                ui->statusbar->showMessage("Tên không hợp lệ! Không được dùng số");
                return;
           }
        }
    QString addr=ui->leditAdress->text();
    if (addr.length()<=0)
        {
            ui->statusbar->showMessage("Địa chỉ trống!");
            return;
        }
    QString phone=ui->leditPhone->text();
    if (phone.length()<=0)
        {
            ui->statusbar->showMessage("Số điện thoại trống!");
            return;
        }
    for (int i =0;i<phone.size();i++)
    {
        if (!phone[i].isNumber())
       {
            ui->statusbar->showMessage("SĐT không hợp lệ!");
            return;
       }
    }
    QString ttoan=ui->cbxThanhtoan->currentText();
    QString ship=ui->cbxGiao->currentText();
//    QString ntaoq = ntao.toString("dd/MM/yyyy");//convert QDate to QString
//    std::string ids=id.toStdString();
    std::string names = name.toStdString();
    std::string addrs = addr.toStdString();
    std::string phones = phone.toStdString();
    std::string ttoans = ttoan.toStdString();
    std::string ships = ship.toStdString();
//    std::string ntaos=ntaoq.toStdString();
    if (avaiableK(lkh,usingid)==false)// nếu chưa có - thêm vào đuôi; nếu đã có - cập nhật
    {
        nodek* n = lkh.head;
        while (n)
        {
            if (n->data.id==usingid)
            {
               n->data.ten=names;
               n->data.addr=addrs;
               n->data.phone=phones;
               break;
            }
            n = n->next;
        }
    }
    else
    {
        kh k;
        k.id=usingid;
        k.ten=names;
        k.addr=addrs;
        k.phone=phones;
        nodek* n = nkinit(k);
        addTailk(lkh, n);
    }
    ghilistkh(lkh);
}
void taodonhang::on_btnHuy_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

void taodonhang::on_cbxLoai_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    int index=ui->cbxLoai->currentIndex();
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

void taodonhang::on_btnThemvaogio_clicked()
{
    ui->tblGiohang->insertRow(ui->tblGiohang->rowCount());//thêm dòng vào cuối bảng
}

void taodonhang::on_tblGiohang_itemChanged(QTableWidgetItem *item)
{
    Q_UNUSED(item)
    int Giatridon=0;
    for (int i=0;i< ui->tblGiohang->rowCount();i++)
    {
            QTableWidgetItem *item =  ui->tblGiohang->item(i,4);
            if ( ! item )  continue;
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

void taodonhang::on_spbSoluong_valueChanged(int arg1)
{
    Q_UNUSED(arg1);
    float voucher;
    QString dg = ui->lblDongia->text();
    int dongia=dg.toInt();
    int Soluong=ui->spbSoluong->value();
    int Tong = Soluong * (dongia-dongia*voucher);
    ui->lblTong->setNum(Tong);
}

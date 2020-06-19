#include "nhaphang.h"
#include "ui_nhaphang.h"
#include "QString"
#include "QMessageBox"
#include "QDate"
#include "QDebug"
#include "dslkKho.h"

nhaphang::nhaphang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::nhaphang)
{
    ui->setupUi(this);
    QString tittle = "Nhập Sản Phẩm";
    this->setWindowTitle(tittle);
    ui->cbxDanhmuc->clear();
    ui->cbxDanhmuc->addItem("Điện thoại di động");
    ui->cbxDanhmuc->addItem("Máy tính bảng");
    ui->cbxDanhmuc->addItem("Laptop");
    ui->cbxDanhmuc->addItem("Máy tính để bàn");
    ui->cbxDanhmuc->addItem("Âm thanh");
    ui->cbxDanhmuc->addItem("Camera giám sát");
    ui->cbxDanhmuc->addItem("Máy ảnh kỹ thuật số");
    ui->cbxDanhmuc->addItem("Máy quay phim và máy quay hành động");
    ui->cbxDanhmuc->addItem("Màn hình vi tính");
    ui->cbxDanhmuc->addItem("Máy in");
    ui->cbxDanhmuc->addItem("Đồng hồ thông minh");
    ui->cbxDanhmuc->addItem("Máy chơi game");
    ui->spinBox->setMaximum(1000);


}

nhaphang::~nhaphang()
{
    delete ui;
}

void nhaphang::on_btnHuy_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Dữ liệu chưa được lưu, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}

void nhaphang::on_cbxLoaihang_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    int index=ui->cbxLoaihang->currentIndex();
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
            ui->cbxDanhmuc->addItem("Máy quay phim và máy quay hành động");
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
            ui->cbxDanhmuc->addItem("Đồ chơi điện tử và điều khiển từ xa");
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
            ui->cbxDanhmuc->addItem("Thức ăn và chăm sóc thú cưng");
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
            ui->cbxDanhmuc->addItem("Văn phòng phẩm và thủ công");
            ui->cbxDanhmuc->addItem("Sách & nhạc cụ");
            ui->cbxDanhmuc->addItem("Thiết bị giặt & làm sạch");
            break;
         }
    case 7:
         {

            ui->cbxDanhmuc->clear();
            ui->cbxDanhmuc->addItem("Đầm nữ");
            ui->cbxDanhmuc->addItem("Quần và chân váy");
            ui->cbxDanhmuc->addItem("Áo nữ");
            ui->cbxDanhmuc->addItem("Jumpsuits");
            ui->cbxDanhmuc->addItem("Đồ đôi và gia đình");
            ui->cbxDanhmuc->addItem("Đồ ngủ và nội y");
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
            ui->cbxDanhmuc->addItem("Đấm bốc và võ thuật");
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

void nhaphang::on_btnLuu_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Bạn có muốn lưu thông tin của hàng hiện tại")==QMessageBox::Yes)
  {
    hang h;
    QString th=ui->lineEdit->text();
    if (th.length()<=0)
        {
             QMessageBox::information(this,"Xác nhận","Tên hàng trống!");
            return;
        }
    for (int i=0;i<th.length();i++)
    {

        if((th[i]==32 && th[i+1]==32)||th[0]==32||th[th.length()]==32)
        {
            for(int j=i;j<th.length();j++)
            {
            th[j]=th[j+1];
            i--;
            }
        }
    }
    th[0]=th[0].toUpper();
    h.name = th.toStdString();
    QString mahang=ui->lineEdit_2->text();
    for (int i =0;i<mahang.size();i++)
    {
        if (mahang[i].isPunct()||mahang[i].isSpace())
       {
            QMessageBox::information(this,"Xác nhận","Mã hàng không hợp lệ!");
            return;
       }
    }
    for (int i=0;i<mahang.length();i++)
    {

        if(mahang[i]==32)
        {
            for(int j=i;j<th.length();j++)
            {
            th[j]=th[j+1];
            i--;
            }
        }
    }
    mahang=mahang.toUpper();
    h.id = mahang.toStdString();
     QString giahang=ui->lineEdit_3->text();
     for (int i =0;i<giahang.size();i++)
     {
         if (!giahang[i].isNumber())
        {
              QMessageBox::information(this,"Xác nhận","Giá hàng không hợp lệ!");
             return;
        }
     }
     h.price=giahang.toInt();
     h.sl= ui->spinBox->value();
     QDate Mydate=ui->dateEdit->date().currentDate();
     //QString date=Mydate.toString("dd/mm/yyyy")
     //h.day=date.toStdString();
     h.day =Mydate.toString("dd/MM/yyyy").toStdString();
     //QString phanloai=ui->cbxLoaihang->currentText();
     //h.pl= phanloai.toStdString();
     h.pl= ui->cbxLoaihang->currentText().toStdString();
     //QString danhmuchang=ui->cbxDanhmuc->currentText();
     //h.dm=danhmuchang.toStdString();
     h.dm=ui->cbxDanhmuc->currentText().toStdString();
     nodehang *p=tao1node(h);
     if (kiemtracotontai(lkho,h.name,h.id)==true)
     {
         QMessageBox::information(this,"Xác nhận","Hàng đã tồn tại!");
         delete p;
         return;
     }
     else
     {
         themcuoi(lkho,p);
         ghikhohang(lkho);
         QMessageBox::information(this,"Xác nhận","Đã thêm sản phẩm vào kho hoàn tất!");
         if(QMessageBox::question(this,"Xác nhận","Bạn có muốn xoá thông tin của hàng hiện tại")==QMessageBox::Yes)
         {
             ui->lineEdit->clear();
             ui->lineEdit_2->clear();
             ui->lineEdit_3->clear();
             ui->spinBox->setValue(0);
             return ;
         }
         return;

     }
  }
}



#include "khohang.h"
#include "ui_khohang.h"
#include "QMessageBox"
#include "dslkKho.h"
khohang::khohang(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::khohang)
{
    ui->setupUi(this);
    QString tittle = "Danh mục sản phẩm";
    this->setWindowTitle(tittle);
    ui->cbxdmh->clear();
    ui->cbxdmh->addItem("Điện thoại di động");
    ui->cbxdmh->addItem("Máy tính bảng");
    ui->cbxdmh->addItem("Laptop");
    ui->cbxdmh->addItem("Máy tính để bàn");
    ui->cbxdmh->addItem("Âm thanh");
    ui->cbxdmh->addItem("Camera giám sát");
    ui->cbxdmh->addItem("Máy ảnh kỹ thuật số");
    ui->cbxdmh->addItem("Máy quay phim và máy quay hành động");
    ui->cbxdmh->addItem("Màn hình vi tính");
    ui->cbxdmh->addItem("Máy in");
    ui->cbxdmh->addItem("Đồng hồ thông minh");
    ui->cbxdmh->addItem("Máy chơi game");
    ui->spinbsl->setMaximum(1000);
    ui->cbxdmh_2->addItem("Điện thoại di động");
    ui->cbxdmh_2->addItem("Máy tính bảng");
    ui->cbxdmh_2->addItem("Laptop");
    ui->cbxdmh_2->addItem("Máy tính để bàn");
    ui->cbxdmh_2->addItem("Âm thanh");
    ui->cbxdmh_2->addItem("Camera giám sát");
    ui->cbxdmh_2->addItem("Máy ảnh kỹ thuật số");
    ui->cbxdmh_2->addItem("Máy quay phim và máy quay hành động");
    ui->cbxdmh_2->addItem("Màn hình vi tính");
    ui->cbxdmh_2->addItem("Máy in");
    ui->cbxdmh_2->addItem("Đồng hồ thông minh");
    ui->cbxdmh_2->addItem("Máy chơi game");

}

khohang::~khohang()
{
    delete ui;
}


void khohang::on_cbxplh_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
int index = ui->cbxplh->currentIndex();
    switch(index)
  {
    case 0:
        {
            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Điện thoại di động");
            ui->cbxdmh->addItem("Máy tính bảng");
            ui->cbxdmh->addItem("Laptop");
            ui->cbxdmh->addItem("Máy tính để bàn");
            ui->cbxdmh->addItem("Âm thanh");
            ui->cbxdmh->addItem("Camera giám sát");
            ui->cbxdmh->addItem("Máy ảnh kỹ thuật số");
            ui->cbxdmh->addItem("Máy quay phim và máy quay hành động");
            ui->cbxdmh->addItem("Màn hình vi tính");
            ui->cbxdmh->addItem("Máy in");
            ui->cbxdmh->addItem("Đồng hồ thông minh");
            ui->cbxdmh->addItem("Máy chơi game");
            break;
        }
    case 1:
        {
            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Phụ kiện di động");
            ui->cbxdmh->addItem("Thiết bị thông minh");
            ui->cbxdmh->addItem("Thiết bị số");
            ui->cbxdmh->addItem("Phụ kiện máy ảnh");
            ui->cbxdmh->addItem("Phụ kiện máy bay camera");
            ui->cbxdmh->addItem("Thiết bị lưu trữ");
            ui->cbxdmh->addItem("Phụ kiện máy tính");
            ui->cbxdmh->addItem("Linh kiện máy tính");
            ui->cbxdmh->addItem("Phụ kiện ống kính");
            ui->cbxdmh->addItem("Thiết bị mạng");
            ui->cbxdmh->addItem("Phụ kiện máy chơi game");
            break;
        }
    case 2:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Tivi & Videos");
            ui->cbxdmh->addItem("Điện gia dụng nhỏ");
            ui->cbxdmh->addItem("Điện gia dụng lớn");
            ui->cbxdmh->addItem("Phụ kiện Tivi");
            break;
        }
    case 3:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Chăm sóc da");
            ui->cbxdmh->addItem("Trang điểm");
            ui->cbxdmh->addItem("Dụng cụ làm đẹp");
            ui->cbxdmh->addItem("Chăm sóc cơ thể");
            ui->cbxdmh->addItem("Chăm sóc tóc");
            ui->cbxdmh->addItem("Chăm sóc cá nhân");
            ui->cbxdmh->addItem("Dành cho nam giới");
            ui->cbxdmh->addItem("Nước hoa");
            ui->cbxdmh->addItem("Thực phẩm chức năng");
            ui->cbxdmh->addItem("Thực phẩm cho sắc đẹp");
            ui->cbxdmh->addItem("Sức khoẻ tình dục");
            ui->cbxdmh->addItem("Thiết bị y tế");
            break;
        }
    case 4:
        {
            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Tã bỉm & dụng cụ vệ sinh");
            ui->cbxdmh->addItem("Sữa bột & thức ăn cho bé");
            ui->cbxdmh->addItem("Thời trang cho bé");
            ui->cbxdmh->addItem("Đồ dùng ăn dặm & bú sữa");
            ui->cbxdmh->addItem("Xe, ghế & đai địu");
            ui->cbxdmh->addItem("Đồ dùng phỏng ngủ");
            ui->cbxdmh->addItem("Tắm gội & chăm sóc cơ thể");
            ui->cbxdmh->addItem("Đồ chơi cho bé");
            ui->cbxdmh->addItem("Đồ chơi điện tử và điều khiển từ xa");
            ui->cbxdmh->addItem("Đồ chơi thể thao & ngoài trời");
            ui->cbxdmh->addItem("Đồ chơi cho bé chập chững");
            ui->cbxdmh->addItem("Đồ chơi giáo dục");
            break;
        }
    case 5:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Sữa tiệt trùng & sữa bột");
            ui->cbxdmh->addItem("Đồ uống, bia, rượu");
            ui->cbxdmh->addItem("Thực phẩm từ sữa & đồ lạnh");
            ui->cbxdmh->addItem("Đồ hộp, Thực phẩm đóng gói");
            ui->cbxdmh->addItem("Kẹo & Socola & đồ ăn vặt");
            ui->cbxdmh->addItem("Nguyên liệu nấu ăn & làm bánh");
            ui->cbxdmh->addItem("Giấy & vệ sinh nhà cửa");
            ui->cbxdmh->addItem("Lau chùi vệ sinh nhà bếp");
            ui->cbxdmh->addItem("Đồ dùng giặt giũ");
            ui->cbxdmh->addItem("Phụ kiện thú cưng");
            ui->cbxdmh->addItem("Thức ăn và chăm sóc thú cưng");
            break;
        }
    case 6:
        {
            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Bếp & phòng ăn");
            ui->cbxdmh->addItem("Sửa chữa nhà cửa");
            ui->cbxdmh->addItem("Dụng cụ điện");
            ui->cbxdmh->addItem("Dụng cụ cầm tay");
            ui->cbxdmh->addItem("Phòng ngủ");
            ui->cbxdmh->addItem("Phòng tắm");
            ui->cbxdmh->addItem("Đèn & thiết bị đèn");
            ui->cbxdmh->addItem("Trang trí nhà cửa");
            ui->cbxdmh->addItem("Đồ nội thất");
            ui->cbxdmh->addItem("Văn phòng phẩm và thủ công");
            ui->cbxdmh->addItem("Sách & nhạc cụ");
            ui->cbxdmh->addItem("Thiết bị giặt & làm sạch");
            break;
         }
    case 7:
         {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Đầm nữ");
            ui->cbxdmh->addItem("Quần và chân váy");
            ui->cbxdmh->addItem("Áo nữ");
            ui->cbxdmh->addItem("Jumpsuits");
            ui->cbxdmh->addItem("Đồ đôi và gia đình");
            ui->cbxdmh->addItem("Đồ ngủ và nội y");
            ui->cbxdmh->addItem("Phụ kiện nữ");
            ui->cbxdmh->addItem("Giày nữ");
            ui->cbxdmh->addItem("Trang phục bé gái");
            ui->cbxdmh->addItem("Giày bé gái");
            break;
        }
    case 8:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Trang phục nam");
            ui->cbxdmh->addItem("Giày dép nam");
            ui->cbxdmh->addItem("Đồ lót nam");
            ui->cbxdmh->addItem("Phụ kiện thời trang nam");
            ui->cbxdmh->addItem("Trang phục bé trai");
            ui->cbxdmh->addItem("Giày bé trai");
            break;
        }
    case 9:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Đồng hồ nữ");
            ui->cbxdmh->addItem("Trang sức nữ");
            ui->cbxdmh->addItem("Kính mát");
            ui->cbxdmh->addItem("Kính thời trang");
            ui->cbxdmh->addItem("Túi xách nữ");
            ui->cbxdmh->addItem("Balo nữ");
            ui->cbxdmh->addItem("Đồng hồ nam");
            ui->cbxdmh->addItem("Trang sức nam");
            ui->cbxdmh->addItem("Túi xách nam");
            ui->cbxdmh->addItem("Túi đeo chéo nam");
            ui->cbxdmh->addItem("Vali & túi du lịch");
            ui->cbxdmh->addItem("Túi trẻ em");
            break;

        }
    case 10:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Giày thể thao nam");
            ui->cbxdmh->addItem("Trang phục nam");
            ui->cbxdmh->addItem("Giày thể thao nữ");
            ui->cbxdmh->addItem("Trang phục nữ");
            ui->cbxdmh->addItem("Vali & túi du lịch");
            ui->cbxdmh->addItem("Hoạt động dã ngoại");
            ui->cbxdmh->addItem("Thể thao và thể hình");
            ui->cbxdmh->addItem("Thể thao dùng vợt");
            ui->cbxdmh->addItem("Thể thao đồng đội");
            ui->cbxdmh->addItem("Đấm bốc và võ thuật");
            ui->cbxdmh->addItem("Thể thao dưới nước");
            ui->cbxdmh->addItem("Phụ kiện thể thao");
            break;
        }
    case 11:
        {

            ui->cbxdmh->clear();
            ui->cbxdmh->addItem("Xe máy");
            ui->cbxdmh->addItem("Chăm sóc ô tô");
            ui->cbxdmh->addItem("Trang trí nội thât ô tô");
            ui->cbxdmh->addItem("Trang trí ngoại thất ô tô");
            ui->cbxdmh->addItem("Phụ tùng & phụ kiện ô tô");
            ui->cbxdmh->addItem("Đồ điện tử dành cho ô tô");
            ui->cbxdmh->addItem("Dầu nhớt & phụ gia ô tô");
            ui->cbxdmh->addItem("Phụ tùng xe máy");
            ui->cbxdmh->addItem("Đồ bảo hộ khi đi xe máy");
            ui->cbxdmh->addItem("Phụ kiện & đồ chơi xe máy");
            ui->cbxdmh->addItem("Dầu nhớt & phụ gia xe máy");
            ui->cbxdmh->addItem("Vỏ ruột bánh xe máy & mâm");
            break;
        }
    case 12:
        {
        ui->cbxdmh->clear();
        ui->cbxdmh->addItem("Toàn bộ");
        break;
        }
    }
}

void khohang::on_btnload_clicked()
{
    ui->tblkhohang->setRowCount(0);
    QString pl= ui->cbxplh->currentText();
    QString dm=ui->cbxdmh->currentText();
    string plh=pl.toStdString();
    string dmh=dm.toStdString();
    if (plh == "Toàn bộ")
    {

        nodehang *p=lkho.pHead;
        while (p)
        {

            QString pl = QString::fromStdString(p->data.pl);
            QString dm = QString::fromStdString(p->data.dm);
            QString name = QString::fromStdString(p->data.name);
            QString id = QString::fromStdString(p->data.id);
            QString day = QString::fromStdString(p->data.day);
            QString price = QString::number(p->data.price);
            QString sl = QString::number(p->data.sl);
            ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
            if (p->data.sl <=3)
            {
                QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                QMessageBox q;
                q.setText(notif);
                q.exec();
            }
            p=p->pNext;
        }
        QMessageBox::information(this,"Xác nhận","đã load thông tin!");
        return;

    }
    else if(plh=="Thiết Bị Điện Tử")
    {
        if(dmh=="Điện thoại di động")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Điện thoại di động")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Máy tính bảng")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Máy tính bảng")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Laptop")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Laptop")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Máy tính để bàn")
        {
          nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Máy tính để bàn")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Âm thanh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Âm thanh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                  p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Camera giám sát")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Điện thoại di động")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Máy ảnh kỹ thuật số")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Máy ảnh kỹ thuật số")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Máy quay phim và máy quay hành động")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Máy quay phim và máy quay hành động")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;

        }
        else if(dmh=="Màn hình vi tính")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Màn hình vi tính")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if(dmh=="Máy in")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Máy in")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if(dmh=="Đồng hồ thông minh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồng hồ thông minh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if(dmh=="Máy chơi game")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Máy chơi game")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }

    }
    else if (plh =="Phụ Kiện Điện Tử")
    {
        if (dmh=="Phụ kiện di động")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện di động")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thiết bị thông minh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thiết bị thông minh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện máy ảnh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện máy ảnh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện máy bay camera")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện máy bay camera")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thiết bị lưu trữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thiết bị lưu trữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện máy tính")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện máy tính")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Linh kiện máy tính")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Linh kiện máy tính")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện ống kính")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện ống kính")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thiết bị mạng")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thiết bị mạng")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện máy chơi game")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện máy chơi game")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh =="TV & Thiết Bị Điện Gia Dụng")
    {
        if (dmh=="Tivi & Videos")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Tivi & Videos")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Điện gia dụng nhỏ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Điện gia dụng nhỏ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Điện gia dụng lớn")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Điện gia dụng lớn")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện Tivi")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện Tivi")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh=="Sức Khoẻ & Làm Đẹp")
    {
         if (dmh=="Chăm sóc da")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Chăm sóc da")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang điểm")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang điểm")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Dụng cụ làm đẹp")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Dụng cụ làm đẹp")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Chăm sóc cơ thể")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Chăm sóc cơ thể")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Chăm sóc tóc")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Chăm sóc tóc")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Chăm sóc cá nhân")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Chăm sóc cá nhân")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Dành cho nam giới")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Dành cho nam giới")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Nước hoa")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Nước hoa")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thực phẩm chức năng")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thực phẩm chức năng")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thực phẩm cho sắc đẹp")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thực phẩm cho sắc đẹp")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Sức khoẻ tình dục")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Sức khoẻ tình dục")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thiết bị y tế")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thiết bị y tế")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (dmh =="Hàng Mẹ, Bé & Đồ Chơi")
    {
        if (dmh=="Tã bỉm & dụng cụ vệ sinh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Tã bỉm & dụng cụ vệ sinh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Sữa bột & thức ăn cho bé")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Sữa bột & thức ăn cho bé")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thời trang cho bé")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thời trang cho bé")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ dùng ăn dặm & bú sữa")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ dùng ăn dặm & bú sữa")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Xe, ghế & đai địu")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Xe, ghế & đai địu")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ dùng phỏng ngủ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ dùng phỏng ngủ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Tắm gội & chăm sóc cơ thể")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Tắm gội & chăm sóc cơ thể")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ chơi cho bé")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ chơi cho bé")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ chơi điện tử và điều khiển từ xa")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ chơi điện tử và điều khiển từ xa")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ chơi thể thao & ngoài trời")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ chơi thể thao & ngoài trời")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ chơi cho bé chập chững")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ chơi cho bé chập chững")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ chơi giáo dục")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ chơi giáo dục")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh =="Siêu Thị Tạp Hoá")
    {
        if (dmh=="Sữa tiệt trùng & sữa bột")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Sữa tiệt trùng & sữa bột")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ uống, bia, rượu")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ uống, bia, rượu")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thực phẩm từ sữa & đồ lạnh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thực phẩm từ sữa & đồ lạnh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ hộp, Thực phẩm đóng gói")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ hộp, Thực phẩm đóng gói")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Kẹo & Socola & đồ ăn vặt")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Kẹo & Socola & đồ ăn vặt")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Nguyên liệu nấu ăn & làm bánh")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Nguyên liệu nấu ăn & làm bánh")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Giấy & vệ sinh nhà cửa")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giấy & vệ sinh nhà cửa")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Lau chùi vệ sinh nhà bếp")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Lau chùi vệ sinh nhà bếp")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ dùng giặt giũ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ dùng giặt giũ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện thú cưng")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện thú cưng")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thức ăn và chăm sóc thú cưng")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thức ăn và chăm sóc thú cưng")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh =="Hàng Gia Dụng & Đời Sống")
    {
        if (dmh=="Bếp & phòng ăn")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Bếp & phòng ăn")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Sửa chữa nhà cửa")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Sửa chữa nhà cửa")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Dụng cụ điện")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Dụng cụ điện")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Dụng cụ cầm tay")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Dụng cụ cầm tay")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phòng ngủ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phòng ngủ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phòng tắm")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phòng tắm")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đèn & thiết bị đèn")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đèn & thiết bị đèn")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang trí nhà cửa")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang trí nhà cửa")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ nội thất")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ nội thất")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Văn phòng phẩm và thủ công")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Văn phòng phẩm và thủ công")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Sách & nhạc cụ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Sách & nhạc cụ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thiết bị giặt & làm sạch")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thiết bị giặt & làm sạch")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if(plh=="Thời Trang Nữ")
    {
        if (dmh=="Đầm nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đầm nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Quần và chân váy")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Quần và chân váy")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Áo nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Áo nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Jumpsuits")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Jumpsuits")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ đôi và gia đình")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ đôi và gia đình")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ ngủ và nội y")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ ngủ và nội y")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Giày nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giày nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang phục bé gái")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang phục bé gái")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Giày bé gái")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giày bé gái")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh=="Thời Trang Nam")
    {
        if (dmh=="Trang phục nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang phục nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Giày dép nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giày dép nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ lót nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ lót nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện thời trang nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện thời trang nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang phục bé trai")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang phục bé trai")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Giày bé trai")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giày bé trai")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh=="Phụ Kiện Thời Trang")
    {
        if (dmh=="Đồng hồ nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồng hồ nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang sức nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang sức nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Kính mát")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Kính mát")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Kính thời trang")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Kính thời trang")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Túi xách nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Túi xách nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Balo nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Balo nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồng hồ nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồng hồ nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang sức nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang sức nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Túi xách nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Túi xách nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Túi đeo chéo nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Túi đeo chéo nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Vali & túi du lịch")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Vali & túi du lịch")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Túi trẻ em")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Túi trẻ em")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh=="Thể Thao & Du Lịch")
    {
        if (dmh=="Giày thể thao nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giày thể thao nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang phục nam")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang phục nam")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Giày thể thao nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Giày thể thao nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang phục nữ")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang phục nữ")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Vali & túi du lịch")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Vali & túi du lịch")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Hoạt động dã ngoại")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Hoạt động dã ngoại")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thể thao và thể hình")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thể thao và thể hình")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thể thao dùng vợt")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thể thao dùng vợt")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thể thao đồng đội")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thể thao đồng đội")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đấm bốc và võ thuật")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đấm bốc và võ thuật")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Thể thao dưới nước")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Thể thao dưới nước")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện thể thao")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện thể thao")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
    else if (plh =="Ôtô, Xe Máy & Thiết Bị Định Vị")
    {
        if (dmh=="Xe máy")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Xe máy")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Chăm sóc ô tô")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Chăm sóc ô tô")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang trí nội thât ô tô")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang trí nội thât ô tô")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Trang trí ngoại thất ô tô")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Trang trí ngoại thất ô tô")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ tùng & phụ kiện ô tô")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ tùng & phụ kiện ô tô")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ điện tử dành cho ô tô")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ điện tử dành cho ô tô")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Dầu nhớt & phụ gia ô tô")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Dầu nhớt & phụ gia ô tô")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ tùng xe máy")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ tùng xe máy")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                   if (p->data.sl <=3)
                   {
                       QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                       QMessageBox q;
                       q.setText(notif);
                       q.exec();
                   }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Đồ bảo hộ khi đi xe máy")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Đồ bảo hộ khi đi xe máy")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Phụ kiện & đồ chơi xe máy")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Phụ kiện & đồ chơi xe máy")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Dầu nhớt & phụ gia xe máy")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Dầu nhớt & phụ gia xe máy")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
        else if (dmh=="Vỏ ruột bánh xe máy & mâm")
        {
            nodehang *p=lkho.pHead;
            while (p)
            {
                if(p->data.dm=="Vỏ ruột bánh xe máy & mâm")
                {

                    QString pl = QString::fromStdString(p->data.pl);
                    QString dm = QString::fromStdString(p->data.dm);
                    QString name = QString::fromStdString(p->data.name);
                    QString id = QString::fromStdString(p->data.id);
                    QString day = QString::fromStdString(p->data.day);
                    QString price = QString::number(p->data.price);
                    QString sl = QString::number(p->data.sl);
                    ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
                    ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
                    if (p->data.sl <=3)
                    {
                        QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                        QMessageBox q;
                        q.setText(notif);
                        q.exec();
                    }
                }
                p=p->pNext;
            }
            QMessageBox::information(this,"Xác nhận","đã load thông tin!");
            return;
        }
    }
}

void khohang::on_btnexit_clicked()
{
    if(QMessageBox::question(this,"Xác nhận","Còn nhiều lắm, bạn có chắc chắn muốn thoát?")==QMessageBox::Yes)
    {
        this->close();
    }
}


void khohang::on_btnxoa_clicked()
{
    QString mahang=ui->lineEditid->text();
    for (int i =0;i<mahang.size();i++)
    {
        if (mahang[i].isPunct()||mahang[i].isSpace())
       {
            QMessageBox::information(this,"Xác nhận","Mã hàng không hợp lệ");
            return;
       }
    }
    string id= ui->lineEditid->text().toStdString();
    if (kiemtratontai (lkho,id) ==false)
    {
        QMessageBox::information(this,"Xác nhận","Mã hàng không tồn tại");
        return;
    }
    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn xoá sản phẩm này?")==QMessageBox::Yes)
    {
        xoa(lkho,id);
        ghikhohang(lkho);
        QMessageBox::information(this,"Xác nhận","Sản phẩm này đã bị xoá");
        ui->lineEditid->clear();
        ui->lineEditchange->clear();
        return;
    }


}

void khohang::on_btnchange_clicked()
{
    QString mahang=ui->lineEditid->text();
    for (int i =0;i<mahang.size();i++)
    {
        if (mahang[i].isPunct()||mahang[i].isSpace())
       {
            QMessageBox::information(this,"Xác nhận","Mã hàng không hợp lệ");
            return;
       }
    }
     string id= ui->lineEditid->text().toStdString();
     if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn sửa sản phẩm này?")==QMessageBox::Yes)
     {
         if (kiemtratontai (lkho,id) ==false)
         {
             QMessageBox::information(this,"Xác nhận","Mã hàng không tồn tại");
             return;
         }

         string x=ui->cbxelement->currentText().toStdString();

         if (x=="Tên hàng")
         {
             string change =ui->lineEditchange->text().toStdString();
             SuaTenHang(lkho,change,id);
             ghikhohang(lkho);
             QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
             ui->lineEditid->clear();
             ui->lineEditchange->clear();
             return;
         }

         else if (x=="Mã hàng")
         {
              string change =ui->lineEditchange->text().toStdString();
              SuaMaHang(lkho,change,id);
              ghikhohang(lkho);
              QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
              ui->lineEditid->clear();
              ui->lineEditchange->clear();
              return;
         }
         else if (x=="Giá nhập")
         {
             int change =ui->lineEditchange->text().toInt();
             SuaGiaHangCuaMaHang(lkho,change,id);
             ghikhohang(lkho);
             QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
             ui->lineEditid->clear();
             ui->lineEditchange->clear();
             return;
         }
     }
}




void khohang::on_btnsearch_clicked()
{

    QString mahang=ui->lineEditid->text();
    for (int i =0;i<mahang.size();i++)
    {
        if (mahang[i].isPunct()||mahang[i].isSpace())
       {
            QMessageBox::information(this,"Xác nhận","Mã hàng không hợp lệ");
            return;
       }
    }

    string id= ui->lineEditid->text().toStdString();

    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn tìm sản phẩm này?")==QMessageBox::Yes)
   {
        if (kiemtratontai (lkho,id) ==false)
        {
            QMessageBox::information(this,"Xác nhận","Mã hàng không tồn tại");
            return;
        }
     ui->tblkhohang->setRowCount(0);
     nodehang *p=lkho.pHead;
     while (p)
      {
         if(p->data.id==id)
         {

            QString pl = QString::fromStdString(p->data.pl);
            QString dm = QString::fromStdString(p->data.dm);
            QString name = QString::fromStdString(p->data.name);
            QString id = QString::fromStdString(p->data.id);
            QString day = QString::fromStdString(p->data.day);
            QString price = QString::number(p->data.price);
            QString sl = QString::number(p->data.sl);
            ui->tblkhohang->insertRow(ui->tblkhohang->rowCount());
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,0,new QTableWidgetItem(pl));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,1,new QTableWidgetItem(dm));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,2,new QTableWidgetItem(name));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,3,new QTableWidgetItem(id));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,4,new QTableWidgetItem(day));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,5,new QTableWidgetItem(price));
            ui->tblkhohang->setItem(ui->tblkhohang->rowCount()-1,6,new QTableWidgetItem(sl));
            if (p->data.sl <=3)
            {
                QString notif= QString("%1 hiện có số lượng dưới 3").arg(id);
                QMessageBox q;
                q.setText(notif);
                q.exec();
            }
         }
         p=p->pNext;
      }
     QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
     return;
   }

}

void khohang::on_btnEditsl_clicked()
{
    QString mahang=ui->lineEditid->text();
    for (int i =0;i<mahang.size();i++)
    {
        if (mahang[i].isPunct()||mahang[i].isSpace())
       {
            QMessageBox::information(this,"Xác nhận","Mã hàng không hợp lệ");
            return;
       }
    }

    string id= ui->lineEditid->text().toStdString();
    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn sửa sản phẩm này?")==QMessageBox::Yes)
    {
        if (kiemtratontai (lkho,id) ==false)
        {
            QMessageBox::information(this,"Xác nhận","Mã hàng không tồn tại");
            return;
        }

    int change =ui->spinbsl->value();

    SuaSoLuongCuaMaHang(lkho,change,id);

    ghikhohang(lkho);

    QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
    ui->lineEditid->clear();
    return;

    }

}



void khohang::on_btnsapxep_clicked()
{
    SapXep(lkho);
    ghikhohang(lkho);
  QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
  return;
}

void khohang::on_cbxplh_2_currentIndexChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
int index = ui->cbxplh_2->currentIndex();
    switch(index)
  {
    case 0:
        {
            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Điện thoại di động");
            ui->cbxdmh_2->addItem("Máy tính bảng");
            ui->cbxdmh_2->addItem("Laptop");
            ui->cbxdmh_2->addItem("Máy tính để bàn");
            ui->cbxdmh_2->addItem("Âm thanh");
            ui->cbxdmh_2->addItem("Camera giám sát");
            ui->cbxdmh_2->addItem("Máy ảnh kỹ thuật số");
            ui->cbxdmh_2->addItem("Máy quay phim và máy quay hành động");
            ui->cbxdmh_2->addItem("Màn hình vi tính");
            ui->cbxdmh_2->addItem("Máy in");
            ui->cbxdmh_2->addItem("Đồng hồ thông minh");
            ui->cbxdmh_2->addItem("Máy chơi game");
            break;
        }
    case 1:
        {
            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Phụ kiện di động");
            ui->cbxdmh_2->addItem("Thiết bị thông minh");
            ui->cbxdmh_2->addItem("Thiết bị số");
            ui->cbxdmh_2->addItem("Phụ kiện máy ảnh");
            ui->cbxdmh_2->addItem("Phụ kiện máy bay camera");
            ui->cbxdmh_2->addItem("Thiết bị lưu trữ");
            ui->cbxdmh_2->addItem("Phụ kiện máy tính");
            ui->cbxdmh_2->addItem("Linh kiện máy tính");
            ui->cbxdmh_2->addItem("Phụ kiện ống kính");
            ui->cbxdmh_2->addItem("Thiết bị mạng");
            ui->cbxdmh_2->addItem("Phụ kiện máy chơi game");
            break;
        }
    case 2:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Tivi & Videos");
            ui->cbxdmh_2->addItem("Điện gia dụng nhỏ");
            ui->cbxdmh_2->addItem("Điện gia dụng lớn");
            ui->cbxdmh_2->addItem("Phụ kiện Tivi");
            break;
        }
    case 3:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Chăm sóc da");
            ui->cbxdmh_2->addItem("Trang điểm");
            ui->cbxdmh_2->addItem("Dụng cụ làm đẹp");
            ui->cbxdmh_2->addItem("Chăm sóc cơ thể");
            ui->cbxdmh_2->addItem("Chăm sóc tóc");
            ui->cbxdmh_2->addItem("Chăm sóc cá nhân");
            ui->cbxdmh_2->addItem("Dành cho nam giới");
            ui->cbxdmh_2->addItem("Nước hoa");
            ui->cbxdmh_2->addItem("Thực phẩm chức năng");
            ui->cbxdmh_2->addItem("Thực phẩm cho sắc đẹp");
            ui->cbxdmh_2->addItem("Sức khoẻ tình dục");
            ui->cbxdmh_2->addItem("Thiết bị y tế");
            break;
        }
    case 4:
        {
            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Tã bỉm & dụng cụ vệ sinh");
            ui->cbxdmh_2->addItem("Sữa bột & thức ăn cho bé");
            ui->cbxdmh_2->addItem("Thời trang cho bé");
            ui->cbxdmh_2->addItem("Đồ dùng ăn dặm & bú sữa");
            ui->cbxdmh_2->addItem("Xe, ghế & đai địu");
            ui->cbxdmh_2->addItem("Đồ dùng phỏng ngủ");
            ui->cbxdmh_2->addItem("Tắm gội & chăm sóc cơ thể");
            ui->cbxdmh_2->addItem("Đồ chơi cho bé");
            ui->cbxdmh_2->addItem("Đồ chơi điện tử và điều khiển từ xa");
            ui->cbxdmh_2->addItem("Đồ chơi thể thao & ngoài trời");
            ui->cbxdmh_2->addItem("Đồ chơi cho bé chập chững");
            ui->cbxdmh_2->addItem("Đồ chơi giáo dục");
            break;
        }
    case 5:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Sữa tiệt trùng & sữa bột");
            ui->cbxdmh_2->addItem("Đồ uống, bia, rượu");
            ui->cbxdmh_2->addItem("Thực phẩm từ sữa & đồ lạnh");
            ui->cbxdmh_2->addItem("Đồ hộp, Thực phẩm đóng gói");
            ui->cbxdmh_2->addItem("Kẹo & Socola & đồ ăn vặt");
            ui->cbxdmh_2->addItem("Nguyên liệu nấu ăn & làm bánh");
            ui->cbxdmh_2->addItem("Giấy & vệ sinh nhà cửa");
            ui->cbxdmh_2->addItem("Lau chùi vệ sinh nhà bếp");
            ui->cbxdmh_2->addItem("Đồ dùng giặt giũ");
            ui->cbxdmh_2->addItem("Phụ kiện thú cưng");
            ui->cbxdmh_2->addItem("Thức ăn và chăm sóc thú cưng");
            break;
        }
    case 6:
        {
            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Bếp & phòng ăn");
            ui->cbxdmh_2->addItem("Sửa chữa nhà cửa");
            ui->cbxdmh_2->addItem("Dụng cụ điện");
            ui->cbxdmh_2->addItem("Dụng cụ cầm tay");
            ui->cbxdmh_2->addItem("Phòng ngủ");
            ui->cbxdmh_2->addItem("Phòng tắm");
            ui->cbxdmh_2->addItem("Đèn & thiết bị đèn");
            ui->cbxdmh_2->addItem("Trang trí nhà cửa");
            ui->cbxdmh_2->addItem("Đồ nội thất");
            ui->cbxdmh_2->addItem("Văn phòng phẩm và thủ công");
            ui->cbxdmh_2->addItem("Sách & nhạc cụ");
            ui->cbxdmh_2->addItem("Thiết bị giặt & làm sạch");
            break;
         }
    case 7:
         {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Đầm nữ");
            ui->cbxdmh_2->addItem("Quần và chân váy");
            ui->cbxdmh_2->addItem("Áo nữ");
            ui->cbxdmh_2->addItem("Jumpsuits");
            ui->cbxdmh_2->addItem("Đồ đôi và gia đình");
            ui->cbxdmh_2->addItem("Đồ ngủ và nội y");
            ui->cbxdmh_2->addItem("Phụ kiện nữ");
            ui->cbxdmh_2->addItem("Giày nữ");
            ui->cbxdmh_2->addItem("Trang phục bé gái");
            ui->cbxdmh_2->addItem("Giày bé gái");
            break;
        }
    case 8:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Trang phục nam");
            ui->cbxdmh_2->addItem("Giày dép nam");
            ui->cbxdmh_2->addItem("Đồ lót nam");
            ui->cbxdmh_2->addItem("Phụ kiện thời trang nam");
            ui->cbxdmh_2->addItem("Trang phục bé trai");
            ui->cbxdmh_2->addItem("Giày bé trai");
            break;
        }
    case 9:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Đồng hồ nữ");
            ui->cbxdmh_2->addItem("Trang sức nữ");
            ui->cbxdmh_2->addItem("Kính mát");
            ui->cbxdmh_2->addItem("Kính thời trang");
            ui->cbxdmh_2->addItem("Túi xách nữ");
            ui->cbxdmh_2->addItem("Balo nữ");
            ui->cbxdmh_2->addItem("Đồng hồ nam");
            ui->cbxdmh_2->addItem("Trang sức nam");
            ui->cbxdmh_2->addItem("Túi xách nam");
            ui->cbxdmh_2->addItem("Túi đeo chéo nam");
            ui->cbxdmh_2->addItem("Vali & túi du lịch");
            ui->cbxdmh_2->addItem("Túi trẻ em");
            break;

        }
    case 10:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Giày thể thao nam");
            ui->cbxdmh_2->addItem("Trang phục nam");
            ui->cbxdmh_2->addItem("Giày thể thao nữ");
            ui->cbxdmh_2->addItem("Trang phục nữ");
            ui->cbxdmh_2->addItem("Vali & túi du lịch");
            ui->cbxdmh_2->addItem("Hoạt động dã ngoại");
            ui->cbxdmh_2->addItem("Thể thao và thể hình");
            ui->cbxdmh_2->addItem("Thể thao dùng vợt");
            ui->cbxdmh_2->addItem("Thể thao đồng đội");
            ui->cbxdmh_2->addItem("Đấm bốc và võ thuật");
            ui->cbxdmh_2->addItem("Thể thao dưới nước");
            ui->cbxdmh_2->addItem("Phụ kiện thể thao");
            break;
        }
    case 11:
        {

            ui->cbxdmh_2->clear();
            ui->cbxdmh_2->addItem("Xe máy");
            ui->cbxdmh_2->addItem("Chăm sóc ô tô");
            ui->cbxdmh_2->addItem("Trang trí nội thât ô tô");
            ui->cbxdmh_2->addItem("Trang trí ngoại thất ô tô");
            ui->cbxdmh_2->addItem("Phụ tùng & phụ kiện ô tô");
            ui->cbxdmh_2->addItem("Đồ điện tử dành cho ô tô");
            ui->cbxdmh_2->addItem("Dầu nhớt & phụ gia ô tô");
            ui->cbxdmh_2->addItem("Phụ tùng xe máy");
            ui->cbxdmh_2->addItem("Đồ bảo hộ khi đi xe máy");
            ui->cbxdmh_2->addItem("Phụ kiện & đồ chơi xe máy");
            ui->cbxdmh_2->addItem("Dầu nhớt & phụ gia xe máy");
            ui->cbxdmh_2->addItem("Vỏ ruột bánh xe máy & mâm");
            break;
        }
    }
}

void khohang::on_btnEditpldm_clicked()
{

    QString mahang=ui->lineEditid->text();
    for (int i =0;i<mahang.size();i++)
    {
        if (mahang[i].isPunct()||mahang[i].isSpace())
       {
            QMessageBox::information(this,"Xác nhận","Mã hàng không hợp lệ");
            return;
       }
    }

    string id= ui->lineEditid->text().toStdString();
    if(QMessageBox::question(this,"Xác nhận","Bạn có chắc chắn muốn sửa sản phẩm này?")==QMessageBox::Yes)
    {
        if (kiemtratontai (lkho,id) ==false)
        {
            QMessageBox::information(this,"Xác nhận","Mã hàng không tồn tại");
            return;
        }

    string pl = ui->cbxplh_2->currentText().toStdString();
    string dm = ui->cbxdmh_2->currentText().toStdString();

    SuaPhanLoaiHang(lkho,pl,id);
    SuaDanhMucHang(lkho,dm,id);
    ghikhohang(lkho);
    QMessageBox::information(this,"Xác nhận","Đã hoàn tất");
    ui->lineEditid->clear();
    return;

    }
}

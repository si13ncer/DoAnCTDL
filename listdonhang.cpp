#include "listdonhang.h"

void dateread(ifstream& filein, Date& Date) // đọc ngày tháng năm từ file
{
    filein >> Date.ngay;
    filein.seekg(1, 1); // dịch sang phải 1 byte để bỏ qua kí tự '/'
    filein >> Date.thang;
    filein.seekg(1, 1);
    filein >> Date.nam;
    filein.seekg(1,1);
}
void listdoninit(listdon& l)
{
    l.head = NULL;
    l.tail = NULL;
}
nodedon* nodedoninit(don d)
{
    nodedon* p = new nodedon;
    if (p == NULL)
    {
        cout << "Khong du bo nho cap phat";
    }
    p->data = d;
    p->prev = NULL;
    p->next = NULL;
    return p;
}
void addTaildon(listdon& l, nodedon *p)
{
    if (l.head == NULL)
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next = p;
        p->prev = l.tail;
        l.tail = p;
    }
}
void addHeaddon(listdon& l, nodedon *d)
{
    if (l.head == NULL)
    {
        l.head = l.tail = d;
    }
    else
    {
        l.head->prev = d;
        d->next = l.head;
        l.head = d;
    }
}
void readdon(ifstream& filein, don &d)
{
    getline(filein, d.ma.pref,'-');
    filein >> d.ma.stt;
    filein.seekg(1, 1);
    getline(filein, d.idmua, '|');
    getline(filein, d.loai, '|');
    getline(filein, d.ten, '|');
    getline(filein, d.mahang, '|');
    filein >> d.soluong;
    filein.seekg(1, 1);
    filein >> d.thanhtien;
    filein.seekg(1, 1);
    dateread(filein, d.ngaytao);
    getline(filein, d.thanhtoan,'|');
    getline(filein, d.vanchuyen,'|');
    getline(filein, d.trangthai,'|');
    getline(filein, d.ghichu);
}
void readlistdon(ifstream& filein, listdon& l)
{
    while (!filein.eof())// đọc đến cuối file thì dừng
    {
        don d;
        readdon(filein, d);
        if (d.ma.pref=="")
        {
            break;
        }
        nodedon* nd = nodedoninit(d);
        addTaildon(l, nd); // thêm node vào sau dslk
    }
}

void delHeaddon(listdon& l)
{
    nodedon* p = l.head; // node p là node sẽ xóa
    l.head = l.head->next;// cập nhật lại l.head là phần tử kế tiếp
    delete p;
}
void delTaildon(listdon& l)
{
    if (l.head->next == NULL)
    {
        return;
    }
    l.tail = l.tail->prev;
    l.tail->next = NULL;
}
void delSltdon(listdon& l, string s)
{
    if (l.head->data.mahang == s)
    {
        delHeaddon(l);
        return;
    }
    if (l.tail->data.mahang == s)
    {
        delTaildon(l);
        return;
    }

    nodedon* g = new nodedon; // node g là node trỏ đến node nằm trước node cần xóa: x
    nodedon* k = l.head;
    while (k)
    {
        if (k->data.mahang == s)
        {
            g->next = k->next; // cập nhật mối liên kết giữa node k với node sau node h
            delete k; // xóa node nằm sau node k
            return;
        }
        g = k; // cho node g trỏ đến node k
        k = k->next;
    }
}

void ghinodedon(ofstream& fileout, don d)
{
    fileout << d.ma.pref << "-";
    fileout << d.ma.stt << "|";
    fileout << d.idmua << "|";
    fileout << d.loai << "|";
    fileout << d.ten << "|";
    fileout << d.mahang << "|";
    fileout << d.soluong << "|";
    fileout << d.thanhtien << "|";
    fileout << d.ngaytao.ngay << "/" << d.ngaytao.thang << "/" << d.ngaytao.nam << "|";
    fileout << d.thanhtoan << "|";
    fileout << d.vanchuyen << "|";
    fileout << d.trangthai << "|";
    fileout << d.ghichu << "\n";
}
void ghilistdon(listdon l)
{
    ofstream fileout;
    fileout.open("data/dsdon.txt", ios::out);
    nodedon* k = l.head;
    while (k != NULL)
    {
        ghinodedon(fileout, k->data);
        k = k->next;
    }
    fileout.close();
}
void dmemfree(listdon &l)
{
    nodedon *p = NULL;
    while (l.head != NULL)
    {
        p = l.head;
        l.head= l.head->next;
        delete p;
    }
}

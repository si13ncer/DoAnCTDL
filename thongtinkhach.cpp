#include "thongtinkhach.h"
void lkinit(listk& l)
{
    l.head = NULL;
    l.tail = NULL;
}
nodek* nkinit(kh u)
{
    nodek* p = new nodek;
    if (p == NULL)
    {
        cout << "Khong du bo nho cap phat";
    }
    p->data = u;
    p->prev = NULL;
    p->next = NULL;
    return p;
}
void addTailk(listk& l, nodek* p)
{
    if (l.head == NULL)
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next = p; //ket noi voi danh sach
        p->prev = l.tail; //p tro ve node truoc
        l.tail = p; //luu lai vi tri cuoi
    }
}
void readkh(ifstream& filein, kh& k)
{
    getline(filein, k.id, '.');
    getline(filein, k.ten, '.');
    getline(filein, k.addr, '.');
    getline(filein, k.phone, '\n');

}
void readlk(ifstream& filein, listk& l)//đọc toàn bộ list trong file
{

    while (!filein.eof())// đọc đến cuối file thì dừng
    {
        kh k;
        readkh(filein, k);
        if (k.id == "") //check id rỗng ở cuối file
            break;
        nodek* kh = nkinit(k);
        addTailk(l, kh); // thêm node kh vào sau dslk
    }
}
void delKHead(listk& l)
{
    nodek* p = l.head; // node p là node sẽ xóa
    l.head = l.head->next;// cập nhật lại l.head là phần tử kế tiếp
    delete p;
}

void delKTail(listk& l)
{
    if (l.head->next == NULL)
    {
        delKHead(l);
        return;
    }
    nodek* k = l.head;
    while (k)
    {
        if (k->next == l.tail)// tìm phần tử gần cuối
        {
            delete l.tail;
            k->next = NULL; // cho con trỏ của node gần cuối trỏ đến vùng nhớ null
            l.tail = k; // cập nhật lại l.tail
            return;
        }
        k = k->next;
    }
}
void delKSlt(listk& l, string s)
{
    if (l.head->data.id == s)
    {
        delKHead(l);
        return;
    }
    if (l.tail->data.id == s)
    {
        delKTail(l);
        return;
    }

    nodek* g = new nodek; // node g là node trỏ đến node nằm trước node cần xóa: x
    nodek* k = l.head;
    while (k)
    {
        if (k->data.id == s)
        {
            g->next = k->next; // cập nhật mối liên kết giữa node k với node sau node h
            delete k; // xóa node nằm sau node k
            return;
        }
        g = k; // cho node g trỏ đến node k
        k = k->next;
    }
}
void ghinodekh(::ofstream& fileout, kh k)
{
    fileout << k.id << ".";
    fileout << k.ten << ".";
    fileout << k.addr<< "." ;
    fileout << k.phone<< "\n" ;
}
void ghilistkh(::listk l)
{
    ofstream fileout;
    fileout.open("E:/Source Code/DoAn/DoAnCTDL/data/thongtinkhach.txt", ios::out);
    nodek* k=l.head;
    while (k!=NULL)
    {
        ghinodekh(fileout, k->data);
        k=k->next;
    }
    fileout.close();
}
bool avaiableK(listk l,string id)//bool id avaiable in lk?
{
    nodek* k = l.head;
        while (k)
        {
            if (k->data.id == id)
            {
                return false;
            }
            k = k->next;
        }
    return true;
}

#include "dslkKho.h"

void khoitaokho(listkho& k)
{
    k.pHead=k.pTail=NULL;
}
nodehang* tao1node(hang h)
{
    nodehang *p= new nodehang;
    p->data=h;
    p->pNext=NULL;
    p->pPrev=NULL;
    return p;
}
void themcuoi(listkho& k, nodehang* p)
{
    if(k.pHead==NULL)
    {
        k.pHead=k.pTail=p;
    }
    else
    {
        k.pTail->pNext=p;
        p->pPrev=k.pTail;
        k.pTail=p;
    }
}
void xoadau(listkho &k)
{
    nodehang *p=k.pHead;
    k.pHead=k.pHead->pNext;
    delete p;
}
void xoacuoi(listkho &k)
{
    nodehang *p=k.pTail;
    k.pTail=k.pTail->pPrev;
    delete p;
}
void xoa(listkho &k, string s)
{
    if(k.pHead->data.id==s)
    {
        xoadau(k);
    }
    if(k.pTail->data.id==s)
    {
        xoacuoi(k);
    }
    else
    {
        nodehang *g=new nodehang;
        nodehang *p=k.pHead;
        while (p)
        {
            if (p->data.id == s)
            {
                g->pNext = p->pNext; // cập nhật mối liên kết giữa node p với node sau node h
                delete p; // xóa node nằm sau node p
                return;
            }
            g = p; // cho node g trỏ đến node k
           p = p->pNext;
        }
    }
}
void doc1hang(ifstream &Filein, hang &h)
{

    getline(Filein, h.pl, ',');//Nhap string phan loai hang
    Filein.seekg(1, 1);//Dich sang phai 1 bit ki tu
    getline(Filein, h.dm, ',');//Nhap string phan loai hang
    Filein.seekg(1, 1);//Dich sang phai 1 bit ki tu
    getline(Filein, h.name, ',');//Nhap string ten hang
    Filein.seekg(1, 1);//Dich sang phai 1 bit ki tu
    getline(Filein, h.id, ',');//Nhap sstring ma hang
    Filein.seekg(1, 1);//Dich sang phai 1 bit ki tu
    getline(Filein, h.day, ',');//Nhap sstring ma hang
    Filein.seekg(1, 1);//Dich sang phai 1 bit ki tu
    Filein >> h.price;//Nhap gia hang
    Filein.seekg(1, 2);//Dich sang phai 2 bit ki tu, bao gồm dấu "," và khoảng trắng
    Filein >> h.sl;
    string temp;
    getline(Filein, temp);
}
void dockhohang(ifstream& Filein, listkho& k)
{
    while (!Filein.eof())//Doc den cuoi thi dung
        {
            hang h;
            doc1hang(Filein, h);
            nodehang *p = tao1node(h);
            themcuoi(k, p);
        }
}
void ghi1hang (ofstream &Fileout,hang h)
{

    Fileout << h.pl << ", ";
    Fileout << h.dm << ", ";
    Fileout << h.name << ", ";
    Fileout << h.id << ", ";
    Fileout << h.day <<", ";
    Fileout << h.price << ", ";
    Fileout << h.sl;
}
void ghikhohang (listkho k)
{
    ofstream Fileout;
    Fileout.open ("C:/Users/a/Desktop/DoAnCTDL/data/khohang.txt",ios::out);
    for(nodehang *p=k.pHead;p!=NULL;p=p->pNext)
    {
        ghi1hang(Fileout,p->data);
    }

    Fileout.close();
}
bool kiemtratontai(listkho k, string name, string id)
{

    for (nodehang *p=k.pHead;p!=NULL;p=p->pNext)
    {
        if (p->data.name ==name ||p->data.id==id)
        {
            return true;
        }
    }
    return false;
}

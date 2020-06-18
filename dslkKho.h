#ifndef DSLKKHO_H
#define DSLKKHO_H
#include <iostream>
#include <string>
#include <fstream>
#include <QDate>
using namespace std;
#endif // DSLKKHO_H
struct hang
{
    string pl;
    string dm;
    string name;
    string id;
    int price;
    int sl;
    string day;

};
struct nodehang
{
    hang data;
    struct nodehang* pNext;
    struct nodehang* pPrev;
};
struct listkho
{
    nodehang* pHead;
    nodehang* pTail;
};
void khoitaokho(listkho& k);

nodehang* tao1node(hang j);

void themcuoi(listkho& k, nodehang* p);

void xoadau(listkho &k);

void xoacuoi(listkho &k);

void xoa(listkho &k, string s);

void doc1hang(ifstream &Filein, hang &h);

void dockhohang(ifstream& Filein, listkho& k);

void ghi1hang (ofstream &Fileout,hang h);

void ghikhohang (listkho k);

bool kiemtratontai(listkho k, string id);

bool kiemtracotontai(listkho k, string name, string id);

void SuaTenHang(listkho &kh, string thcs,string id);

void SuaNgayNhapHang(listkho &kh, string ngaycs,string id);

void SuaPhanLoaiHang(listkho &k, string plhcs,string id);

void SuaDanhMucHang(listkho &k, string dmhcs,string id);

void SuaMaHang(listkho &k, string mhcs,string id);

void SuaGiaHangCuaMaHang(listkho &kh, int gh, string id);

void SuaSoLuongCuaMaHang(listkho &kh, int sl, string id);
extern ::listkho lkho;


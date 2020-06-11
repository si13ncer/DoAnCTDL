#ifndef LISTDONHANG_H
#define LISTDONHANG_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct date
{
    int ngay;
    int thang;
    int nam;
};
struct madon
{
    string pref="LZD";
    int stt;
};
struct don
{
    madon ma;
    string idmua;
    string loai;
    string ten;
    string mahang;
    int soluong;
    int thanhtien;
    date ngaytao;
    string thanhtoan;
    string vanchuyen;
    string trangthai;
    string ghichu;
};
struct nodedon
{
    don data;
    nodedon* next;
    nodedon* prev;
};
struct listdon
{
    nodedon* head;
    nodedon* tail;
};

void dateread(ifstream& filein, date& date);
nodedon* nodedoninit(don d);
void listdoninit(listdon& l);
void addHeaddon(listdon& l, nodedon *d);
void readdon(ifstream& filein, don &d);
void readlistdon(ifstream& filein, listdon& l);
void ghinodedon(ofstream& fileout, don d);
void ghilistdon(listdon l);
extern listdon ldon;

#endif // LISTDONHANG_H

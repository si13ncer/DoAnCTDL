#ifndef VOUCHER_H
#define VOUCHER_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct date
{
    int d;
    int m;
    int y;
};
typedef struct date DATE;
struct voucher
{
    string ma;
    string ten;
    string loai;
    float giatri;
    string datefr,dateto;
};
struct nodevc {
    voucher data;
    struct nodevc* next;
    struct nodevc* prev;
};
struct listvc
{
    nodevc* head;
    nodevc* tail;
};

void Initvc(::listvc& l);
nodevc* nodeInitvc(voucher vc);
void addTailvc(::listvc& l, nodevc* p);
void delHeadvc(::listvc &l);
void delTailvc(::listvc &l);
void delSltvc(::listvc &l, string s);
void delVoucher(::listvc &l);
void readvoucher(ifstream &filein, voucher &vc);
void readlistvc(ifstream& filein, ::listvc& l);
void ghinodevoucher(ofstream& fileout, voucher vc);
void ghilistvoucher(::listvc l);
extern ::listvc lvc;
bool avaiable(::listvc l, string m);
#endif

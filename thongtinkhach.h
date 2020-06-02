#ifndef THONGTINKHACH_H
#define THONGTINKHACH_H

#endif // THONGTINKHACH_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct kh
{
    string id;
    string ten;
    string addr;
    string phone;
};
struct nodek
{
    kh data;
    nodek* prev;
    nodek* next;
};
struct listk
{
    nodek* head;
    nodek* tail;
};
void lkinit(listk& l);
nodek* nkinit(kh u);
void addTailk(listk& l, nodek* kh);
void readkh(ifstream& filein, kh& k);
void readlk(ifstream& filein, ::listk& l);
void delKHead(listk& l);
void delKTail(listk& l);
void delKSlt(listk& l, string s);
void ghinodekh(ofstream& fileout, kh k);
void ghilistkh(::listk l);
bool avaiableK(listk l,string id);
extern listk lkh;


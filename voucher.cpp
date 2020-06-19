#include "voucher.h"
#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

void Initvc(listvc& l)
{
    l.head = NULL;
    l.tail = NULL;
}
nodevc* nodeInitvc(voucher vc)
{
    nodevc* p = new nodevc;
    if (p == NULL)
    {
        cout << "Khong du bo nho";
    }
    p->data = vc;
    p->next = NULL; 
    p->prev = NULL;
    return p; 
}
void addTailvc(listvc& l, nodevc* p)
{
    if (l.head == NULL) 
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next=p;
        p->prev=l.tail; 
        l.tail = p; 
    }
}

void delHeadvc(listvc &l)
{
    nodevc *p = l.head;
    l.head = l.head->next;
    delete p;
}

void delTailvc(listvc &l)
{
    if (l.head->next == NULL)
    {
        delHeadvc(l);
        return;
    }
    nodevc *k = l.head;
    while (k)
    {
        if (k->next == l.tail)
        {
            delete l.tail;
            k->next = NULL; 
            l.tail = k; 
            return;
        }
        k = k->next;
    }
}
void delSltvc(listvc &l, string s)
{
    if (l.head->data.ma == s)
    {
        delHeadvc(l);
        return;
    }
    if (l.tail->data.ma == s)
    {
        delTailvc(l);
        return;
    }

    nodevc *g = new nodevc;
    nodevc *k = l.head;
    while (k)
    {
        if (k->data.ma == s)
        {
            g->next = k->next; 
            delete k; 
            return;
        }
        g = k; 
        k = k->next;
    }
}

void readvoucher(ifstream &filein, voucher &vc)
{
    
    getline(filein, vc.ma, '|');
    getline(filein, vc.ten, '|');
    getline(filein, vc.loai, '|');
    filein >> vc.giatri;
    filein.seekg(1,1);
    getline(filein, vc.datefr, '|');
    getline(filein, vc.datefr);
}
void readlistvc(ifstream& filein, listvc& l)
{

    while (!filein.eof())
    {
        voucher vc;
        readvoucher(filein, vc);
        if (vc.ma=="")
            break;
        nodevc *p = nodeInitvc(vc);
        addTailvc(l, p);
    }
}
void ghinodevoucher(ofstream& fileout, voucher vc) 
{
    fileout << vc.ma << "|";
    fileout << vc.ten << "|";
    fileout << vc.loai<< "|";
    fileout << vc.giatri<< "|";
    fileout << vc.datefr<< "|";
    fileout << vc.dateto<< "\n";
}
void ghilistvoucher(listvc l)
{
    ofstream fileout;
    fileout.open("data/voucher.txt", ios::out);
    for (nodevc* k = l.head; k != NULL; k = k->next)
    {
        ghinodevoucher(fileout, k->data);
    }
    fileout.close();
}
bool avaiable(listvc l,string ma)
{
    nodevc* k = l.head;
        while (k)
        {
            if (k->data.ma == ma)
            {
                return false;
            }
            k = k->next;
        }
    return true;
}

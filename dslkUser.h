#ifndef DSLKUSER_H
#define DSLKUSER_H

#endif // DSLKUSER_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct user
{
    string id;
    string pw;
    string pm;
};
struct node //khai báo node có kiểu dữ liệu user;
{
    user data;
    struct node* next;
    struct node* prev;
};
struct list
{
    node* head;
    node* tail;
};

void init(::list& l);
node* nodeinit(user u);
void addTail(::list& l, node* p);
void delHead(::list &l);
void delTail(::list &l);
void delSlt(::list &l, string s);
void readur(ifstream &filein, user &ur);
void readlist(ifstream& filein, ::list& l);
void ghinodeuser(ofstream& fileout, user ur);
void ghilistuser(::list l);
bool auth(::list l,string id, string pw);
extern ::list lur;//khai báo list user trên toàn bộ ct
extern string per;// biến permission
bool avaiable(::list l, string s);
extern string chosenone;
extern string usingid;
void urmemfree(::list &l);

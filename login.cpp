#include "login.h"
#include "ui_login.h"
#include "QString"
#include "mainwindow.h"

#include<iostream>
using namespace std;
#include<string>
#include<fstream>

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QString title="Đăng nhập";
    this->setWindowTitle(title);
}

login::~login()
{
    delete ui;
}
bool accept= false; // quyền truy cập

/*struct user
{
    string id;
    string pw;
    int pm;
};
struct node{
    user data;
    struct node *pNext;
};//khai báo node có kiểu dữ liệu user;
struct list
{
    node *pHead;
    node *pTail;
 };
 void init(::list &l)
 {
    l.pHead=NULL;
    l.pTail=NULL;
 }//khởi tạo node đầu và node cuối -> null (Chưa có phần tử)
 node *nodeinit (user u){
    node *p=new node;// cấp phát vùng nhớ cho node p
    if (p==NULL){
        cout << "Không đủ bộ nhớ để cấp phát";
    }
    p->data =u;
    p->pNext = NULL; // node đầu chưa có liên kết đến node nào -> null
    return p; //trả về node p vừa khởi tạo
}
 void addTail(::list &l, node *p) //thêm cuối
 {
     if (l.pHead==NULL)
     {
         l.pHead = l.pTail = p;
     }//Nếu danh sách rỗng thì node đầu là node cuối = p
     else
     {
         l.pTail->pNext;//con trỏ node cuối trỏ vào pNext
         l.pTail = p; //cập nhật lại pTail là node p
      }
 }
 //đọc 1 user từ file
 void account(ifstream &filein, user &ur)
 {
     // id
     getline(filein, ur.id, ',');// đọc đến dấu ',' thì dừng
     // pw
     getline(filein, ur.pw, ',');
     // permission
     filein >> ur.pm;
 }
 void accdata(ifstream &filein, ::list &l)//đọc toàn bộ user trong file
 {
     // đọc đến cuối file thì dừng
     while (!filein.eof())
     {

         user ur;
         account(filein, ur);
         node *p = nodeinit(ur);
         // thêm node p vào sau dslk
         addTail(l, p);
     }
 }
 int main()
 {
     ::list l;// khởi tạo dslk
     init(l);
     ifstream filein;
         filein.open("E:/Source Code/DoAn/DoAnCTDL/data/user.txt", ios::in);
     accdata(filein, l);//tạo dslk từ file
 }
*/


void login::on_btnLog_clicked()
{
    QString id = ui->leditID->text();
    QString pw = ui->leditPW->text();
    //kiểm tra đầu vào id pw
    for (int i =0;i<id.size();i++)
    {
        if (!id[i].isDigit() && !id[i].isLetter())
       {
            ui->statusbar->showMessage("Username không hợp lệ! Chỉ được dùng chữ và số.");
        }
    }
    for (int i =0;i<pw.size();i++)
    {
        if (!pw[i].isDigit() && !pw[i].isLetter())
       {
            ui->statusbar->showMessage("Password không hợp lệ! Chỉ được dùng chữ và số.");
        }
    }
    if (accept==true)
    {
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();
    }
}

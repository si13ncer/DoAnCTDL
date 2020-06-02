#include "dslkUser.h"

using namespace std;

void init(list& l)//khởi tạo list  node đầu và node cuối -> null (Chưa có phần tử)
{
    l.head = NULL;
    l.tail = NULL;
}
node* nodeinit(user u)// khởi tạo node 
{
    node* p = new node;// cấp phát vùng nhớ cho node p
    if (p == NULL)
    {
        cout << "Không đủ bộ nhớ để cấp phát";
    }
    p->data = u;
    p->next = NULL; // node đầu chưa có liên kết đến node nào -> null
    p->prev = NULL;//
    return p; //trả về node p vừa khởi tạo
}
void addTail(list& l, node* p) //thêm node vào cuối list
{
    if (l.head == NULL) //Nếu danh sách rỗng thì node đầu là node cuối = p
    {
        l.head = l.tail = p;
    }
    else
    {
        l.tail->next=p;//con trỏ node cuối trỏ vào next
        p->prev=l.tail; //Prev trỏ vào đuôi cũ
        l.tail = p; //cập nhật lại tail là node p
    }
}

void delHead(list &l)
{
    node *p = l.head; // node p là node sẽ xóa
    l.head = l.head->next;// cập nhật lại l.head là phần tử kế tiếp
    delete p;
}

void delTail(list &l)
{
    if (l.head->next == NULL)
    {
        delHead(l);
        return;
    }
    node *k = l.head;
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
void delSlt(list &l, string s)
{
    if (l.head->data.id == s)
    {
        delHead(l);
        return;
    }
    if (l.tail->data.id == s)
    {
        delTail(l);
        return;
    }

    node *g = new node; // node g là node trỏ đến node nằm trước node cần xóa: x
    node *k = l.head;
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
void readur(ifstream &filein, user &ur)//đọc 1 user từ file
{
    // id
    getline(filein, ur.id, ',');// đọc đến dấu ',' thì dừng
    // pw
    getline(filein, ur.pw, ',');
    // permission
    getline(filein, ur.pm);
}
void readlist(ifstream& filein, list& l)//đọc toàn bộ user trong file
{

    while (!filein.eof())// đọc đến cuối file thì dừng
    {
        user ur;
        readur(filein, ur);
        if (ur.id=="") //check id rỗng ở cuối file
            break;
        node *p = nodeinit(ur);
        addTail(l, p); // thêm node p vào sau dslk
    }
}
void ghinodeuser(ofstream& fileout, user ur) //ghi node vào file
{
    fileout << ur.id << ",";
    fileout << ur.pw << ",";
    fileout << ur.pm << "\n";
}
void ghilistuser(list l) //ghi toàn bộ list
{
    ofstream fileout;
    fileout.open("E:/Source Code/DoAn/DoAnCTDL/data/user.txt", ios::out);
    for (node* k = l.head; k != NULL; k = k->next)
    {
        ghinodeuser(fileout, k->data);
    }
    fileout.close();
}
bool auth(list l,string id, string pw)//bool find account in list?
{
    node* k = l.head;
        while (k)           
        {
            if (k->data.id == id)
            {
                if (k->data.pw == pw)
                {
                    usingid=k->data.id;
                    per=k->data.pm;
                    return true;
                }
            }
            k = k->next;
        }
    return false;

}
bool avaiable(list l,string id)//bool account id avaiable?
{
    node* k = l.head;
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

// 66.class library
// {
// char
// bname[20];
// float price;
// char
// putname[20];int
// ISBN No;
// public:
// getdata();putdat();
// };
// implement using constructor
#include<iostream>
#include<string.h>
using namespace std;
class book
{
    public:
    int price,ISBN_No;
    char name[100];

    book()
    {
        cout<<"Enter The Book Name:->";
        fflush(stdin);
        gets(name);
        cout<<"Enter The Book Price:->";
        cin>>price;
        cout<<"Enter The ISBN No:->";
        cin>>ISBN_No;
    }
    book(char ch[100],int d,int e)
    {
        strcpy(name,ch);
        price=d;
        ISBN_No=e;
    }
    book(book &d)
    {
        strcpy(name,d.name);
        price=d.price;
        ISBN_No=d.ISBN_No;
    }
    void show()
    {
        cout<<endl<<"NAME OF BOOK:->"<<name<<endl<<"PRICE OF BOOK:->"<<price<<endl
            <<"ISBN_NO OF BOOK:->"<<ISBN_No<<endl;
    }
    ~book()
    {
        cout<<"Distructor"<<endl;
    }
};
int main()
{
    book s,s1(s.name,s.price,s.ISBN_No),s2(s1);
    s1.show();
    s2.show();
    return 0;
}
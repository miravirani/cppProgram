// Pointer:
// 85.WAP to create class product having item name,code,and price and display product purchased by a
// person using pointer to object concept.
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    long int i_no;
    char name[100];
    virtual void set()
    {
        cout<<"Enter the item number::->";
        cin>>i_no;
        cout<<"Enter the item name::->";
        fflush(stdin);
        gets(name);
    }
    virtual void show()
    {
        cout<<"ITEM NAME:->"<<i_no<<endl;
        cout<<"NAME:->";
        puts(name);

    }
};
class B:public A
{
    public:
    int price,qnt,ta;
    void set()
    {
        cout<<"Enter the item price::->";
        cin>>price;
        cout<<"Enter the iteam quality::->";
        cin>>qnt;
    }
    void show()
    {
        ta=price*qnt;
        cout<<"Total Amount::->"<<ta<<endl;
    }
};
int main()
{
    B a;
    A s;
    A *ptr;

    ptr =&s;
    ptr->set();
    ptr->show();

    ptr =&a;
    ptr->set();
    ptr->show();
}

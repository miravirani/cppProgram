// 77.WAP foe Multiple Inheritance
// Item item info
// Item no price
// Item name quantity
// amount total
// amount
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    long int i_no;
    char name[100];
    void get()
    {
        cout<<"Enter the item number::->";
        cin>>i_no;
        cout<<"Enter the item name::->";
        fflush(stdin);
        gets(name);
    }
};
class B
{
    public:
    int price,qnt;
    void set()
    {
        cout<<"Enter the item price::->";
        cin>>price;
        cout<<"Enter the iteam quality::->";
        cin>>qnt;
    }
};
class C:public A,public B
{
    public:
    int ta;
    void show()
    {
        ta=price*qnt;
        cout<<"Total Amount::->"<<ta<<endl;
    }
};
int main()
{
    C s;
    s.get();
    s.set(); 
    s.show(); 
}
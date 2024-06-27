// 71.WAP for single inheritancenumber a , b
//    getdata display addition
//    sum( )
//    dispsum( )
#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    void set()
    {
        cout<<"Enter The Value Of A:->";
        cin>>a;
        cout<<"Enter The Value Of B:->";
        cin>>b;
    }
    void show()
    {
        cout<<"A:->"<<a<<endl<<"B:->"<<b<<endl;
    }
};
class B:public A
{
        public:
        void sum()
        {
            cout<<"ADDITION:->"<<a+b;
        }
};
int main()
{
    B d;
    d.set();
    d.show();
    d.sum();
}
// 74.WAP for multi-level
// Employee
// Empno
// Name
// Basic salary
// allowance
// DA
// HRA
// RA
//  total
// gross salary
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    int bs;
    char name[100];
    void setA()
    {
        cout<<endl<<"Enter The Name Of Employe:->";
        fflush(stdin);
        gets(name);
        cout<<"Enter Employe Basic Salary:->";
        cin>>bs;
    }
    void showA()
    {
        cout<<"NAME:->";
        puts(name);
        cout<<"BASIC SALARY:->"<<bs;
    }
};
class B:public A
{
    public:
    long int da,hra,ra,ts;
    void setB()
    {
        da=0.40*bs;
        ra=0.10*bs;
        hra=0.20*bs;
    }
    void showB()
    {
        cout<<endl<<"DA:->"<<da<<endl<<"RA:->"<<ra<<endl
            <<"HRA:->"<<hra<<endl;
    }
};
class C:public B
{
    public:
    long int ts;
    void setC()
    {
        ts=da+ra+hra+bs;
        cout<<endl<<"TOTAL SALARY:->"<<ts;
    }
};
int main()
{
    C s;
    s.setA();
    s.showA();
    s.setB();
    s.showB();
    s.setC();
}
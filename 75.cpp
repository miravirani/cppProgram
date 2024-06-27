// 75.
// WAP for Hybrid inheritance
// Person
// name
// code
// account 
// salary
// admin
// experience
// information
// name
// code
// salary
// experience
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    char name[100];
    int code;
    void setA()
    {
        cout<<"Enter The Epmploye Name:->";
        fflush(stdin);
        gets(name);
        cout<<"Enter The Epmploye Code:->";
        cin>>code;
    }
};
class B:virtual public A
{
    public:
    int salary;
    void setB()
    {
        cout<<"Enter The Salary Of Employe:->";
        cin>>salary;
    }
};
class C:virtual public A
{
    public:
    int ex;
    void setC()
    {
        cout<<"Enter The EXPERINCE Of Employe:->";
        cin>>ex;
    }
};
class D:public B,public C
{
    public:
    void setD()
    {
        cout<<endl<<"EMPLOYE NAME:->";
        puts(name);
        cout<<"EMPLOYE CODE:->"<<code<<endl
            <<"EMPLOYE SALERY:->"<<salary<<endl
            <<"EMPLOYE EXPERINCE:->"<<ex<<endl;

    }
};
int main()
{
    D s;
    s.setA();
    s.setB();
    s.setC();
    s.setD();
}
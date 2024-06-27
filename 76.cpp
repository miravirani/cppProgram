// 76.WAP for Hierarchical Inheritance
// Account
// a/c no
// name bal
// withdraw deposite
// withdraw amount deposite amount
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    int ac_no,balence;
    char name[100];
    void setA()
    {
        cout<<endl<<endl<<"Enter The ACCOUNT No:->";
        cin>>ac_no;
        cout<<"Enter The Name:->";
        fflush(stdin);
        gets(name);
        cout<<"Enter The Balence:->";
        cin>>balence;
    }
};
class B:public A
{
    public:
    int dp,tb;
    void setB()
    {
        cout<<"Enter The Vlaue For Deposite:->";
        cin>>dp;
        tb=balence+dp;
        {
            cout<<"Your Corrent Balance Is:->"<<tb;
        }

    }
};
class C:public A
{
    public:
    int wd,tb;
    void setC()
    {
        cout<<"Enter The Vlaue For Withdrow:->";
        cin>>wd;
        if(wd>balence)
        {
             cout<<"sorry!...Your Balnce Is Low...!";
        }
        else
        {
            cout<<"Withdrow Is Succesfully";
            tb=balence-wd;
            cout<<endl<<"TOtal Balance:->"<<tb;
        }
    }
};
int main()
{
    B bb;
    C cc;
    bb.setA();
    bb.setB();
    cc.setA();
    cc.setC();
    return 0;
}
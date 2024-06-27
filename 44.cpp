//44.WAP for various mathematical operation using class & object

#include<iostream>
using namespace std;

class mathematical
{
    int a,b;
    public :
    void get()
    {
        cout<<"enter the a=";
        cin>>a;
        cout<<"enter the b=";
        cin>>b;
    }
    void sum()
    {
        cout<<"Sum:"<<a+b;
    }
    void sub()
    {
        cout<<"subtraction is :"<<a-b;
    }
    void mul()
    {
        cout<<"multiplication is :"<<a*b;
    }
    void div()
    {
        cout<<"divition is :"<<a/b;
    }
    void mod()
    {
        cout<<"modulo is :"<<a%b;
    }

};

int main()
{
    int n,i,a;
    mathematical k;
    cout<<"How Many Time You Want Process:->";
    cin>>a;
    for(i=1;i<=a;i++)
    {
     cout<<"1-> sum"<<endl
        <<"2-> subtraction"<<endl
        <<"3-> multiplication"<<endl
        <<"4-> divition"<<endl
        <<"5-> modulo"<<endl;
     k.get();
     cout<<"enter the choise=";
     cin>>n;
    }
    switch(n)
    {
        case 1:
        {
            k.sum();
            break;
        }
        case 2:
        {
            k.sub();
            break;
        }
        case 3:
        {
            k.mul();
            break;
        }
        case 4:
        {
            k.div();
            break;
        }
        case 5:
        {
            k.mod();
            break;
        }
        default :
        {
            cout<<"pls enter the valid option ";
        }
    }

}
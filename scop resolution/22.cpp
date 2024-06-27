#include<iostream>
using namespace std;
int a=100,b=80;
int main()
{
    int a=90,b=80;
    {
        int a=30,b=50;
        cout<<"a:->"<<a<<endl;
        cout<<"b:->"<<b<<endl;
        cout<<"a+b="<<a+b<<endl;
        cout<<"a-b="<<a-b<<endl;
        cout<<"a*b="<<a*b<<endl;
        cout<<"a/b="<<a/b<<endl;

    } 
        cout<<"a+b="<<a+b<<endl;
        cout<<"a-b="<<a-b<<endl;
        cout<<"a*b="<<a*b<<endl;
        cout<<"a/b="<<a/b<<endl;
        cout<<"a+b="<<::a+b<<endl;
        cout<<"a-b="<<::a-b<<endl;
        cout<<"a*b="<<::a*b<<endl;
        cout<<"a/b="<<::a/b<<endl;
        
    return 0;
}
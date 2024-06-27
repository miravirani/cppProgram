#include<iostream>
using namespace std;
int a=100;
int main()
{
    int a=90;
    {
        int a=30;
        cout<<"a:->"<<a<<endl;
    }
    cout<<"a="<<a<<endl;
    cout<<"a="<<::a<<endl;
    return 0;
}
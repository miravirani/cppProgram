#include<iostream>
#include<string.h>
using namespace std;
void adding(int a,int b)
{
    cout<<"sum="<<a+b<<endl;
}
void adding(char c[100],char d[100])
{
    cout<<"concatnet:->"<<strcat(c,d);
}
int main()
{
    int a,b;
    char c[100],d[100];
    cout<<"Enter the value of a:->";
    cin>>a;
    cout<<"Enter the value of b:->";
    cin>>b;
    cout<<"Enter the value of c:->";
    cin>>c;
    cout<<"Enter the value of d:->";
    cin>>d;
    adding(a,b);
    adding(c,d);
    return 0;
}
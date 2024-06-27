#include<iostream>
#include<cmath>
using namespace std;
void power(int m,int n);
void power(int m);
int main()
{
    int m,n;
    cout<<"enter the value of m:->";
    cin>>m;
    cout<<"enter the value of n:->";
    cin>>n;
    if(n!=0)
    power(m,n);
    else
    power(m);
    return 0;
}
void power(int m,int n)
{
    cout<<"m to power n:->"<<pow(m,n);
}
void power(int m)
{
     cout<<"square of m:->"<<pow(m,2);
}
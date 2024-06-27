#include<iostream>
using namespace std;
void rate(float p,float t,float r=0)
{
    cout<<"simple intrest value is::"<<(p*r*t)/100;
}
int main()
{
    float p,r=2.5,t;
    cout<<"enter the value of money::->";
    cin>>p;
    cout<<"enter the time ::->";
    cin>>t;
    rate(p,r,t);
    return 0;
}
#include<iostream>
using namespace std;
void volume(int r)
{
    cout<<"cube is:->"<<(r*r*r)<<endl;
}
void volume(float pi,int r,int h)
{
    cout<<"cylinder is:->"<<(pi*(r*r)*h)<<endl;
}
void volume(int l,int b,int h)
{
    cout<<"rectangular box is:->"<<(l*b*h)<<endl;
}
int main()
{
    int r,l,b,h;
    float pi=3.14;
    cout<<"Enter the value of r:->";
    cin>>r;
    cout<<"Enter the value of h:->";
    cin>>h;
    cout<<"Enter the value of l:->";
    cin>>l;
    cout<<"Enter the value of b:->";
    cin>>b;
    volume(r);
    volume(pi,r,h);
    volume(l,b,h);
    return 0;

}
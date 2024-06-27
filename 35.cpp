// #include<iostream>
// using namespace std;
// void rate(float r,float pi=0)
// {
//     cout<<"simple intrest value is::"<<(pi*r*r);
// }
// int main()
// {
//     float r,pi=3.14;
//     cout<<"enter the value of r::->";
//     cin>>r;
//     rate(r,pi);
//     return 0;
// }
#include<iostream>
using namespace std;
void area(float r,const float pi=0)
{
    cout<<"area of circle is::"<<(pi*r*r);
}
int main()
{
    float r,pi=3.14;
    cout<<"enter the value of r::->";
    cin>>r;
    area(r,pi);
    return 0;
}
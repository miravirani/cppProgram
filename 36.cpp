#include<iostream>
using namespace std;
void shape(float b,float r,const float pi=0)
{
    cout<<"area of circle is:->"<<(pi*r*r)<<endl;
    cout<<"area of ractangle is:->"<<(r*b)<<endl;
    cout<<"area of tringle is:->"<<(0.5*r*b)<<endl;
    cout<<"area of square is:->"<<(r*r);

}
int main()
{
    float b,r,pi=3.14;
    cout<<"enter the value of r::->";
    cin>>r;
    cout<<"Enter the value of b:->";
    cin>>b;
    shape(b,r,pi);
    return 0;
}
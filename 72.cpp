// 72 WAP for single inheritance
// Data
// p,r,n
// getdata
// display
// simple interest
// calculateinterest()
// display
// interest()
#include<iostream>
using namespace std;
class A
{
    public:
    float p,r,n;
    void set()
    {
        cout<<"enter the principal value::->";
        cin>>p;
        cout<<"enter the rate::->";
        cin>>r;
        cout<<"enter the month::->";
        cin>>n;
    }
    void show()
    {
        cout<<"principle::->"<<p<<endl
            <<"rate::->"<<r<<endl
            <<"month::->"<<n<<endl;
    }
};
class B:public A
{
    public:
    float si;
    void simplerate()
    {
        si=(p*r*n)/100;
        cout<<"simple intraste::->"<<si<<endl;
    }
};
int main()
{
    B s;
    s.set();
    s.show();
    s.simplerate();
}
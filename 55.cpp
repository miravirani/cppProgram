//55.Find out mean of two number using friend function((a+b)/2)
#include<iostream>
using namespace std;

class avarage
{
    int a,b,ave;

    public:
    void set()
    {
        cout<<endl<<"Enter The VAlue of a:->";
        cin>>a;
        cout<<"Enter The VAlue of b:->";
        cin>>b;
    }
    void show()
    {
        cout<<"a:->"<<a<<endl<<"b:->"<<b<<endl;
    }
friend void avg(avarage &obja);
};
void avg(avarage &c)
{
    c.ave=(c.a+c.b)/2; 
    cout<<"Average:->"<<c.ave; 
}
int main()
{
    avarage a;
    int i,n;
    cout<<"How Many Times You Want This Process:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    a.set();
    a.show();
    avg(a);
    }
    return 0;
}
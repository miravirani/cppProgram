//56.WAP to find largreatest value from two different classes using friend function
#include<iostream>
using namespace std;

class maximum1;
class maximum
{
    int a;

    public:
    void set()
    {
        cout<<endl<<"\nEnter The VAlue of a:->";
        cin>>a;
    }
    void show()
    {
        cout<<"a:->"<<a<<endl;
    }
friend void max(maximum &c,maximum1 &d);
};
class maximum1
{
    int b;

    public:
    void set()
    {
        cout<<"Enter The VAlue of b:->";
        cin>>b;
    }
    void show()
    {
        cout<<"b:->"<<b<<endl;
    }
friend void max(maximum &c,maximum1 &d);
};

void max(maximum &c,maximum1 &d)
{
    if(c.a>d.b)
    {
    cout<<"A is Maximum";
    }
    else
    {
    cout<<"B is Maximum";
    }
}
int main()
{
    maximum m ;
    maximum1 s;
    int i,n;
    cout<<"How Many Times You Want This Process:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    m.set();
    m.show();
    s.set();
    s.show();
    max(m,s);
    }
    return 0;
}
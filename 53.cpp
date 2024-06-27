//53.Find out minimum from three no. using friend function
#include<iostream>
using namespace std;

class minimum
{
    int a,b,c;

    public:
    void set()
    {
        cout<<endl<<"Enter The VAlue of a:->";
        cin>>a;
        cout<<"Enter The VAlue of b:->";
        cin>>b;
        cout<<"Enter The VAlue of c:->";
        cin>>c;
    }
    void show()
    {
        cout<<"a:->"<<a<<endl<<"b:->"<<b<<endl<<"c:->"<<c<<endl;
    }
friend void min(minimum &obja);
};
void min(minimum &obja)
{
    if(obja.a<obja.b)
    cout<<"A is minimum";
    else if (obja.b<obja.c)
    {
    cout<<"B is minimun";
    }
    else
    {
    cout<<"c is minimum";
    }    
}
int main()
{
    minimum m[50];
    int i,n;
    cout<<"How Many Times You Want This Process:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    m[i].set();
    m[i].show();
    min(m[i]);
    }
    return 0;
}
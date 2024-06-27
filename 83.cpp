//83.c++ program to overload the binary operators like +, -, *, /.
#include<iostream>
#include<string.h>
using namespace std;
class arithmatic
{
    int a;
    public:

    void set()
    {
        cout<<"Enter The Value Of A:->";
        cin>>a;
    }
    void show()
    {
        cout<<"A:->"<<a;
    }
    arithmatic operator + (arithmatic &b)
    {
        arithmatic h;
        h.a=a+b.a;
    }
     arithmatic operator - (arithmatic &c)
    {
        arithmatic h;
        h.a=a-c.a;
    }
      arithmatic operator * (arithmatic &d)
    {
        arithmatic h;
        h.a=a*d.a;
    }
       arithmatic operator / (arithmatic &e)
    {
        arithmatic h;
        h.a=a/e.a;
    }
};
int main()
{
    arithmatic s,s1,s2;
    s.set();
    s1.set();
    s2=s+s1;
    cout<<endl<<"A+B::->";
    s2.show();
    s2=s-s1;
    cout<<endl<<"A-B::->";
    s2.show();
    s2=s*s1;
    cout<<endl<<"A*B::->";
    s2.show();
    s2=s/s1;
    cout<<endl<<"A/B::->";
    s2.show();
}
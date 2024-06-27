//81.operator overloading using unary operator (- -)
#include<iostream>
#include<string.h>
using namespace std;
class num
{
    int a,b;
    public:

    void set()
    {
        cout<<endl<<endl<<"Enter The Value Of a:->";
        cin>>a;
        cout<<"Enter The Value Of b:->";
        cin>>b;
    }
    num operator --()
    {
        a--;
        b--;
        cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    num s,s1,s2;
    s.set();
    s2=--s;
    s1.set();
    s2=--s1;
}
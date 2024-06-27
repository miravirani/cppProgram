//54.Swapping of two values using friend function
#include<iostream>
using namespace std;

class swaping
{
    int a,b,a1,b1;

    public:
    void set()
    {
        cout<<endl<<"Enter The Value of a:->";
        cin>>a;
        cout<<"Enter The Value of b:->";
        cin>>b;
        cout<<endl<<"Enter The Value of a1:->";
        cin>>a1;
        cout<<"Enter The Value of b1:->";
        cin>>b1;
    }
    void show()
    {
        cout<<"a:->"<<a<<endl<<"b:->"<<b<<endl
            <<"a1:->"<<a1<<endl<<"b1:->"<<b1<<endl;
    }
    friend void swap(swaping &obja);
};
void swap(swaping &obja)
{
    obja.a=obja.a+obja.a1;
    obja.a1=obja.a-obja.a1;
    obja.a=obja.a-obja.a1;

    obja.b=obja.b+obja.b1;
    obja.b1=obja.b-obja.b1;
    obja.b=obja.b-obja.b1;
    cout<<endl<<"***swapping value***";
    cout<<endl<<"a="<<obja.a<<endl<<"b="<<obja.b
        <<endl<<endl<<"a1="<<obja.a1<<endl<<"b1="<<obja.b1;
}
int main()
{
    swaping s;
    s.set();
    s.show();
    swap(s);
}




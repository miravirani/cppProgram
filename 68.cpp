// 68.
// WAP to find maximum from two values using following
// multiple
// A
// Data member : x
// function get_x( )
// B
// Data member: y
// function get_y( )
// C
// function max ()
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void setA()
    {
        cout<<"Enter The Vlaue Of A:->";
        cin>>a;
    }
    void showA()
    {
        cout<<"VALUE OF A:->"<<a;
    }
};
class B
{
    public:
    int b;
    void setB()
    {
        cout<<endl<<"Enter The Vlaue Of B:->";
        cin>>b;
    }
    void showB()
    {
        cout<<"VALUE OF B:->"<<b;
    }
};
class C:public B,public A
{
    public:
    void find()
    {
        if(a>b)
        {
            cout<<endl<<"A IS MAXIMUM";
        }
        else
        {
            cout<<endl<<"B IS MAXIMUM";
        }
    }
};
int main()
{
    C cc;
    cc.setA();
    cc.showA();
    cc.setB();
    cc.showB();
    cc.find();
    return 0;
}
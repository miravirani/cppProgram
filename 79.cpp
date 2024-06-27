// Virtual Function:

// 79.WAP for pure virtual function
// Shape
// Width
// height
// getarea( ) ------>make this function as pure
// virtual function
//  Rectangle Triangle
// getsides( w,h) getsides(w,h)
// getarea( ) getarea( )
//  Rectangle area= width * height
// Triangle area= (width * height)/2
#include<iostream>
#include<string.h>
using namespace std;
class shape
{
    public:
    float w,h,ra,ta;

    virtual void  set()
    {
        cout<<"Enter The Value Of Width:->";
        cin>>w;
        cout<<"Enter The Value Of Height:->";
        cin>>h;
        ra=w*h;
    }
    virtual void show()
    {
        cout<<"In shape class"<<endl
            <<"Width="<<w<<endl
            <<"Height="<<h<<endl
            <<"Rectangle Area="<<ra<<endl;
    }
};
class area:public shape
{
    public:
    void set()
    {
        cout<<"In Area Class"<<endl
            <<"Enter The Value Of Width:->";
        cin>>w;
        cout<<"Enter The Value Of Height:->";
        cin>>h;
        ta=(w*h)/2;

    }
    void show()
    {
        cout<<"In Area Class"<<endl
            <<"Width:->"<<w<<endl
            <<"Height:->"<<h<<endl
            <<"Triangle Area="<<ta<<endl;

    }
};
int main()
{
    area a;
    shape s;
    shape *ptr;

    ptr=&s;
    ptr->set();
    ptr->show();

    ptr=&a;
    ptr->set();
    ptr->show();
}
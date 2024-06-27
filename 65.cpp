// 65.create a class called shape which has private data member "area" which will be used to get value for
// finding area of square, rectangle and circle by using default, parameterized and copy constructor
#include<iostream>
using namespace std;
class area
{
    int r,b;
    float pi=3.14;
    public:

    float as,ar,ac;
    area()
    {
    cout<<"Enter the value of r:->";
    cin>>r;
    cout<<"Enter the value of b:->";
    cin>>b;
    as=r*b*b;
    ar=r*b;
    ac=pi*r*r;
    }
    area(float a,float b,float c)
    {
        as=a;
        ar=b;
        ac=c;
    }
    area(area &d)
    {
        as=d.as;
        ar=d.ar;
        ac=d.ac;

    }
    void show()
    {
      cout<<endl<<"AREA OF SQUAR:->"<<as<<endl
          <<"AREA OF RECTANGlE:->"<<ar<<endl
          <<"AREA OF CIRCLE:->"<<ac<<endl;   
    }
};
int main()
{
    area s,s1(s.as,s.ar,s.ac),s2(s1);
    s1.show();
    s2.show();

}
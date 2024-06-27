// 84.find area of two circles, which have different radius also find which area of circle is greater to
// overload>operator
#include<iostream>
#include<string.h>
using namespace std;
class area
{
    int r,ac;
    float pi=3.14;

    public:
    void set()
    {
      cout<<"Enter The Vlaue Of r:->";
      cin>>r;
      ac=pi*r*r;
    }
    void show()
    {
        cout<<endl<<"R:->"<<r<<endl
            <<"AREA OF CIRCLE:->"<<ac<<endl;        
    }
    area operator > (area &a)
    {
        area s;
        if(ac>a.ac)
        {
            cout<<"ac is max";
        }
        else
        {
            cout<<"a.ac is max";
        }
         return s;
    }
};
int main()
{
    area t,t1,t2;
    t.set();
    t.show();
    t1.set();
    t1.show();
    t2=t>t1;
}

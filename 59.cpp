//59.create two classes named "length" and "Distance" which canconvert meter to Kilometer using friend
//function
#include<iostream>
using namespace std;

class Distance;
class langht
{
    float mtr;

    public :
    void set()
    {
        cout<<endl<<"Enter The Total Meter:->";
        cin>>mtr;
    }
    void show()
    {
        cout<<"METER:->"<<mtr;
    }
    friend void convert(langht &a,Distance &b);
};
class Distance
{
    float kimi,kimi1;

    public :
    void set()
    {
        cout<<endl<<"Enter The Total KiloMeter1:->";
        cin>>kimi1;
    }
    void show()
    {
        cout<<endl<<"KILOMETER1:->"<<kimi1;
    }
    
    friend void convert(langht &a,Distance &b);
};
void convert(langht &a,Distance &b)
{
    b.kimi=a.mtr+b.kimi1;
    a.mtr=b.kimi/1000;
    
    cout<<endl<<"SUM:->"<<b.kimi<<endl
        <<"Convet In Meter To Kilometer:->"<<a.mtr;
}
int main()
{
    langht s;
    Distance s1;
    s.set();
    s.show();
    s1.set();
    s1.show();
    convert(s,s1);
}
    //Static Data member & Function:
//60.WAP to count the total no. of created object using static member and static function
#include<iostream>
using namespace std;
/*class simple
{
    static float roi;
    int p,n;
    float si;

    public:
    void set()
    {
        cout<<endl<<"Enter The Principal Amount:->";
        cin>>p;
        cout<<"Enter The Time Limite:->";
        cin>>n;
    }
    void calculate()
    {
        si=(p*roi*n)/100;
        cout<<"SIMPLE INTREST:->"<<si;
    }
};
float simple ::roi=7.5;
int main()
{
    simple s;
    int i,n;
    cout<<"How Many Times You Want This Process:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    s.set();
    s.calculate();
    }
}*/
class count
{
    static int c;

    public:
    void set()
    {
        cout<<"Object Created"<<endl;
        c++;
    }
    static void countobj()
    {
        cout<<"c:->"<<c;
    }
};
int count::c;
int main()
{
    count c,c1,c2;
    c.set();
    c1.set();
    c2.set();
    count::countobj();
    return 0;
}



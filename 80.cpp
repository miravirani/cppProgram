// Operator Overloading:
// 8. create TIME class that stores the hours, minute, and seconds overload the +operator so that the user
// can add two times. (binary operator)
#include<iostream>
#include<string.h>
using namespace std;
class time
{
    int min,sec,hour;
    public:

    void set()
    {
        cout<<endl<<endl<<"Enter The Value Of Hour:->";
        cin>>hour;
    }
    void show()
    {
        cout<<endl<<"HOUR:->"<<hour<<endl
            <<"MINUTE:->"<<min<<endl
            <<"SECONDE:->"<<sec;
    }
    time operator + (time &c)
    {
        time s;
        s.hour=hour+c.hour;
        s.min=hour*60+c.hour*60;
        s.sec=hour*3600+c.hour*3600;
        return s;
    }
    
};
int main()
{
  time t,t1,t2;
  t.set();
  t.show();
  t1.set();
  t1.show();
  t2=t+t1;
  t2.show();

}
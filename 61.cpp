//61.Create a class Time that display time in hour and minute form. create a method total time () which
//take time object as an argument and return a new object of time display total of both time object
#include<iostream>
using namespace std;
class time
{
    int hour,min,sec;

    public:
    void set()
    {
        cout<<endl<<"Enter The Value Of Hour:->";
        cin>>hour;
    }
    time convert(time &c)
    {
        time s;
        s.hour=hour+c.hour;
        s.min=hour*60+c.hour*60;
        s.sec=hour*3600+c.hour*3600;
        return s;
    }
    void show()
    {
        cout<<"HOUR:->"<<hour<<endl
            <<"MINUTE:->"<<min<<endl
            <<"SECONDE:->"<<sec;
    }
};
int main()
{
  time t,t1,t2;
  t.set();
  t1.set();
  t2=t.convert(t1);
  t2.show();

}


/*58.create the classes named DATE and TIME. create a friend function which can act as a bridge
between both the classes for finding date and time and make a proper method which cantake seconds
for finding Time and also day, month and years for finding Date*/
#include<iostream>
using namespace std;

class time;
class date
{
    int days,year,week,day;

    public :
    void set()
    {
        cout<<endl<<"Enter the day:->";
        cin>>days;
    }
    void show()
    {
        cout<<"DAYS:->"<<days;
    }
    friend void find(date &a,time &b);
};
class time 
{
    int sec,h,m,s;

    public:
    void set()
    {
        cout<<endl<<"Enter the second:->";
        cin>>sec;
    }
    void show()
    {
        cout<<"SECOND:->"<<sec<<endl;
    }
    friend void find(date &a,time &b);
};

void find(date &a,time &b)
{
    a.year=a.days/365;
    a.week=(a.days%365)/7;
    a.day=(a.days%365)%7;
    cout<<endl<<"YEAR is:->"<<a.year<<endl
        <<"WEEK is:->"<<a.week<<endl
        <<"DAY is:->"<<a.day<<endl;

    b.h=b.sec/3600;
    b.m=(b.sec%3600)/60;
    b.s=b.sec%60;
    cout<<"HOUR is:->"<<b.h<<endl
        <<"MINUTE is:->"<<b.m<<endl
        <<"SECOND is:->"<<b.s<<endl;
}
int main()
{
    date s;
    time s1;
    s.set();
    s.show();
    s1.set();
    s1.show();
    find(s,s1);
}
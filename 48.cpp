//48 create a class called "Hotal"private data members-Rno (room no)-Name-charge(per day charges)-Days(no. of days tostay)mmber function
#include<iostream>
using namespace std;

class hotel
{
    int days,r_no;
    long int charge,tc;
    char name[100];

  public:
  void cheakin()
  {
    cout<<endl<<"Enter The Gust Name:->";
    gets(name);
    fflush(stdin);
    gets(name);
    cout<<"Enter The Room No Of Gust:->";
    cin>>r_no;
    cout<<"Enter The Days To Gust Stay:->";
    cin>>days;
    cout<<"Enter The Charge To Per Days:->";
    cin>>charge;
 }
 void display()
 {
    tc=days*charge;
    cout<<endl<<"GUST NAME::->"<<name<<endl
        <<"ROOM NO OF GUST::->"<<r_no<<endl
        <<"DAYS TO GUST STAY::->"<<days<<endl
        <<"CHARGE TO STAY A ROOM PER DAY::->"<<tc<<endl;
 }
};
int main()
{
    hotel h;
    int i,n;
    cout<<"How Many Times You Want This Processe:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        h.cheakin();
        h.display();

    }
}

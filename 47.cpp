//47.Enter hours and find out minutes and seconds using class and object
#include<iostream>
using namespace std;

class time
{
    float hour,minute,second;
    public :
    void get()
    {
        cout<<endl<<"Enter the hour=";
        cin>>hour;
     }
    void munites()
    {
        minute=hour*60;
        cout<<"Hour To Munite:->"<<minute;
    }
    void seconds()
    {
        second=hour*3600;
        cout<<endl<<"Hour To Seconds:->"<<second;
    }
};
int main()
{
    time s[50];
    int i,n;
    cout<<"How Many Times You Want This Process:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    s[i].get();
    s[i].munites();
    s[i].seconds();
    }  
}
    
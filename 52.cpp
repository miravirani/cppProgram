//52.WAP to reverse the number by defining function outside the class
#include<iostream>
using namespace std;
class reverce
{
    int i,rev=0,n,a;
    public:
    void set();
    void show();
};
void reverce::set()
{
    cout<<"Enetr The Value of N:->";
    cin>>n;
    for(i=1;n>0;i++)
    {
      a=n%10;
      n=n/10;
      rev=rev*10+a;  
    }
}
void reverce::show()
{
    cout<<endl<<"reverce number:->"<<rev<<endl;
}
int main()
{
    reverce r[30];
    int i,m;
    cout<<"How Many Times You Want This Process:->";
    cin>>m;
    for(i=1;i<=m;i++)
    {
    r[i].set();
    }
    for(i=1;i<=m;i++)
    {
    r[i].show();
    }

}
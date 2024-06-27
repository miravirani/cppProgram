
//51 WAP to find factorial by defining function outside the class
#include<iostream>
using namespace std;
class factorial
{
    long int i,fact=1,n;
    public:
    void set();
    void show();
};
void factorial::set()
{
    cout<<"Enetr The Value of N:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
}
void factorial::show()
{
    cout<<endl<<"N Number:->"<<n<<endl
        <<"factorial serirse:->"<<fact<<endl;
}
int main()
{
    factorial f[30];
    int i,a;
    cout<<"How Many Times You Want This Process:->";
    cin>>a;
    for(i=1;i<=a;i++)
    {
    f[i].set();
    }
    for(i=1;i<=a;i++)
    {
    f[i].show();
    }

}
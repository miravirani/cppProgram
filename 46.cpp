//46.convert inch to feet and feet to inch using class &object
#include<iostream>
using namespace std;

class Distance
{
    float f,e,inchs=0,feets=0;
    public :
    void get()
    {
        cout<<"Enter the feet=";
        cin>>f;
        cout<<"Enter the inch=";
        cin>>e;
    }
    void feet()
    {
        inchs=f*12;
        cout<<"total inch is :"<<inchs;
    }
    void inch()
    {
        feets=e/12;
        cout<<endl<<"total feet is :"<<feets;
    }
};
int main()
{
    Distance k;
    k.get();
    k.feet();
    k.inch();
}
    
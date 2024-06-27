// #include<iostream>
// #include<string.h>
// using namespace std;
// class distance
// {
//     float feet_1,inch_1,feet,inch; 

//     public:
//     void set()
//     {
//         cout<<"Enter the value of feet:->";
//         cin>>feet_1;
//         cout<<"Enter the value of inch:->";
//         cin>>inch_1;
//     }
//     void get()
//     {
//         //int a,b;
//         cout<<"Enter the value of feet:->";
//         cin>>feet;
//         cout<<"Enter the value of inch:->";
//         cin>>inch;
//         feet=feet+feet_1;
//         inch=inch+inch_1;
//     }
//     void show()
//     {
//         cout<<"FEET:->"<<feet<<endl<<"INCH:->"<<inch;
//     }
// };
// int main()
// {
//     distance s;
//     s.set


// }
#include<iostream>
using namespace std;

class Distance
{
    int f,e,inch1=0,feet1=0;
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
        inch1=f*12;
        cout<<"total inch is :"<<e+inch1;
    }
    void inch()
    {
        feet1=e/12;
        cout<<endl<<"total feet is :"<<f+feet1;
    }
};
int main()
{
    Distance k;
    k.get();
    k.feet();
    k.inch();
}
    
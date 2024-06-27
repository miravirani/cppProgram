#include<iostream>
#include<math.h>
using namespace std;
inline void cube(int m)
{
    cout<<"cube of m="<<pow(m,3);
}
int main()
{
    int m;
    cout<<"Enter the value of m:->";
    cin>>m;
    cube(m);
    return 0;
}
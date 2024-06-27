#include<iostream>
using namespace std;
inline void cube(int m)
{
    cout<<"cube of m="<<m*m*m;
}
int main()
{
    int m;
    cout<<"Enter the value of m:->";
    cin>>m;
    cube(m);
    return 0;
}
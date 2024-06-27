#include <iostream>
using namespace std;
inline void arithmetic(int a,int b)
{
    cout<<"sum="<<a+b<<endl;
    cout<<"sub="<<a-b<<endl;
    cout<<"mul="<<a*b<<endl;
    cout<<"div="<<a/b<<endl;
    cout<<"rem="<<a%b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter the value of A:->";
    cin>>a;
    cout<<"Enter the value of B:->";
    cin>>b;
    arithmetic(a,b);
    return 0;
}
#include <iostream>
using namespace std;
void sum(int n);
int main()
{
    int n;
    cout<<"enter the number=";
    cin >> n;
    sum(n);
}
void sum(int n=0)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum +=i;
    }
    cout<<"sum is :"<<sum;
}
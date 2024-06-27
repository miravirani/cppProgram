// #include<iostream>
// #include<cmath>
// using namespace std;
// void square(int m)
// {
//     cout<<"square is="<<pow(m,2)<<endl;
// }
// void square(int m)
// {
//     cout<<"cube is="<<pow(m,3)<<endl;
// }
// void square(double m,int n)
// {
//     cout<<"enter the m ghat="<<pow(m,n)<<endl;
// }
// int main()
// {
//     int m,n;
//     cout<<"Enter the value of m:->";
//     cin>>m;
//     cout<<"Enter the value of n:->";
//     cin>>n;
//     square(m);
//     square(m);
//     square(m,n);
//     return 0;
// }
#include<iostream>
#include<math.h>
using namespace std;
void find(int m)
{
    int choice;
    cout<<"1.Square\n2.Cube"<<endl;
    cin>>choice;
    if (choice  == 1)
    cout<<"enter the square of m::->"<<pow(m,2)<<endl;
    else
    cout<<"enter the square of m::->"<<pow(m,3)<<endl;
}
void find(int m, int n)
{
    cout<<"enter the square of m::->"<<pow(m,n)<<endl;
}
int main()
{
    int m,n;
    cout<<"enter the value of m::->";
    cin>>m;
    cout<<"enter the value of n::->";
    cin>>n;
    find(m);
    find(m,n);
    return 0;
}
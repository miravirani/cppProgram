// 73 WAP to create user defined manipulators
#include<iostream>
using namespace std;
#include<conio.h>
#include<math.h>
   int main()
   {
        int i;
        cout.fill('*');
        cout.setf(ios::left,ios::adjustfield);
        cout.width(10);
        cout<<"value"<<endl;
        cout.setf(ios::right,ios::adjustfield);
        cout.width(15);
        cout<<"sqrt_of_value"<<endl;
        cout.fill('#');
        cout.precision(4);
        cout.setf(ios::showpoint);
        cout.setf(ios::showpos);
        cout.setf(ios::fixed,ios::floatfield);
        for(i=0;i<5;i++)
        {
            cout.setf(ios::internal,ios::adjustfield);
            cout.width(5);
            cout<<i;
            cout.setf(ios::right,ios::adjustfield);
            cout.width(10);
            cout<<sqrt(i)<<endl;
        }
        cout.setf(ios::scientific,ios::floatfield);
        cout<<"\nsqrt(100)="<<sqrt(1000)<<endl;
        getch();
        return 0;
   }
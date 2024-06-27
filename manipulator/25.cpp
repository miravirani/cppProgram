#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(10)<<setfill('*')<<"Basic"<<setw(9)<<setfill('*')<<1000<<endl;
    cout<<setw(10)<<setfill('#')<<"Allowance"<<setw(9)<<setfill('#')<<700<<endl;
    cout<< setw(10)<<setfill('+')<<"Total"<<setw(10)<<setfill('+')<<17000<<endl;
    return 0;
}

// 91.Read a line of string from user reverse it and then write to the file
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    char a[100];
    ifstream s("h.txt");
    gets(a);
    cout<<"write in string:->"<<a;
    s.close();
    ofstream s1("h.txt");
    strrev(a);
    cout<<endl<<"Reverse string is:->"<<a;
    s1<<a;
    return 0;
}
// 88.Make one file and copy its content from that file to the another file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fp,pa;
    char a[100];
    fp.open("abc.txt");
    pa.open("def.txt");
    cout<<"Write Context::=>";
    gets(a);
    fp<<a;
    pa<<a;
}


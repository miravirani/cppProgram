// File Handling:
// 87.Read a line ofstring from user and write it into the file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char ch[300];
    fout.open("abc.txt");
    cout<<"Write Context::=>";
    gets(ch);
    fout<<ch;
}
// 89 Read one file and count how many lines and wordsinto that particular file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fp;
    char c[100];
    char ch;
    int lines=0,count=0;
    cout<<"Enter The Text:->";
    gets(c);
    fp.open("abc.txt");
    if(c == NULL)
    {
        cout<<"error to operating file:->";
        return 1;
    }

}
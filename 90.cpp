// 90.Read two file and merge its content into new file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char a[100],a1[100];
    ifstream s("me.txt");
    cout<<"Write Something in a:->"<<a<<endl;
    gets(a);
    s.close();
    ifstream s1("write.txt");
    cout<<"Write Something in a1:->"<<a1<<endl;
    gets(a1);
    ofstream s2("marge.txt");
    s2<<a<<endl;
    s2<<a1;
    s2.close();
    return 0;
}
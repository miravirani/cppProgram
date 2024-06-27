//82.c++ program to concatenate two string objects using operator overloading

#include<iostream>
#include<string.h>
using namespace std;
class add
{
    char c[100],c1[100],str[50],str1[50];
    public:

    void set()
    {
        cout<<endl<<endl<<"Enter The Word in C:->";
        gets(c);
        strcpy(this->c,str);
        cout<<endl<<"Enter The Word In c2:->";
        gets(c1);
        strcpy(this->c1,str1);
    }
    add operator+()
    {
        cout<<"Concanet:->"<<strcat(str,str1);
    }
    void show()
    {
        cout<<"after concat:->"<<strcpy(str,str1);
    }
};
int main()
{
   add s,ss;
   char str[50],str1[50];
   add ss(str,str1);
   s.set();
   s.show();
}
//69.WAP to create class student, sun, result for multilevel inheritance for student to read marks and
//     display final result
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    char name[100];
    int roll_no;
    void setA()
    {
        cout<<"Enter The Student Name:->";
        gets(name);
        cout<<"Enter The Roll_No Of Student:->";
        cin>>roll_no;
    }
    void showA()
    {
        cout<<"NAME OF STUDENT:->";
        fflush(stdin);
        puts(name);
        cout<<"ROLL_NO OF STUDENT:->"<<roll_no;
    }
};
class B:public A
{
    public:
    int eng,hindi,maths,ts;
    void set()
    {
        cout<<endl<<"Enter The Eglish Marks:->";
        cin>>eng;
        cout<<"Enter The Hindi Marks:->";
        cin>>hindi;
        cout<<"Enter The Maths Marks:->";
        cin>>maths;
    }
    void show()
    {
        cout<<"ENGLISH:->"<<eng<<endl
            <<"HINDI:->"<<hindi<<endl
            <<"MATHS:->"<<maths;
            ts=eng+hindi+maths;
    }
    void sum()
    {
        cout<<endl<<"Total Marks Out Of 300:->"<<ts;
    }
};
class C: public B
{
    public:
    void avg()
    {
        cout<<endl<<"AVERAGE:->"<<ts/3;
    }
};
int main()
{
    C s;
    s.setA();
    s.showA();
    s.set();
    s.show();
    s.sum();
    s.avg();
}
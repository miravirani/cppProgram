// // Inheritance:
// // 67.Write a program to calculate the area and perimeter 
// //    of a rectangle using the concept of inheritanc
// // MULTILEVEL
// #include<iostream>
// #include<string.h>
// using namespace std;
// class A
// {
//     public:
//     int a,b;
//     void set()
//     {
//         cout<<"Enter The Value Of A&B:->";
//         cin>>a>>b;
//     }
//     void show()
//     {
//         cout<<"a="<<a<<endl<<"b="<<b;
//     }
//     void sum()
//     {
//         cout<<endl<<"SUM:->"<<a+b;
//     }
// };
// class B: public A
// {
//     public:
//     void sub()
//     {
//         cout<<endl<<"SUB:->"<<a-b;
//     }
// };
// class C: public B
// {
//     public:
//     void multi()
//     {
//         cout<<endl<<"MULTIPLICATION:->"<<a*b;
//     }
// };
// int main()
// {
//     C s;

//     s.set();
//     s.show();
//     s.sum();
//     s.sub();
//     s.multi();
// }
//multipule Inheritance
#include<iostream>
using namespace std;
/*class A
{
    public:
    int a,b;
    void set()
    {
        cout<<"enter the value of a=";
        cin>>a;
        cout<<"enter the value of b=";
        cin>>b;
    }
    void show()
    {
        cout<<"a="<<a<<"\nb="<<b;
    }
    void sum()
    {
        cout<<"\na+b="<<a+b<<endl;
    }
};
class B
{
    public:
    int c,d;
    void set()
    {
        cout<<"\nenter the value of c=";
        cin>>c;
        cout<<"enter the value of d=";
        cin>>d;
    }
    void show()
    {
        cout<<"a="<<c<<"\nb="<<d;
    }
    void sub()
    {
        cout<<"\nc-d="<<c-d<<endl;
    }
};
class C:public A
{
    public:
    void mul()
    {
        cout<<"a*b="<<a*b;
    }
};
int main()
{
    C s;
    B s1;
    s.set();
    s.show();
    s.sum();
    s.mul();
    s1.set();
    s1.show();
    s1.sub();
}*/
//HIERARCHICAL
// class A
// {
//     public:
//     int a,b;
//     void set()
//     {
//         cout<<"enter the value of a=";
//         cin>>a;
//         cout<<"enter the value of b=";
//         cin>>b;
//     }
//     void show()
//     {
//         cout<<"a="<<a<<endl<<"b="<<b;
//     }
//     void sum()
//     {
//         cout<<endl<<"a+b="<<a+b;
//     }
// };
// class B:public A
// {
//     public:
//     void sub()
//     {
//         cout<<"a-b="<<a-b<<endl;
//     }
// };
// class C:public A
// {
//     public:
//     void mul()
//     {
//         cout<<endl<<"a*b="<<a*b;
//     }
// };
// int main()
// {
//     B s1;
//     C s;
//     s.set();
//     s.show();
//     s.sum();
//     s.mul();
//     s1.set();
//     s1.show();
//     s1.sub();
//     s1.sum();
    
// }   
//HYBRID
class A
{
    public:
    int a,b;
    void set()
    {
        cout<<"enter the value of a=";
        cin>>a;
        cout<<"enter the value of b=";
        cin>>b;
    }
    void show()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    void sum()
    {
        cout<<"a+b="<<a+b<<endl;
    }
};
class B:virtual public A
{
    public:
    void sub()
    {
        cout<<"a-b="<<a-b<<endl;
    }
};
class C:virtual public A
{
    public:
    void mul()
    {
        cout<<"a*b="<<a*b<<endl;
    }
};
class D: public B,public C
{
    public:
    void div()
    {
        cout<<"a/b="<<a/b;
    }
};
int main()
{
    D s;
    s.set();
    s.show();
    s.sum();
    s.mul();
    s.sub();
    s.div();
       
}   

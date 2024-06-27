/*62.WAP to find minimum from two values by passing object as argument. Passing input from
keyboard. consider Name of class is Temp.
Data member - int x;
member function- Get(int n)
Max Temp( )*/
 #include<iostream>
 using namespace std;
class temp
{
    int a,b;
    public:
    void set()
    {
        cout<<"Enter The Value Of A:->";
        cin>>a;
        cout<<"Enter The Value Of B:->";
        cin>>b;
    }
    temp find(temp &c)
    {
        temp m;
        if(c.a < c.b)
        cout<<endl<<"A is minimum"<<endl;
        else 
        {
         cout<<endl<<"B is minimun"<<endl;
        }
         return m;
        
    }
    void show()
    {
        cout<<endl<<"A:->"<<a<<endl
            <<"B:->"<<b<<endl;
    }
};

// class Temp {
//     float c, f;
//     public:
//     void set() {
//         cout << "Enter The Temp In Celsius: ";
//         cin >> c;
//         cout << "Enter The Temp In Fahrenheit: ";
//         cin >> f;
//         f = (c * 9 / 5) + 32;
//         cout << "Celsius: " << c << endl << "Fahrenheit: " << f << endl;
//     }
//     void show() {
//         cout << "Celsius: " << c << endl
//              << "Fahrenheit: " << f << endl;
//     }
//     Temp convert(Temp &x) {
//         Temp n;
//         n.c = (c + x.c) / 2;
//         n.f = (f + x.f) / 2;
//         return n;
//     }
// };

// int main() {
//     Temp t, t1, t2;
//     t.set();
//     t1.set();
//     t2 = t.convert(t1);
//     cout << "Average Temperature:" << endl;
//     t2.show();
//     return 0;
// }

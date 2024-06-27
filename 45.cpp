/*45.WAP to find out Celsius to Fahrenheit using class & object
class temperature
{
Int c,f;
public:
void getdata();
void putdata( );
void convert( );
};*/
#include<iostream>
using namespace std;

class temperature
{
    float cels,fht;
    int n;
    public :
    void get()
    {
        cout<<endl<<"Enter the Celsius:->";
        cin>>cels;
        cout<<"Enter the Fahrenheit:->";
        cin>>fht;
    }
    void put()
    {
        
        cout<<"Celsius:->"<<cels<<endl
            <<"Fahrenheit:->"<<fht<<endl;
    }
    void convert()
    {
        cout<<"\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n";
        cout<<"Enter The Choice:->";
        cin>>n;
        switch (n)
        {
        case 1:
            fht=0.55*(fht-32);
            cout<<"Fahrenheit to Celsius:->"<<fht<<endl;
            break;
        case 2:
            cels=(cels*1.8)+32;
            cout<<"Celsius to Fahrenheit:->"<<cels;
            break;
        default:
            cout<<endl<<"Invelid Option";
            break;
        }
    }
};
int main()
{
    temperature t;
    int a,i;
    cout<<"How Many Time You Want Process:->";
    cin>>a;
    for(i=1;i<=a;i++)
    {
    t.get();
    t.put();
    t.convert();
    }
 }

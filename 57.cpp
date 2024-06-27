/*57.create two classes DM and DB which stores value of distances.
-DM stores distance in meters and centimeters
-DB stores distances in feet and inches
write a program that can read value for the class objects. Add an object of DM with another object of
DB. use friend function to carry out additions operations and display result in meter and centimeter*/

#include<iostream>
using namespace std;

class DB;
class DM
{
    float mtr,cm;

    public:
    void set()
    {
        cout<<endl<<"\nEnter The Value Of Meter:->";
        cin>>mtr;
        cout<<"Enter The Value Of Centimeters:->";
        cin>>cm;
     }
    void show()
    {
         cout<<endl<<"METER:->"<<mtr<<endl
            <<"CENTIMETER:->"<<cm;
    }
friend DM dis(const DM &c,const DB &d);
};
class DB
{
    float feet,inches;

    public:
    void set()
    {
        cout<<endl<<"Enter The Value Of Feet:->";
        cin>>feet;
        cout<<"Enter The Vlaue Of Inches:->";
        cin>>inches;
    }
    void show()
    {
        cout<<endl<<"FEET:->"<<feet<<endl
            <<"INCHES:->"<<inches;
    }
friend DM dis(const DM &c,const DB &d);
};

DM dis(const DM &c,const DB &d)
{
    DM result;
    int Total_Centimeter=(c.mtr*100+c.cm)+((d.feet*12+d.inches)*2.54);
    result.mtr=Total_Centimeter/100;
    result.cm=Total_Centimeter%100;
    cout<<endl<<"Total Distance:->"<<result.mtr
        <<" Meter And:->"<<result.cm<<" CentiMeter\n";
    return result;
    
}
int main()
{
    DM s;
    DB s1;
    s.set();
    s.show();
    s1.set();
    s1.show();
    dis(s,s1);
}
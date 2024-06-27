//63.Create a class Distance having data member feet and inches. Write a program to add to distance
//using object asfunction argument
 #include<iostream>
 using namespace std;
 class Distance
{
    float feet,inch,f,i;
    public:

    void set()
    {
        cout<<"Enter The Inch:->";
        cin>>inch;
        cout<<"Enter The Feet:->";
        cin>>feet;
        i=feet*12;
        f=inch/12;
    cout<<"INCH IN FEET:->"<<f<<endl<<"FEET IN INCH:->"<<i<<endl;
    }
    void show()
    {
        cout<<"INCH IN FEET->"<<f<<endl
            <<"FEET IN INCH:->"<<i;
    }
    Distance convert(Distance &x)
    {
        Distance n;
        n.f=f+x.f;
        n.i=i+x.i;
        return n;
    }
};
int main()
{
    Distance t,t1,t2;
    t.set();
    t1.set();
    t2=t.convert(t1);
    t2.show();
    return 0;
}

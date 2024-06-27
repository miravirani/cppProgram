// 67.Write a program to calculate the area and 
//    perimeter of a rectangle using the concept of inheritance
#include<iostream>
using namespace std;
class area
{
    public:
    int w,l,ar;
    void set()
    {
        cout<<"Enter The Value Of W:->";
        cin>>w;
        cout<<"Enter The Value  Of L:->";
        cin>>l;
    }
    void show()
    {
        cout<<"W:->"<<w<<endl
            <<"L:->"<<l<<endl;
    }
    void find()
    {
        ar=w*l;
        cout<<"AREA OF RECTANGLE:->"<<ar<<endl;
    }
};
class shape:public area
{
    public:
    int ap;
    void finds()
    {
        ap=2*(l+w);
        cout<<"AREA OF PERIMETERS:->"<<ap<<endl;
    } 

};
int main()
{
    shape s;
    s.set();
    s.show();
    s.find();
    s.finds();
}
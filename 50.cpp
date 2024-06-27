//50.Get two value (Item no. and price) and display it using outside of class
#include<iostream>
using namespace std;

class item
{
    int i_no,price;
    char i_name[100];
    public:
    void value();
    void disply();
};
void item::value()
{
    cout<<"Enter The Item Name:->";
    fflush(stdin);
    gets(i_name);
    cout<<"Enter The Item Number:->";
    cin>>i_no;
    cout<<"Enter The Item Price:->";
    cin>>price;
}
void item::disply()
{
    cout<<endl<<"ITEM NAME:->"<<i_name<<endl
        <<"ITEM NUMBER:->"<<i_no<<endl
        <<"ITEM PRICE:->"<<price;
}
int main()
{
    item f[30];
    int i,n;
    cout<<"How Many Times You Want This Process:->";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    f[i].value();
    }
    for(i=1;i<=n;i++)
    {
    f[i].disply();
    }

}
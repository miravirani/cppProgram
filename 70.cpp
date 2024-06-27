// 70.Define a class bank account with current and saving bank account as inherited classes. class bank
// account should have following data member: account number, name, balance amount and member
// function; to initialize the value, to deposit and withdraw amount after checking the minimum
// balance.
// class
// bank
// {
// int accountno;
// char
// name[20];int
// bal;
// public: getdata( );
// putdata( );
// withdrow(
// );deposit( );
// showbal( );
// };
#include<iostream>
#include<string.h>
using namespace std;
class A
{
    public:
    char name[100];
    long int ac_no,balance=70000;
    void set()
    {
        cout<<endl<<"Enter The Account No:->";
        cin>>ac_no;
        cout<<"Enter The Name Of Accountant:->";
        fflush(stdin);
        gets(name);
        cout<<"Account Total Balance:->"<<balance;
    }
    void show()
    {
        cout<<endl<<"ACCOUNT NUMBER:->"<<ac_no<<endl;
        cout<<"NAME:->";
        puts(name);
        cout<<"BALANCE:->"<<balance;
    }
};
class B:public A
{
    public:
    char acc[100];
    int choice;
    void setB()
    {
        cout<<endl<<"****ENTER YOUR ACCOUNT TYPE****"<<endl;
        cout<<"--*1.SAVING ACCOUNT*--"<<endl;
        cout<<"--*2.CURRENT ACCOUNT*--"<<endl;
        cin>>choice;
        cout<<"Account Type:->"<<choice<<endl;
        switch(choice)
        {
        case 1:
            strcpy(acc,"SAVING ACCOUN");
            cout<<"***SAVING ACCOUN***";
            break;
        case 2:
            strcpy(acc,"CURRENT ACCOUN");
            cout<<"***CURRENT ACCOUNT***";
            break;
       // case 0:
        //    break;
        default:
            cout<<"INVALID CHOICE";
            break;
        }
    
    }
};
class C:public B
{
    public:
    char chk[100];
    int pin,n,wd,dp,tb;
    void setC()
    {
        cout<<endl<<"****CHECK****"<<endl;
        cout<<"--*1.WHITHDROW AMOUNT*--"<<endl;
        cout<<"--*2.DEPOSITE AMOUNT*--"<<endl;
        cout<<"--*3.CHECK BALANCE*--"<<endl;
        cout<<"--*4.EXIT*--"<<endl;
        cin>>n;
        cout<<"What You Want To Do:->"<<n<<endl;
        switch(n)
        {
        case 1:
            strcpy(chk,"WHITHDROW AMOUNT");
            cout<<endl<<"***WHITHDROW AMOUNT***";
            cout<<"WHITHDROW AMOUNT IS:->";
            cin>>wd;
            if(wd>balance)
            {
                cout<<"sorry!...Your Balnce Is Low...!";
            }
            else
            {
                cout<<endl<<"Withdrow Is Succesfully";
                tb=balance-wd;
                cout<<endl<<"TOtal Balance:->"<<tb;
            }
            break;
        case 2:
           strcpy(chk,"DIPOSITE AMOUNT");
           cout<<"***DIPOSITE AMOUNT***";
           cout<<endl<<"DIPOSITE AMOUNT IS:->";
           cin>>dp;
           tb=balance+dp;
           {
                cout<<endl<<"Your Corrent Balance Is:->"<<tb;
           }
            break;
        case 3:
        {
            strcpy(chk,"CHECK BALANCE");
            cout<<"***CHECK BALANCE***";
            cout<<endl<<"Balance:->"<<balance;   
        }
        break;
        case 0:
            {
                cout<<"EXITE";
                cout<<"***EXITE***";
            }
            break;
        default:
            cout<<endl<<"SORRY!...please Enter Valid Pin";
            break;
        }    
    }
};
int main()
{
    C s;
    s.set();
    s.show();
    s.setB();
    s.setC();
}


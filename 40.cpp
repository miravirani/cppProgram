#include<iostream>
#include<string.h>
using namespace std;
class employe 
{
    int emp_no,choice;
    long int salary;
    char emp_name[100],emp_dpt[100];

    public:
    void set()
    {
        cout<<"Enter the Employe Name:->";
        gets(emp_name);
        fflush(stdin);
        gets(emp_name);
        cout<<"Enter the Employe Number:->";
        cin>>emp_no;
        cout<<"1.HR\n2.Finance\n3.IT\n4.Management\n5.Marketing\n0.Nothing"<<endl;
        cin>>choice;
        cout<<"which Department:->"<<choice<<endl;
        switch(choice)
        {
            case 1:
                strcpy(emp_dpt,"1.HR");
                break;
            case 2:
                strcpy(emp_dpt,"2.Finance");
                break;
            case 3:
                strcpy(emp_dpt,"3.IT");
                break;
            case 4:
                strcpy(emp_dpt,"4.Management");
                break;
            case 5:
                strcpy(emp_dpt,"5.Marketing");
                break;
            case 0:
                break;
            default:
                cout<<"Nothing";
                break;
            
        }
        cout<<"Enter the Empolye Salary:->";
        cin>>salary;
       // fflush(stdin);
    }
    void show()
    {
        cout<<endl<<"Employe Name:->"<<emp_name<<endl<<"Employe Number:->"<<emp_no<<endl<<"Employe Department:->"<<emp_dpt<<endl<<"Employe Salary:->"<<salary;
    }
};
int main()
{
    employe s[50];
    int i,n;
    cout<<"How Many Employe Detelis You Want:->";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].set();
    }
    for(i=0;i<n;i++)
    {
        s[i].show();
    }
    return 0;
}
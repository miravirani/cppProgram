#include<iostream>
#include<string.h>
using namespace std;
class student
{
    int ent_no,marks[3],choice,tm=0;
    char name[100],crs_name[100];
    float per;

    public:
    void set()
    {
        int i,n;
        cout<<endl<<"Enter your Name:->";
        gets(name);
        fflush(stdin);
        gets(name);
        cout<<"Enter your Entrollment No:->";
        cin>>ent_no;
        cout<<endl<<"***Cource Of College***";
        cout<<endl<<"1.BCA\n2.B.COM\n3.BSC"<<endl;
        cout<<"Which Department:->";
        cin>>choice;
        switch(choice)
        {
            case 1:
                strcpy(crs_name,"BCA");
                break;
            case 2:
                strcpy(crs_name,"B.COM");
                break;
            case 3:
                strcpy(crs_name,"BSC");
                break;
        }
        cout<<"Enter your marks No:->";
        cin>>n;
        for(i=0;i<n;i++)
        {
            cout<<"SUBJECT["<<i+1<<"]:";
            cin>>marks[i];
            tm=tm+marks[i];
        }
        cout<<"total marks::->"<<tm;
        per=tm/n;
        cout<<endl<<"Persentage:->"<<per;
    }

    void show()
    {
        cout<<endl<<endl<<"Student Name:->"<<name<<endl<<"Entrollment No->"<<ent_no<<endl<<"Cource Name:->"<<crs_name<<endl<<"Total Marks:->"<<tm<<endl<<"Persentage:->"<<per;
    }
};
int main()
{
    student s[50];
    int i,n;
    cout<<"How Many Student Detelis You Want:->";
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
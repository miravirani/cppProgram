// 92.Read some no’s from the file sort them in Ascending order and write to the another file
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    int a[100],i,n,j,p;
    cout<<"Enter the value of n:->";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter The Series:->";
        cin>>a[i];
    }
    ofstream s("i.txt");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                p=a[i];
                a[i]=a[j];
                a[j]=p;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        s<<a[i]<<endl;
    }
    s.close();
}
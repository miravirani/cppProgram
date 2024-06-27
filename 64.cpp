// Constructor & Distructor:
//  64 Define the class student which has name (char name [20] and age(int)) define the default constructor,
// member functions get_data( ) for taking the name and age of the student put_data( ) for displayingthe
// data ofstudent
#include<iostream>
using namespace std;
class student
{
    char name[100];
    int age;
    public:

    student ()
    {
        cout<<"Enter The Student Name:->";
        gets(name);
        cout<<"Enter The Student Age:->";
        cin>>age;
    }
    void show()
    {
        cout<<"NAME OF STUDENT:->";
        puts(name);
        cout<<"AGE OF STUDENT:->"<<age;
    }
};
int main()
{
    student s;
    s.show();
}
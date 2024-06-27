
#include <iostream>
using namespace std;

int swep(int &a, int &b);
int main()
{
    int a, b;
    cout << "enter the a=";
    cin >> a;
    cout << "enter the b=";
    cin >> b;
    swep(a, b);
    return 0;
}

int swep(int &a, int &b)
{
    // int k;
    // k = a;
    // a = b;
    // b = k;

    cout << "a is=" << a << endl;
    cout << "b is=" << b;
}
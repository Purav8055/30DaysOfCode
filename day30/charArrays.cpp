#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";
    cout << arr << endl;
    cout << ch << endl;
    cout << "cout works differently for int arrays and char arrays" << endl;
    char *c = &ch[2];
    cout << c << endl;
    cout << "prints from the address upto null character" << endl;
    char temp = '@';
    char *p = &temp;
    cout << p << endl; // prints until it encounters null character
    char *d = "wxyz"; // never do this. its risky.
    cout << d << endl;
    cout << *d << endl;
}

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    int a = ch;
    if(a>=97 && a<=122)
    {
        cout << "lowercase";
    }
    else if(a>=65 && a<=90)
    {
        cout << "uppercase";
    }
    else
    {
        cout << "number";
    }
}
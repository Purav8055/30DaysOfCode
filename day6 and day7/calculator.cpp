#include<iostream>
#include<unistd.h>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout << "Enter the operation: ";
    cin >> a;
    cin >> op;
    cin >> b;
    switch (op)
    {
    case '+':
        cout << a+b;
        break;
    case '-':
        cout << a-b;
        break;
    case '*':
        cout << a*b;
        break;
    case '/':
        cout << a/b;
        break;
    case '%':
        cout << a%b;
        break;
    default:
        cout << "Sorry! I can't do that.";
        break;
    }
    sleep(3);
}
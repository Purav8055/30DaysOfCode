#include<iostream>
using namespace std;

int add(int a , int b)
{
    return a+b;
}

int subtract(int a , int b)
{
    return a-b;
}

int main()
{
    int (*fptr) (int,int); // declaring the function pointer
    int result;
    fptr = add; // storing address of add function in fptr
    result = fptr(5,3); // using fptr to call add function
    cout << result << endl;
    fptr = subtract; // storing address of subtract function in fptr
    result = fptr(5,3); // using fptr to call subtract function
    cout << result << endl;
}
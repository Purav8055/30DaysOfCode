#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {0,1,2};
    arr = arr + 1; //error as symbol table cannot be changed
    int *ptr = arr;
    ptr = ptr + 1; // this is allowed as we are not changing the symbol table but the pointer's value which is pointing towards the first element of arr. ptr increases by 4.
}
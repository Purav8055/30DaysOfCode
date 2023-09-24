#include<iostream>
using namespace std;

int main()
{
    int w = 5;
    int x = 5;
    int y = 5;
    int z = 5;
    int a = 5;
    const int *ptr1 = &x; // value of x cannot be modified by dereferencing ptr1. However it can be modified like x = 6. The address towards which ptr1 is pointing can also be changed as x is const not ptr1.
    int const *ptr2 = &y; // equivalent to const int *ptr1
    int *const ptr3 = &z; // value of z can be modified by dereferencing ptr3 however the address towards which ptr3 is pointing i.e. address of z cannot be changed as ptr3 is constant.
    const int *const ptr4 = &w; // combined case of ptr1 and ptr3. Neither can we change w by dereferencing ptr4 nor can we change the address towards which ptr4 is pointing.
    int const *const ptr5 = &a; // equivalent to case 4
}
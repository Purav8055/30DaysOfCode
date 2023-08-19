#include<iostream>
using namespace std;

int main()
{
    //another way of taking pointers
    int *ptr = 0; // first initialize
    int num = 5;
    ptr = &num; // now give address
    //*ptr = &num; since pointer is already initialized this line gives error so use above line instead 
    cout << ptr << endl;
    cout << *ptr << endl;
    // lets try changing the value of num using pointer
    (*ptr)++;
    cout << "The value of num after (*ptr)++ is num: " << num << endl;
    // what if we do *& together i.e. reference and dereference
    cout << "The dereference of address of num is *&num: " << *&num << endl;
    // what if we do &* together i.e. dereference and reference
    cout << "The address of dereference of ptr is &*ptr: " << &*ptr << endl;

    //lets try copying a pointer i.e. two pointers will be pointing towards the same num
    int *q = ptr; // declare a pointer having address of num
    cout << "Value of ptr and q is: " << ptr << " " << q << endl;
    cout << "Value of *ptr and *q is: " << *ptr << " " << *q << endl;
    (*q)++;
    cout << "changed num using (*q)++: " << num << endl;
}
#include<iostream>
using namespace std;

int main()
{
    int num = 5; // a block of memory which contains 5 is created. The block also has an address , say 120 , and a name which is num. When we do cout << num then the name num is mapped to the address using a symbol table. the address takes us to the memory block where 5 is stored and we get 5 printed.
    // & to get its address
    cout << &num << endl;
    // in case you wanna store the address in a variable , pointers are there for that purpose
    int *numAddress = &num;
    cout << numAddress << endl;
    cout << "The value of num is num: " << num << endl;
    cout << "The address of num is &num: " << &num << endl;
    cout << "The address of num is numAddress: " << numAddress << endl;
    cout << "* is a dereference operator. It dereferences an address to the value it is pointing towards " << endl;
    cout << "The dereference of address of num(i.e. the value of num) is *numAddress: " << *numAddress << endl;
    cout << "The address of numAddess is &numAddress: " << &numAddress << endl;
    cout << "Observation: Increment address of a num by 1 and you get the address of address of num" << endl;
    cout << "Incrementing address by 1 actually increments it by 4 as size of ont is 4. If the pointer is a char then it will increment by 1." << endl;
    cout << "Size of a pointer is 4. Doesn't matter if it is an int or double or char pointer " << sizeof(&num) << endl;
}

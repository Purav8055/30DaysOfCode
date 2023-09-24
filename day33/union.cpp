#include<iostream>
#include<cstring>
using namespace std;

// you can't use string as a member of union as they have dynamic memory allocation which unions dont support

union Person{
    char name[6];
    int age;
    double salary;
};

int main()
{
    union Person person;
    strcpy(person.name , "Bachu"); // we assign one then print one as at one time only one member of a union is active
    cout << person.name << endl;
    person.age = 20;
    cout << person.age << endl;
    person.salary = 3000000;
    cout << person.salary << endl;
    cout << sizeof(person) << endl; // size of a union is the size of the largest data type present in the union which in this case is a double
}
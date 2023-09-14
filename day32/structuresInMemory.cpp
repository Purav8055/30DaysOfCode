#include<iostream>
using namespace std;

struct Person{
    int age;
    double salary;
    int a;
};

int main()
{
    struct Person p1;
    cout << sizeof(p1) << endl; // size is 24 (4 + 8 + 4 + 8(padding between members))
    cout << &p1.age << endl;
    cout << &p1.salary << endl;
    cout << &p1.a << endl;
}

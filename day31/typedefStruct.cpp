#include<iostream>
using namespace std;

typedef struct{
    string name;
    int age;
} Person;

int main()
{
    Person person1;
    person1.name = "Bachu";
    person1.age = 20;
    cout << person1.name << endl;
    cout << person1.age << endl;
}
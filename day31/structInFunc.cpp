#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
};

void printer(struct Person p)
{
    cout << p.name << endl;
    cout << p.age << endl;
}

int main()
{
    struct Person person1;
    person1.name = "Chelu";
    person1.age = 19;
    printer(person1);
}
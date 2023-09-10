#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
};

int main()
{
    struct Person person1 , person2;
    person1.name = "pew pew";
    person1.age = 19;
    person2 = person1; // this won't work if there are two different structures even if all the fields are same
    cout << person2.name << endl;
    cout << person2.age << endl;
}
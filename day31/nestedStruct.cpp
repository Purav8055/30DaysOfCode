#include<iostream>
using namespace std;

// outer structure
struct Address{
    string city;
    string state;
    int zip;
};

// inner structure
struct Person{
    string name;
    int age;
    struct Address address;
};

int main()
{
    struct Person person1;
    person1.name = "Bhunja"; 
    person1.age = 19;
    person1.address.city = "Hamirpur"; 
    person1.address.state = "Himachal Pradesh"; 
    person1.address.zip = 140401;
    cout << person1.name << endl; 
    cout << person1.age << endl; 
    cout << person1.address.city << endl; 
    cout << person1.address.state << endl; 
    cout << person1.address.zip << endl;
}
#include<iostream>
using namespace std;

struct People{
    string name;
    int age;
};

int main()
{
    struct People person[3];
    person[0].name = "Bachu";
    person[0].age = 20;
    person[1].name = "Bhunja";
    person[1].age = 19;
    person[2].name = "Chelu";
    person[2].age = 19;
    
    for(int i = 0;i<3;i++)
    {
        cout << person[i].name << endl;
        cout << person[i].age << endl;
    }
}
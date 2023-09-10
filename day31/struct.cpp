#include<iostream>
using namespace std;

struct emp
{
    string name;
    int age;
};

int main()
{
    struct emp e1;
    e1.name = "Purav";
    e1.age = 19;
    cout << e1.name << endl;
    cout << e1.age << endl;
}

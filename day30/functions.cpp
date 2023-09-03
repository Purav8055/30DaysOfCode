#include<iostream>
using namespace std;

void update(int *p)
{
    p = p + 1;
    cout << "inside function: " << p << endl;
}
void update2(int *p)
{
    *p = *p + 1;
    cout << "inside function: " << *p << endl;
}

int main()
{
    int a = 5;
    int *p = &a;
    cout << "before " << p << endl;
    update(p);
    cout << "after " << p << endl;
    cout << "nothing changed since copy of address was created inside function" << endl;
    cout << "before " << *p << endl;
    update2(p);
    cout << "after " << *p << endl;
    cout << "this time it changed since value in memory was messed with and changed permanently within the memory" << endl;
}
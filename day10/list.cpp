#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> a(5,100);
    for(int i:a)
    {
        cout << i << " ";
    }
}
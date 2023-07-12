#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    // to print this type of array
    for(int i = 0;i<size;i++)
    {
        cout << a.at(i) << " " << endl;
    }
    cout << "first element " << a.front() << endl;
    cout << "last element " << a.back() << endl;
    cout << "empty?  " << a.empty() << endl; // returns 1 if a is empty else 0.
}
#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s; // like python. only has unique elements. elements are in ascending order.
    s.insert(1);
    s.insert(3);
    s.insert(5);
    s.insert(7);
    s.insert(1);
    s.insert(3);

    for(int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "-5 present or not : " << s.count(-5);
}
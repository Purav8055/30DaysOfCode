#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> a;
    // in deque we can do both push_back and push_front.
    a.push_back(1);
    a.push_front(2);
    a.push_front(3);
    for(int i : a)
    {
        cout << i << " ";
    }
    // pop back and pop front also possible.
}
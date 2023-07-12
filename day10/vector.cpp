#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vectors are dynamic arrays. They don't have fixed size. If its capacity is 8 and we put 9 elements then its capacity doubles and becomes 16 and size becomes 9.
    vector<int> a = {1,2,3,4,5};
    cout << a.capacity() << " ";
    cout << a.size() << " ";
    a.push_back(1);
    cout << a.capacity() << " ";
    cout << a.size() << " ";
    for(int i = 0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    a.pop_back();
    for(int i = 0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }

    // rest operations like at , front , back can also be used.
    vector<int> b(5,1); // a vector named b has {1,1,1,1,1};
    vector<int> c(a); // vector named c copied a;
    for(int i = 0;i<a.size();i++)
    {
        cout << endl << c[i] << " ";
    }

}
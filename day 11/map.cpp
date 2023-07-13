#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m; // like dictionary in python. it is ordered.
    m[1] = "purav";
    m[4] = "khurana";
    m[9] = "lavya";
    for(auto i:m)
    {
        cout << " " << i.first << " " << i.second;
    }
    m.insert({5,"karteek"});
    cout << "after insert" << endl;
    for(auto i:m)
    {
        cout << " " << i.first << " " << i.second;
    }
    cout << endl;
    m.erase(1);
    cout << "after erase" << endl;
    for(auto i:m)
    {
        cout << " " << i.first << " " << i.second;
    }
    cout << endl;
    cout << "finding -9 " << m.count(-9);
}

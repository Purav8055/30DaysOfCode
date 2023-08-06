#include<iostream>
using namespace std;

int main()
{
    string s = "purav";
    cout << s << endl;
    s.push_back('k');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    cout << s.length() << endl;
    cout << s.size() << endl;
    string s1;
    getline(cin,s1); // for taking input with spaces in strings
    cout << s1 << endl;
}

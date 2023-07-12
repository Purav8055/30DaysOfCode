#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("purav"); // just push. no push back or front.
    s.push("lavya");
    s.push("khurana");
    cout << s.top(); // last in first out.
    s.pop();
    cout << s.top();
}

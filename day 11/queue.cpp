#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("purav");
    q.push("karteek");
    q.push("lavya");
    cout << "first element " << q.front();
    q.pop(); 
    cout << "first element after popping" << q.front(); 
}
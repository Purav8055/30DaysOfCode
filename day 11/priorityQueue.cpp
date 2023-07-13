#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi; // an array that is automatically adjusted to be in descending order
    // min heap
    priority_queue<int, vector<int>, greater<int> > mini; // an array that is automatically adjusted to be in ascending order
    
    

    maxi.push(3);
    maxi.push(6);
    maxi.push(4);
    maxi.push(0);

    mini.push(7);
    mini.push(3);
    mini.push(9);
    mini.push(5);

    priority_queue<int, vector<int>, greater<int> > a(mini); // vector named a copied mini

    int n = maxi.size();
    int m = mini.size();

    for(int i = 0;i<n;i++)
    {
        cout << maxi.top() << endl;
        maxi.pop();
    }
    for(int i = 0;i<m;i++)
    {
        cout << a.top() << endl;
        a.pop();
    }

}
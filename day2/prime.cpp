#include<iostream>
using namespace std;

int main()
{
    int n,flag=0,i=2;
    cin >> n;
    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
            cout << "composite";
            break;
        }
        i++;
    }
    if(flag==0)
    {
        cout << "prime";
    }
}
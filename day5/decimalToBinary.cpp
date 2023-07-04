#include<iostream>
using namespace std;

int main()
{
    int n,k=0;
    int bit[100]={0};
    cin >> n;
    while(n!=0)
    {
        bit[k] = n&1;
        n=n>>1;
        k++;
    }
    for(int i = k-1;i>=0;i--)
    {
        cout << bit[i];
    }
    
}

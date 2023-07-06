#include<iostream>
using namespace std;

int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int a=0,b=1;
    // 0 1 1 2 3 5 8 13 21 34
    int sum=0;
    for(int i = 1;i<=n-2;i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int ans = fibo(n);
    cout << ans;
}

#include<iostream>
#include<cmath>
using namespace std;

int m = pow(10,9) + 7;

int factorial(int n)
{
    int ans = 1;
    while(n>1)
    {
        ans = (1LL * (ans)%m * (n)%m)%m;
        n--;
    }
    return ans%m;
}

int main()
{
    
    int n;
    cout << "Enter the no.: ";
    cin >> n;
    int ans = factorial(n);
    cout << ans << endl;
}
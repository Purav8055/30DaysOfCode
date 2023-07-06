#include<iostream>
using namespace std;

int AP(int n)
{
    int ans = n*3+7;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = AP(n);
    cout << ans;
}
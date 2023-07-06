#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    while(n!=1)
    {
        fact=fact*n;
        n--;
    }
    return fact;
}

int ncr(int n,int r)
{
    int nFact,rFact,nrFact,ncr;
    nFact=factorial(n);
    rFact=factorial(r);
    nrFact=factorial(n-r);
    ncr=nFact/(rFact*nrFact);
    return ncr;
}

int main()
{
    int n,r;
    cin >> n;
    cin >> r;
    int ans = ncr(n,r);
    cout << ans;
}
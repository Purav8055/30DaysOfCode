#include<iostream>
using namespace std;

int main()
{
    int n,n100=0,n50=0,n20=0,n1=0;
    cin >> n;
    if(n>=100)
    {
        n100=n/100;
        n=n%100;
    }
    if(n>=50)
    {
        n50=n/50;
        n=n%50;
    }
    if(n>=20)
    {
        n20=n/20;
        n=n%20;
    }
    n1=n;
    cout << "No. of 100,50,20 and 1 rupee notes required are " << n100 << " " << n50 << " " << n20 << " and " << n1 << " respectively" << endl;    

}
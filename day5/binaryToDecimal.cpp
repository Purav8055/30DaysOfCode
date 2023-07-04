#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,digit,count=0,k=0,sum=0;
    cin >> n;
    while(n!=0)
    {
        digit=n%10;
        if(digit==1)
        {
            sum=sum+pow(2,k);
        }
        k++;
        n=n/10;
    }
    cout << sum;
}
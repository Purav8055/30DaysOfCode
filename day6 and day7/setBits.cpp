#include<iostream>
using namespace std;

int setBits(int a,int b)
{
    int count=0,bit;
    while(a!=0 || b!=0)
    {
        bit=a&1;
        if(bit==1)
            count+=1;
        bit=b&1;
        if(bit==1)
            count+=1;
        a=a>>1;
        b=b>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    int ans = setBits(a,b);
    cout << ans;
}
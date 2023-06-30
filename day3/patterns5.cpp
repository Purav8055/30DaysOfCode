#include<iostream>
using namespace std;

int main()
{
  /*D
    CD
    BCD
    ABCD*/
    int n,i=1,j=1;
    char ch = 65;
    cin >> n;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            ch=65;
            ch = ch+n-1-i+j;
            cout << ch;
            j++;
        }
        cout << "\n";
        i++;
    }
}
#include<iostream>
using namespace std;

int main()
{/*
      ---1
      --121 
      -12321
      1234321
      -12321
      --121
      ---1
      */
     int n,i=1,j=1;
     cin >> n;
     while(i<=n)
     {
        j=1;
        while(j<=n-i)
        {
            cout << " ";
            j++;
        }
        j=1;
        while(j<=i)
        {
            cout << j;
            j++;
        }
        j=1;
        while(j<=i-1)
        {
            cout << i-j;
            j++;
        }
        cout << "\n";
        i++;
     }
     i=1;
     j=1;
     while(i<=n-1)
     {
        j=1;
        while(j<=i)
        {
            cout << " ";
            j++;
        }
        j=1;
        while(j<=n-i)
        {
            cout << j;
            j++;
        }
        j=1;
        while(j<=n-i-1)
        {
            cout << n-j-i;
            j++;
        }
        cout << "\n";
        i++;
     }

}
#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1,k;
    cin >> n;
    while(i<=n)
    {
        j=1;
        k=i;
        while(j<=i)
        {
            cout << k << " ";
            k--;
            j++;
        }
        cout << "\n";
        i++;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1,k=1;
    cin >> n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout << k++ << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
}
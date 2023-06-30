#include<iostream>
using namespace std;

int main(){
    int n,i=1,j=1;
    cin >> n;
    char ch = 65;
    while(i<=n)
    {
        ch = 65;
        j=1;
        while(j<=n)
        {
            cout << ch;
            ch+=1;
            j++;
        }
        cout << "\n";
        i++;
    }
}
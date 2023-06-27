#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a>0){
        cout << "a is positive\n";
    }
    else if(a<0){
        cout << "a is negative\n";
    }
    else{
        cout << "a is zero\n";
    }
    sleep(5);
    }
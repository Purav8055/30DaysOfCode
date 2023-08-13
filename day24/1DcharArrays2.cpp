//inbuilt functions for char arrays
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr[100] = "hello",arr2[90]="hell",arr3[10];
    int len = strlen(arr);
    cout << len << endl;
    cout << strcmp(arr,arr2)<<endl; // returns 0 if equal else 1
    strcpy(arr3,arr2);
    cout << arr3[0] << " " << arr3[1] << " " << arr3[2] << endl;
}
#include<iostream>
using namespace std;

int getSum(int arr[],int size)
{
    int sum = 0;
    cout << "size of array: " << sizeof(arr) << endl;
    for(int i = 0;i<size;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[6] = {1,2,3,4,5,8};
    cout << getSum(arr,6) << endl;
    cout << "size of array comes out to be 4 when it should be 24 as in a function array is passed like a pointer. arr[] means *arr." << endl;
    cout << "which means we can also pass part of array like arr+3" << endl;
    cout << getSum(arr+3,3) << endl;
}
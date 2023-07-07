#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[],int size)
{
    int temp;
    for(int i = 0;i<size/2;i++)
    {
        temp = arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}

int main()
{
    int arr[10000]={0};
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr,n);
    printArray(arr,n);
}

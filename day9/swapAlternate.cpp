#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

void swapper(int arr[],int size)
{
    int temp = 0;
    for(int i = 0;i<size-1;i+=2)
    {
        // temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
        swap(arr[i],arr[i+1]);
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
    swapper(arr,n);
    printArray(arr,n);
}

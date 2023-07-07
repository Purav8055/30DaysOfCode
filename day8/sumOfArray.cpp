#include <iostream>
using namespace std;

int arraySum(int arr[],int size)
{
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    int arr[100000] = {0}; // better than using variable length arrays 🙂.
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    int sum = arraySum(arr,n);
    cout << sum;
}
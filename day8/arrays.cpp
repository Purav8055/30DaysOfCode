#include <iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for(int i = 0;i<size;i++)
    {
        cout << arr[i] << " ";
    }
}

int maxArray(int arr[],int size)
{
    int max = arr[0];
    for(int i = 1;i<size;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    return max;
}

int minArray(int arr[],int size)
{
    int min = arr[0];
    for(int i = 1;i<size;i++)
    {
        if(arr[i]<min)
            min = arr[i];
    }
    return min;
}


int main()
{
    int n;
    cout << "Enter size of array: "; // Using variable length arrays is a bad practice 🫤.
    cin >> n;
    int arr[n]={0};
    for(int i = 0;i<n;i++)
    {
        cout << "Enter element no. " << i+1 << ": ";
        cin >> arr[i];
    }

    int ans = maxArray(arr,n);
    cout << ans;

    ans = minArray(arr,n);
    cout << endl << ans;


}
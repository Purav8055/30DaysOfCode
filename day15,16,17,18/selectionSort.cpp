#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr,int size) // pass vector by reference not value otherwise copy will be created.
{
    for(int i = 0;i<size-1;i++)
    {
        for(int j = i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
                swap(arr[i],arr[j]);
        }
    }
}

int main()
{
    vector<int> arr(10000);
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}  
// best,worst case time complexity is O(n^2)

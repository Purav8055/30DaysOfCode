#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr,int size) // pass vector by reference not value otherwise copy will be created.
{
    for(int i = 1;i<size;i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
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
    insertionSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
// worst case time complexity is O(n^2)
// best case time complexity is O(n)

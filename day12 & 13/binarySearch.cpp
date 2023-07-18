#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key) // better than linear search as its time complexity is O(log n) whereas in linear search its O(n).
{
    int start = 0;
    int end = size-1;
    int mid = start +(end-start)/2;  // to prevent overflow
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[10000] = {0};
    int n,key;
    cout << "Enter size of array: ";
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to be searched: ";
    cin >> key;
    int ans = binarySearch(arr,n,key);
    cout << ans;
}

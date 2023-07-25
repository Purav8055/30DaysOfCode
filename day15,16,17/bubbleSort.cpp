#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr,int size) // pass vector by reference not value otherwise copy will be created.
{
    bool isSwapped = false; // optimisation
    for(int i = 0;i<size-1;i++)
    {
        for(int j = 0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwapped = true;     // optimisation
            }
        }
        if(isSwapped==false)  // optimisation
        {
            break;
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
    bubbleSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}
// worst case time complexity is O(n^2)
// best case time complexity is O(n)
#include<iostream>
using namespace std;

int main()
{
    int arr[10] =  {0}; // arr represents &arr[0]
    cout << "Address of 0th element is " << arr << endl;
    cout << "Address of 0th element is " << &arr[0] << endl;
    cout << "Address of 0th element is " << &arr << endl;
    cout << "Address of 1st element is " << &arr[1] << endl;
    cout << "Address of 2nd element is " << &arr[2] << endl;
    cout << "Address of 3rd element is " << &arr[3] << endl;
    cout << "pattern -> &arr[0] + sizeof(data type) = &arr[1]" << endl;
    cout << "*arr refers to the 0th element i.e. " << *arr << endl;
    cout << "*(arr + 1) means arr[1] " << *(arr+1) << endl;
    cout << "The way computer reads arr[i] is *(arr+i) which means arr[i] = *(arr+i)" << endl;
    cout << "That means i[arr] = *(i+arr) = arr[i]" << endl;
    
}
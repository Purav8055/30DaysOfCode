#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int arr[1000][1000];
    int row, col, target;
    cout << "Enter row of array: ";
    cin >> row;
    cout << "Enter column of array: ";
    cin >> col;
    cout << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
}

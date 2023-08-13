#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int, int> linearSearch(int arr[][1000], int target, int row, int col) {
    pair<int, int> index = {-1, -1}; // Initialize with -1 to indicate target not found
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (target == arr[i][j]) {
                index.first = i;
                index.second = j;
                return index;
            }
        }
    }
    return index;
}

int main() {
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
    cout << "Enter the target element: " << endl;
    cin >> target;

    pair<int, int> result = linearSearch(arr, target, row, col);

    if (result.first != -1) {
        cout << "Target found at: " << result.first << " " << result.second << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}

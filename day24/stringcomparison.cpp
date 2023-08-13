#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "apple";
    string str2 = "banana";

    int result = str1.compare(str2);
    /* 0 if the two strings are equal,
       a negative value if the first string is lexicographically smaller than the second string, and
       a positive value if the first string is lexicographically larger than the second string.*/

    if (result < 0) {
        cout << "str1 is lexicographically smaller than str2." << endl;
    } else if (result == 0) {
        cout << "Both strings are equal." << endl;
    } else {
        cout << "str1 is lexicographically larger than str2." << endl;
    }

    return 0;
}

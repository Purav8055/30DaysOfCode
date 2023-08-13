#include <iostream>
using namespace std;

int main() {
    string mainString = "Hello, this is a test string.";
    string substring = "test";

    // Find the first occurrence of the substring
    int position = mainString.find(substring); // returns index if found else returns string::npos which is a very large numerical value

    if (position != string::npos) {
        cout << "Substring found at position: " << position << endl;
    } else {
        cout << "Substring not found." << endl;
    }
    mainString.erase(mainString.find(substring),substring.length()); // erase function takes the index at which it starts erasing and the number of elements to be erased from that position
    cout << mainString << endl;

    return 0;
}

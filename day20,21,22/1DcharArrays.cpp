#include<iostream>
using namespace std;

int getLength(char name[])
{
    int count=0;
    for(int i = 0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin >> name;  // cin stops taking input whenever there is a space or tab or enter.
    cout << name;  // name is stored in memory as 'p' 'u' 'r' 'a' 'v' '\0' 'randooommmm'
    // cout stops printing when it encounters '\0'
    // cout << getLength(name);
    char s1[100];
    cin.ignore(); // for ignoring the previous cin
    cin.getline(s1,100); // for taking input with spaces
    cout << s1 << endl;
}

#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1,3,5,7};
    cout << binary_search(v.begin(),v.end(),1)<< endl; // only works if array is sorted in ascending order
    cout << lower_bound(v.begin(),v.end(),5)-v.begin() << endl; // works on sorted arrays only
    cout << upper_bound(v.begin(),v.end(),5)-v.begin() << endl;
    string s = "abcd";
    reverse(s.begin(),s.end());
    cout << s << endl;
    rotate(v.begin(),v.begin()+2 /*this becomes the new first element*/,v.end()); // to rotate in forward direction by 2 steps
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> u = {1,3,5,7};
    rotate(u.begin(),u.end()-1,u.end()); // to rotate in backward direction once
    for(int i : u)
    {
        cout << i << " ";
    }
}
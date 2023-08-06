#include<iostream>
#include<vector>
using namespace std;

vector<int> getSpace(string s)
{
    int n = s.size();
    vector<int> temp(1);
    for(int i = 0;i<n;i++)
    {
        if(s[i]==' ')
        {
            temp.push_back(i+1);
        }
    }
    temp.push_back(n+1);
    return temp;
}

void reverser(string &s,vector<int> space)
{
    int n = space.size();
    int k = 0;
    for(int i = 0;i<n-1;i++)
    {
        k=0;
        for(int j = space[i];j<(space[i]+space[i+1]-1)/2;j++)
        {
            swap(s[j],s[j+space[i+1]-space[i]-2-k]);
            k = k + 2;
        }
    }
}

int main()
{
    string s;
    getline(cin,s);
    vector<int> space(getSpace(s));
    reverser(s,space);
    cout << s <<endl;
}
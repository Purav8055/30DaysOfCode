#include<iostream>
using namespace std;

enum days{
    Sunday,      //0
    Monday,      //1 
    Tuesday,     //2
    Wednesday,   //3
    Thursday,    //4
    Friday,      //5
    Saturday     //6
};

int main()
{
    enum days today = Thursday;
    switch(today)
    {
        case Sunday :
        cout << "Sunday" << endl;
        break;
        case Thursday :
        cout << "Thursday" << endl;
        break;
        default:
        cout << "Others" << endl;
        break;
    }
}

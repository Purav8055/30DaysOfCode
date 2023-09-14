#include<iostream>
using namespace std;

// basically we pre decide how many bits will be alloted to each member
struct Config{
    unsigned int enableFeature1 : 1; // 1 or 0
    unsigned int enableFeature2 : 1; // 1 or 0
    int brightness : 4; // -8 to 7
    int volume : 5; // -16 to 15
};

int main()
{
    struct Config config;
    config.enableFeature1 = 0;
    config.enableFeature2 = 1;
    config.brightness = 5;
    config.volume = 12; // if over 15 then overflow warning and program gives bad output

    cout << config.enableFeature1 << endl;
    cout << config.enableFeature2 << endl;
    cout << config.brightness << endl;
    cout << config.volume << endl;
    cout << sizeof(config) << endl; // size is 4(32 bits) 11 bits for members and 21 bits for padding
}
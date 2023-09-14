#include <stdio.h>

// Define a structure with different data types
struct PaddedExample {
    char a;
    int b;
    double c;
};

// Define a packed structure with different data types
#pragma pack(push, 1) // here 1 means no padding
struct PackedExample {
    char a;
    int b;
    double c;
};
#pragma pack(pop)

int main() {
    struct PaddedExample paddedEx;
    struct PackedExample packedEx;

    printf("Size of 'struct PaddedExample': %lu bytes\n", sizeof(paddedEx));
    printf("Size of 'struct PackedExample': %lu bytes\n", sizeof(packedEx));

    return 0;
}

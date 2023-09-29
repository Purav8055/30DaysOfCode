#include<iostream>
using namespace std;

//inline functions should be used when the function body size is small. It makes the code more efficient. What happens basically in inline function is that instead of the compiler jumping to the function when it is called , it copies the entire function right at the line it is currently at. This solves function overhead.The inline keyword is more of a hint to the compiler. Modern compilers are often good at making optimization decisions, so you may not need to manually specify inline in many cases.

inline int square(int x)
{
    int ans = x * x;
    return ans;
}

int main()
{
    int a = 5;
    int result = square(a);
    cout << result << endl;
}

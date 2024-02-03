#include <iostream>
#include <cmath>
int main()
{
    int a =46;
    int b = 65;
    long long res = pow(a, b);
    int t = res % 10;
    int p = abs(t);
    std::cout << t << p;
    return 0;
}

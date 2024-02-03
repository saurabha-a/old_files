#include <iostream>
#include <cstring>

unsigned long int fib_of_n(int n, unsigned long int memo[])
{
    if(n == 0 || n == 1) return n;
    else
    {
        if(memo[n] == -1) memo[n] = fib_of_n(n-1,memo) + fib_of_n(n-2,memo);
        return memo[n];
    }
}

int main()
{
    unsigned long int memo[100];
    memset(memo, -1, sizeof(memo));
    unsigned long int res = fib_of_n(99, memo);
    std::cout << res;
    return 0;

}

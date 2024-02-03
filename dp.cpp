#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

class Solution {
  public:
    int memo[31];
    int fib(int n) {
        if(n ==0 || n ==1) return n;
        else if(memo[n]== -1) memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }
};

int main() {
    Solution ss;
    memset(ss.memo, -1, sizeof(ss.memo));
    cout << ss.fib(6);
    return 0;
}

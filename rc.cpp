#include <iostream>
#include <vector>

 //std::vector<unsigned long> dp;
 int dp[3];
 void fib(int n, int a =2) {
     if(a > n) return;
     else {
         dp[a] = dp[a-1] + dp[a-2];
         fib(n,a+=1);
     }
 }
 int main() {
    //dp.resize(6);
    dp[0] = 0;
    dp[1] = 1;
    fib(6);
    std::cout << dp[6] << std::endl;
    for(const auto i : dp) std::cout << i << " ";
    //std::cout << dp[100] << " " << dp[99] << " " << dp[98];
    return 0;
 }

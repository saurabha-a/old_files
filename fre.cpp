#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> v {2,2,3,3,3,4};
    int m = *max_element(v.begin(), v.end());
    vector<int> fr(m+1, 0);
    int dp[m+1];
    for(const auto i : v){
        fr[i]++;
    }
    dp[0] = 0;
    dp[1] = v[0];
    //for(const auto i : fr) cout << i << " ";
    return 0;
}

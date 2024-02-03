#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int partition(vector<int>& a, int b) {
        for(int i=0; i < a.size(); i++) {
            if(a[i] == b) return i;
        }
        return -1;
    }
    int max(vector<int>& c, int a, int b) {

    }
    int rob(vector<int>& nums, int a,) {
        if(a<0 || a>nums.size()-1) return 0;
        else {
            static int sum;
            sum+= nums[a];
            sum += rob(nums,)
        }
    }
};
int main() {
    vector<int> v {2,5,6,8,9};

    return 0;
}

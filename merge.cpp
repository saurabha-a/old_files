#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        int i =0, j =0;
        while(i<m) {
            if(nums1[i] > nums2[j]) {
                int tmp = nums1[i];
                nums1[i] = nums2[j];
                nums2[j] = tmp;
                if(j<n-1 && nums1[i] != nums2[j-1]) j++;
            }
            i++;
        }
       // for(const auto i : nums2) cout << i << " ";
        int k = 0;
        while(k<n-1) {
            if(nums2[k]>nums2[k+1]) {
                int p = nums2[k];
                nums2[k] = nums2[k+1];
                nums2[k+1] = p;
            }
            k++;
        }
        int q =0;i = m;
        while(q<n && i<nums1.size()) {
            nums1[i] = nums2[q];
            i++;
            q++;
        }
    }
};

int main() {
    vector<int> q{0,0,3,0,0,0,0,0,0};
    vector<int> p{-1,1,1,1,2,3};
    Solution s;
    s.merge(q,3,p,6);
    for(const auto i : q) cout << i << " ";
    return 0;
 }

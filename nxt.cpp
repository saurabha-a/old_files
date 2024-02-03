#include <iostream>
#include <vector>

#define db1(x) cout<<#x<<"="<<x<<'\n'
#define db2(x,y) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<'\n'
#define db3(x,y,z) cout<<#x<<"="<<x<<","<<#y<<"="<<y<<","<<#z<<"="<<z<<'\n'
#define rep(i,n) for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)

using namespace std;
using ll = long long;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        else{
        int i =0;
        while(i<m) {
            if(nums1[i] > nums2[0]) {
                int tmp = nums1[i];
                nums1[i] = nums2[0];
                nums2[0] = tmp;
                int k =1,j =0;
                while(k<n) {
                    if(nums2[j]>nums2[k]) {
                        int p = nums2[k];
                        nums2[k] = nums2[j];
                        nums2[j] = p;
                        j=k;
                        k++;
                    }
                    k=n;
                }
                i++;
            }
            i++;
        }
        int q =0;i = n;
        while(q<n && i<nums1.size()) {
            nums1[i] = nums2[q];
            i++;
            q++;
        }
        }
    }
};

int main()
{
    #ifndef online_judge
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> nums1(n), nums2(m);
        rep(i,n) cin>>nums1[i];
        rep(i,m) cin>>nums2[i];
        /**
         *<!-- programming logic function calls -->
         */
        Solution s;
        s.merge(nums1,n,nums2,m);
        for(const auto i : nums1) cout << i << " ";
    
        cout<<'\n';
    }
    return 0;
}

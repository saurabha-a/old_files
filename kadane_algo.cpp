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

int kadane_algo(vector<int> &v) {
    int maxsum =0, currsum =0;
    int n = v.size();
    rep(i,n) {
        currsum+=v[i];
        if(currsum>maxsum) maxsum = currsum;
        else if(currsum <0) currsum=0;
    }
    return maxsum;
}

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
        int n;
        cin>>n;
        vector<int> v(n);
        rep(i,n) cin>>v[i]; 	
        cout<<kadane_algo(v);

        cout<<'\n';
    }
    return 0;
}

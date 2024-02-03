#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i =0; i<n; i++) {
        string s;
        int a;
        cin >>s;
        if(s == "CLOSEALL") ar[i] =0;
        else {
            cin >> a;
            ar[i] = a;
        }
    }
    for(const auto i : ar) cout << i << " ";
    set<int> st;
    for(int i=0; i<n;i++){
        if(st.count(ar[i]) != st.end()) cout << n-- ;
    }
    return 0;
}

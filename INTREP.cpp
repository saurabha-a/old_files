// Template motivation: codeforces.com/blog/entry/68809
#include "bits/stdc++.h"
using namespace std;

#ifdef LOCAL_CERR_TO_COUT
#define cerr cout
#endif

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(char *x) {cerr << '\"' << x << '\"';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

// To use generic in pair<T, V>
template<typename T>    void __print(const T &x);

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

template<typename T>
void __print(stack<T> s){int f = 0; cerr << '{'; while (!s.empty()) cerr << (f++ ? "," : ""), __print(s.top()), s.pop();cerr << "}";}
template<typename T>
void __print(queue<T> q){int f = 0; cerr << '{'; while (!q.empty()) cerr << (f++ ? "," : ""), __print(q.front()), q.pop();cerr << "}";}

template<typename T, typename V>
void _print_a(T a, V sz) { int i = -1, f = 0; cerr << '['; while (++i < sz) cerr << (f++ ? "," : ""), __print(a[i]); cerr << "]";}
template<typename T, typename V, typename... W>
void _print_a(T a, V sz, W... szs) { int i = -1, f = 0; cerr << '['; while (++i < sz) cerr << (f++ ? "," : ""), _print_a(a[i], szs...); cerr << "]";}

#ifdef LOCAL
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#define debug_arr(x...) cerr << "[ARR[" << #x << "]] = "; _print_a(x); cerr << "\n";
#else
#define debug(x...)
#define debug_arr(x...)
#endif


#define endl '\n'
using ld = long double;
using ll = long long;
constexpr long long MOD = 1e9+7;
constexpr long long inf = 1e16;
constexpr int MAX = 1e5+5;

// Check if there are multiple testcases
#define MAX_LIMIT 1'005
bool is_prime[MAX_LIMIT];

void init_sieve() {
    for (int i = 3; i < MAX_LIMIT; i += 2){
        is_prime[i] = true;
    }
    is_prime[2] = true;
    for (int i = 3; i * i < MAX_LIMIT; i += 2) {
        if (is_prime[i]) {
            for(int j = i * i; j < MAX_LIMIT; j += 2 * i){
                is_prime[j] = false;
            }
        }
    }
}


void solve() {
   
    ll n;
    cin >> n;


    if (n % 2 == 0) {
        cout << 2 * n << " " << n << endl;
        return;
    }

    for (int i = 3; i < MAX_LIMIT; i++) {
        if (is_prime[i] && n % i != 0) {
           
            cout << n * i << " " << n * (i - 1) << endl;
            return;
        }
    }
    return;
}



int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    init_sieve();
    int32_t t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        solve();
    }

    #ifdef LOCAL
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "sec" << endl;
    #endif
    return 0;
}
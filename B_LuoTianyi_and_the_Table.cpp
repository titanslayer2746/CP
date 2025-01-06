#include <bits/stdc++.h>
using namespace std;

// Debug Mode
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << endl;
#else
    #define debug(x)
#endif

// Shortcuts for Data Types
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

// Macros for Loops
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define rrep(i, a, b) for (int i = a; i >= b; --i)
#define each(x, v) for (auto &x : v)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Macros for Debugging
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second

// Input and Output Macros
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define precise(x) cout << fixed << setprecision(x)

// Utility Macros
#define mod 1000000007
#define inf INT_MAX
#define llinf LLONG_MAX
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define clr(x) memset(x, 0, sizeof(x))
#define setneg(x) memset(x, -1, sizeof(x))

void solve(){
    int n,m;
    cin>>n>>m;

    vi v;
    
    rep(i,0,m*n){
        int a;
        cin>>a;

        v.pb(a);    
    }

    sort(all(v));

    int mini = v[0];
    int mini1 = v[0];
    int mini2 = v[1];

    int maxi = v[m*n-1];
    int maxi1 = v[m*n-1];
    int maxi2 = v[m*n-2];

    int s1 = (m-1)*(maxi-mini1) + (n-1)*(maxi-mini2) + (m*n-(m+n-1))*(maxi-mini);
    int s2 = (m-1)*(maxi-mini2) + (n-1)*(maxi-mini1) + (m*n-(m+n-1))*(maxi-mini);
    int s3 = (m-1)*(maxi1-mini) + (n-1)*(maxi2-mini) + (m*n-(m+n-1))*(maxi-mini);
    int s4 = (m-1)*(maxi2-mini) + (n-1)*(maxi1-mini) + (m*n-(m+n-1))*(maxi-mini);

    cout<<max({s1,s2,s3,s4})<<"\n";
}

int main() {
    FAST_IO;
    
    // Example Usage
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }

    return 0;
}

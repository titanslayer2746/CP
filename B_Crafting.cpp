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
    ll n;
    cin>>n;

    vector<ll> a;
    vector<ll> b;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        a.pb(x);
    }

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        b.pb(x);
    }

    int cnt = 0,onlyYeWalaSmallIndex;

    for(int i=0;i<n;i++){
        if(a[i]<b[i]) {
            cnt++;
            onlyYeWalaSmallIndex = i;
        }
    }

    if(cnt==1) {
        ll diff = b[onlyYeWalaSmallIndex]-a[onlyYeWalaSmallIndex];
        for(int i=0;i<n;i++){
            if(i!=onlyYeWalaSmallIndex&&a[i]-b[i]<diff){
                cout<<"NO"<<"\n";
                return;
            }
        }
        cout<<"YES"<<"\n";
    }
    else if(cnt==0){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
   
    
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

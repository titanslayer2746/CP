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
    ll n,k;
    cin>>n>>k;

    ll sum_till_k = k*(k-1)/2;
    ll total_sum = (n+k)*(n+k-1)/2 - sum_till_k;
    ll last = n+k-1;
    ll first = k;
    ll mid;
    
    while(last<first){
        mid = (first+last)/2;

        ll sum_till_mid = (n+mid)*(n+mid-1)/2 - sum_till_k;

        if(sum_till_mid<=total_sum-sum_till_mid){
            first = mid+1;
        }
        else{
            last = mid-1;
        }
    }

    ll sum_till_last = (n+mid)*(n+mid-1)/2 - sum_till_k;
    ll sum_till_first = (n+mid+1)*(n+mid)/2 - sum_till_k;
    
    ll ans1 = abs((total_sum-sum_till_last)-(sum_till_last));
    ll ans2 = abs((total_sum-sum_till_first)-(sum_till_first));
    cout<<ans1<<" "<<ans2<<"\n";

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

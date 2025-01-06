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
    int n;
    cin>>n;

    vi nums;
    
    rep(i,0,n){
        ll a;
        cin>>a;

        nums.pb(a);    
    }

    int cnt2 = 0;
    
    rep(i,0,n){
        if(nums[i]==2) cnt2++;
    }

    if(cnt2%2!=0) cout<<-1;
    else{
        int maxEl = *max_element(all(nums));
        int minEl = *min_element(all(nums));
        
        if(maxEl==minEl){
            if(maxEl==1){
                cout<<1;
            }
            else{
                cout<<n/2;
            }
        }

        else{
            int cnt = 0;
            
            rep(i,0,n){
                if(nums[i]==2) cnt++;
                if(cnt*2==cnt2){
                    cout<<i+1;
                    break;
                }    
            }
        }
    }

    cout<<"\n"; 
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

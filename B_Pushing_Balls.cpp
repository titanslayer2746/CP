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

    vector<string> a;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a.push_back(s);
    }

    vector<vector<bool>> v(n,vector<bool>(m,false));

    
    for(int i=0;i<n;i++){
        bool zf = false;
        for(int j=0;j<m;j++){
            if(zf){
                if(a[i][j]=='0') v[i][j] = true;
            }
            else{
                if(a[i][j]=='0') {
                    zf = true;
                }
                v[i][j] = true;                
            }
        }
    }

    for(int i=0;i<m;i++){
        bool zf = false;
        for(int j=0;j<n;j++){
            if(zf){
                if(a[j][i]=='0') v[j][i] = true;
            }
            else{
                if(a[j][i]=='0'){
                    zf = true;
                }
                v[j][i] = true;
            }
        }
    }

    bool ans = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans = ans && v[i][j];
        }
    }
    

    if(ans) cout<<"YES";
    else cout<<"NO";
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

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
    int n,k;
    cin>>n>>k;

    vi nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        nums.pb(a);
    }

    int first_occurrence = 0;
    int last_occurence = 0;

    unordered_map<int,int> mpp;

    
    rep(i,0,n){
        mpp[nums[i]]++;    
    }

    if(mpp[k]==0||mpp[k]>=(n+1)/2){
        cout<<0<<"\n";
        return;
    }

    for(int i=0;i<n;i++){
        if(nums[i]==k) {
            first_occurrence = i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(nums[i]==k){
            last_occurence = i;
            break;
        }
    }

    if(last_occurence==n-1||first_occurrence==0){
        cout<<1<<"\n";
        return;
    }

    if(last_occurence==n-2||first_occurrence==1){
        cout<<1<<"\n";
        return;
    }

    if(mpp[k]>=(n-first_occurrence+1)/2||mpp[k]>=(last_occurence+2)/2){
        cout<<1<<"\n";
        return;
    }

    cout<<2<<"\n";
    
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

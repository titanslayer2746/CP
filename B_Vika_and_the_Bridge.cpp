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

    vi nums(n);
    
    rep(i,0,n){
        cin>>nums[i];    
    }
    
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]].push_back(i);
    }

    int mini = INT_MAX;
    
    for(auto it : mp){
        vector<int> arr = it.second;
        int size = arr.size();
        priority_queue<int> pq;
        pq.push(arr[0]);
        for(int i=0;i<size-1;i++){
            pq.push(arr[i+1]-arr[i]-1);
        }
        pq.push(n-1-arr[size-1]);
        int tp = pq.top();
        pq.pop();
        tp/=2;
        pq.push(tp);
        mini = min(mini,pq.top());
    }
    cout<<mini<<endl;
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

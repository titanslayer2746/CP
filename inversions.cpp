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

ll Merge(vector<int>& nums,ll low, ll mid, ll high){
    ll left = low;
    ll right = mid+1;
    vector<int> temp;
    ll cnt = 0;

    while(left<=mid&&right<=high){
        if(nums[left]<=nums[right]){
            temp.pb(nums[left]);
            left++;
        }
        else{
            temp.pb(nums[right]);
            cnt += (mid-left+1);
            right++;
        }
    }

    while(left<=mid){
        temp.pb(nums[left]);
        left++;
    }
    while(right<=high){
        temp.pb(nums[right]);
        right++;
    }

    rep(i,low,high+1) nums[i] = temp[i-low];
    return cnt;
}
ll MergeSort(vector<int>& nums, ll low, ll high){
    ll cnt = 0;

    if(low<high){
        ll mid = (low+high)/2;
        cnt += MergeSort(nums, low, mid);
        cnt += MergeSort(nums, mid+1, high);
        cnt += Merge(nums, low, mid, high);
    }
    return cnt;
}
//2407851249
void solve(){
    int n;
    cin>>n;

    vi nums(n);
    rep(i,0,n) cin>>nums[i];

    cout<<MergeSort(nums,0,n-1);
    
    
}

int main() {
    FAST_IO;
    
    // Example Usage
    solve();
    

    return 0;
}

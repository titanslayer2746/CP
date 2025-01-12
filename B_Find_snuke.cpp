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

bool horizontalChecker(vector<string> &words, int i, int j){
    string s = words[i];
    if(s.substr(j,5)=="snuke"){
        return true;
    }

    return false;
}

bool verticalChecker(vector<string> &words, int i, int j){
    
}

void solve(){
    ll m,n;
    cin>>m>>n;

    vector<string> words;
    for(int i=0;i<m;i++){
        string s;
        cin>>s;

        words.push_back(s);
    }

    //check horizontally
    for(int i=0;i<m;i++){
        for(int j=0;j<=n-5;j++){
            if(horizontalChecker(words,i,j)){
                for(int c=j;c<=j+4;c++){
                    cout<<i+1<<" "<<c+1<<"\n";
                }
                return;
            }
        }
    }

    //check vertically
    for(int i=0;i<n;i++){
        for(int j=0;j<=m-5;j++){
            if(verticalChecker(words,i,j)){
                for(int c=j;c<=j+4;c++){
                    cout<<c+1<<" "<<i+1<<"\n";
                }
                return;
            }
        }
    }
    
    
}

int main() {
    FAST_IO;
    
    // Example Usage
    solve();

    return 0;
}

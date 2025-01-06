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

void solve() {
    char c;
    cin >> c;

    string s;
    cin >> s;

    string s1 = "qwertyuiop";
    string s2 = "asdfghjkl;";
    string s3 = "zxcvbnm,./";

    unordered_map<char, char> mpp;

    // Build the mapping
    if (c == 'R') {
        for (int i = 1; i < s1.size(); i++) {
            mpp[s1[i]] = s1[i - 1];
            mpp[s2[i]] = s2[i - 1];
            mpp[s3[i]] = s3[i - 1];
        }
    } else if (c == 'L') {
        for (int i = 0; i < s1.size() - 1; i++) {
            mpp[s1[i]] = s1[i + 1];
            mpp[s2[i]] = s2[i + 1];
            mpp[s3[i]] = s3[i + 1];
        }
    } else {
        cout << "Invalid shift direction!" << endl;
        return;
    }

    // Transform the string
    string ans = "";
    for (char ch : s) {
        ans += mpp[ch];
    }

    cout << ans << endl;
}


int main() {
    FAST_IO;
    
    solve();

    return 0;
}

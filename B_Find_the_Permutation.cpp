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
 int size_of_matrix;
        cin >> size_of_matrix;

        vector<string> matrix_representation_of_graph(size_of_matrix);
        for (int index_of_row = 0; index_of_row < size_of_matrix; ++index_of_row) {
            cin >> matrix_representation_of_graph[index_of_row];
        }

        vector<int> permutation_of_indices(size_of_matrix);
        iota(permutation_of_indices.begin(), permutation_of_indices.end(), 0);

        sort(permutation_of_indices.begin(), permutation_of_indices.end(), [&](int index_first, int index_second) {
            return index_first < index_second ? matrix_representation_of_graph[index_first][index_second] == '1' : matrix_representation_of_graph[index_first][index_second] == '0';
        });

        for (const auto &current_index : permutation_of_indices) {
            cout << current_index + 1 << " ";
        }
        cout << "\n";
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

#include <bits/stdc++.h>
 
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define gsize(x) (int)((x).size())
 
const char nl = '\n';
typedef long long ll;
typedef long double ld;
 
using namespace std;
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		
		vector<int> a(n);
		map<int, vector<int>> p;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			p[a[i]].push_back(i);
		}
		
		int ans = 0;
		set<int> ts;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] > a[i + 1]) ts.insert(i);
		}
		
		while (!ts.empty()) {
			int i = *ts.begin();
			int x;
			if (a[i] > 0) {
				x = a[i];
			} else {
				x = a[i + 1];
			}
			
			for (int j: p[x]) {
				a[j] = 0;
				ts.erase(j - 1);
				ts.erase(j);
				if (j > 0 && a[j - 1] > a[j]) ts.insert(j - 1);
				if (j + 1 < n && a[j] > a[j + 1]) ts.insert(j);
			}
			ans++;
		}
		
		cout << ans << nl;
	}
}
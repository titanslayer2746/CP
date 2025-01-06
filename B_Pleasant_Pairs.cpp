#include<bits/stdc++.h>

using namespace std;

#define ll long long

multiset<ll> primeFactors(ll n){
	multiset<ll> pf;

	while(n%2==0) {
		n /= 2;
		pf.insert(2);
	}

	for(int i=3;i<=sqrt(n);i+=2){
		
		while(n%i==0) {
			n /= i;
			pf.insert(i);
		}
	}

	if(n>2) pf.insert(n);
	return pf;
} 

bool isPrime(ll n){
	if(n<2||n%2==0) return false;
	
	for(int i=3;i*i<=n;i+=2){
		if(n%i==0) return false;
	}

	return true;
}

vector<bool> primeNumbers(ll n){
       vector<bool> is_prime(n+1, true);
       is_prime[0] = is_prime[1] = false;
       for (int i = 2; i <= n; i++) {
            if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
            is_prime[j] = false;
            }
        }
        return is_prime;
}

int main(){

	int t;
	cin>>t;

	while(t--){
		int n;
		cin>>n;

		vector<pair<int,int>> nums;

		for(int i=0;i<n;i++){
			int a;
			cin>>a;

			nums.push_back({a,i+1});
		}

		sort(nums.begin(),nums.end());
		int cnt = 0;

		for(int i=0;i<n-1;i++){

			int idx1 = nums[i].second;
			int val1 = nums[i].first;

			for(int j=i+1;j<n;j++){
				int idx2 = nums[j].second;
				int val2 = nums[j].first;

				if((ll)val1*val2==idx1+idx2) cnt++;
				else{
					if((ll)val1*val2>2*n) break;
				}
			}
		}
	

		cout<<cnt<<"\n";
	}

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n,l,r;
        cin>>n>>l>>r;
        l--; r--;

        vector<int> nums;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;

            nums.push_back(a);
        }

        ll ans1=0;
        for(int i=l;i<=r;i++){
            ans1 += nums[i];
        }

        ll ans2 = ans1, ans3 = ans1;
        int temp = r-l+1;

        sort(nums.begin(),nums.begin()+l-1);
        sort(nums.begin()+r+1,nums.end());
        sort(nums.begin()+l,nums.begin()+r);

        ll extra1 = accumulate(nums.begin()+l,nums)

        for(int i=0;i<min(l,temp);i++){
            ans2 -= nums[i+temp];
            ans2 += nums[i];
        }

    }
    return 0;
}
// problem link: https://codeforces.com/contest/1520/problem/D
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;
    cin >> n;
    vector<int> v(n);
    map<int,int> mp;
    for(int i = 0;i < n; ++i){
        cin >> v[i];
        v[i]-= i;
        mp[v[i]]++;
    }
    long long ans = 0;
    for(int i = 0;i < n ;++i){
        mp[v[i]]--;
        ans += mp[v[i]];
    }
    cout << ans << '\n';
}
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t = 1;
	 cin >> t;
	while(t--){
		solve();
	}
}

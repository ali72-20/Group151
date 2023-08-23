// problem link: https://codeforces.com/contest/1520/problem/B
#include<bits/stdc++.h>
using namespace std;
void solve(){
	 int n;
    cin >> n;
    if(n <= 9){
        cout << n << '\n';
        return;
    }
    int cnt = 9;
    for(int i = 1; i <= 9; ++i){
        string tmp;
        tmp.push_back(char(i + '0'));
        while(stoll(tmp + char(i + '0')) <= n){
            cnt++;
            tmp.push_back(char(i + '0'));
        }
    }
    cout << cnt << '\n';
}
int main(){
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t = 1;
	 cin >> t;
	while(t--){
		solve();
	}
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n;
	int k;
	cin >> n >> k;
	vector<ll> s, l; //small, large div
	
	for(int i = 1; i * i <= n; i++){
	    if(n % i == 0){
	        s.push_back(i);
	        if(i != n / i)
	        l.push_back(n / i);
	    }
	}
	
	reverse(l.begin(), l.end());
	s.insert(s.end(), l.begin(), l.end());
	
	if(s.size() < k)
	cout << -1;
	else
	cout << s[k - 1];
	return 0;
}

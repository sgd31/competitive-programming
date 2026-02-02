#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int n;
	cin >> n;
	int ans = 0;
	ll g = 0;
	
	for(int i = 0; i < n; i++){
		ll v;
		cin >> v;
		g = gcd(g, v);
	}
	
    for(int i = 1; i * 1ll * i <= g; i++){
    	if(g % i == 0){
    		ans++;
    		if(i != g / i)
    		ans++;
    	}
    }
    
	cout << ans;
	return 0;
}

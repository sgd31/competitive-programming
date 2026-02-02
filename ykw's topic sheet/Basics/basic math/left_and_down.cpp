#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void ans(){
	ll a, b, k;
	cin >> a >> b >> k;
	ll g = gcd(a, b);
	a /= g;
	b /= g;
	cout << ((a <= k &&  b <= k) ? 1 : 2);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ans();
	}
	return 0;

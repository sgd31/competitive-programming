// 1. Weird Algorithm
#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	cout << n;
	while(n > 1){
	if(n % 2 == 0)
	    n = n / 2;
	else
	    n = (3 * n) + 1;
	cout << " " << n;
}

// 2. Missing Number
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin >> n;
	ll t, s = 0;
	t = n * (n + 1) / 2;
	for(int i = 0; i < n - 1; i++){
	    ll m;
	    cin >> m;
	    s += m;
	}
	cout << t - s << endl;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<long long> a;
	long long x;
	
	while(cin >> x){
		a.push_back(x);
	}
	
	for(int i = a.size() - 1; i >= 0; i--){
		double res = sqrt(a[i]);
		cout << fixed << setprecision(4) << res << "\n";
	}
	
	return 0;
}

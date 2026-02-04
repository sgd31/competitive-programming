#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<int> x(n);
	for(int i = 0; i < n; i++) {
		cin >> x[i];
		int count = 0;
		for(int j = 1; j * j <= x[i]; j++) {
			if(x[i] % j == 0) {
			count++;
			if(j != x[i] / j)
			count++;
			}
		}
		cout << count << "\n";
	}
	return 0;
}

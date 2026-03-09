//1. merging arrays

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	vector<int> a(n); //init arr 1
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> b(m); //init arr 2
	for(int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int i = 0, j = 0, k = 0; //navigating ptrs
	vector<int> c(n + m); // init arr 3 size
	while(i < n || j < m) { //loop runs while one of an array still contains elements
		if(j == m || (i < n && a[i] < b[j])) //cases 1 and 2
		c[k++] = a[i++];
		else
		c[k++] = b[j++];
	}
	
	for(int x : c) {
		cout << x << " ";
	} //o/p array elements after merged
	cout << '\n';
	return 0;
}

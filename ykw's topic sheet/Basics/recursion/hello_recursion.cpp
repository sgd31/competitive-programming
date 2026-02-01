#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> &v, int n){
	if(n == 0)
	return 0;
	return v[n - 1] + sum(v, n - 1);
}

int main(){
	int T;
	cin >> T;
	for(int t = 1; t <= T; t++){
		int N;
		cin >> N;
		vector<int> v(N);
		for(int i = 0; i < N; i++){
			cin >> v[i];
		}	
		int ans = sum(v, N);
		cout << "Case " << t << ": " << ans << "\n";
	}
	return 0;
}

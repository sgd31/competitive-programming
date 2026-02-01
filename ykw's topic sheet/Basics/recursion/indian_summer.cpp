#include <bits/stdc++.h>
using namespace std;

int ans(set<pair<string, string>> &p){
	return p.size();
}

int main(){
	int n;
	cin >> n;
	set<pair<string, string>> p;
	for(int i = 0; i < n; i++){
		string first, second;
		cin >> first >> second;
		p.insert({first, second});
	}
	cout << ans(p) << "\n";
	return 0;
}

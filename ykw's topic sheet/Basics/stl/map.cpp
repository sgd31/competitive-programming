/* template, gen info

std::map <key_type, data_type>

map<string,int>m; -> declaration

m.insert(make_pair("hello",9)); -> insertion

int length=m.size(); -> size

m.erase(val); -> erase val

map<string,int>::iterator itr=m.find(val); -> find val

itr==m.end() -> find if not key val*/

// 1. MAPS 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    map<string,int> mp;
    while(q--){
        int t;
        cin >> t;
        if(t == 1) {
            string x;
            int y;
            cin >> x >> y;
            mp[x] += y;
        }
        if(t == 2) {
            string x;
            cin >> x;
            mp.erase(x);
        }
        if(t == 3) {
            string x;
            cin >> x;
            cout << mp[x] << "\n";
        }
    } 
    return 0;
}

// 2. FIGUREFUL

#include <bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	map<pair<int, int>, string> mp;
	while(n--) {
		int a, b;
		string s;
		cin >> a >> b >> s;
		mp[{a, b}] = s;
	}
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		if(mp.find({x, y}) != mp.end())
		cout << mp[{x, y}] << "\n";
	}
	return 0;
}

// 3. Hay Points

	int m, n;
	cin >> m >> n;
	map<string,int> mp;
	for(int i = 0; i < m; i++) {
		string s;
		int a;
		cin >> s >> a;
		mp[s] += a;
	}
	while(n--) {
		long long sum = 0;
		string s;
		while(cin >> s) {
			if(s == ".")
			break;
			sum += mp[s];
		}
		cout << sum << "\n";
	}

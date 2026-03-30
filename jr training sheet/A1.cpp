//Sereja and Dima

#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	vector<int> v(t);
	for(int i = 0; i < t; ++i) {
		cin >> v[i];
	}
	int left = 0, right = t - 1;
	int serejaScore = 0, dimaScore = 0;
	bool serejaTurn = true;
	while(left <= right) {
		int val = 0;
		if(v[left] > v[right]) {
			val = v[left];
			++left;
		}
		else {
			val = v[right];
			--right;
		}
		if(serejaTurn) {
			serejaScore += val;
		}
		else {
			dimaScore += val;
		}
		serejaTurn = !serejaTurn;
	}
	cout << serejaScore << " " << dimaScore;
	return 0;
}


//Night at the Museum

string s;
	cin >> s;
	int ans = 0;
	char curr = 'a';
	for(int i = 0; i < s.size(); ++i) {
		char target = s[i];
		int dist = abs(curr - target);
		ans += min(dist, 26 - dist);
		curr = target;
	}
	cout << ans << '\n';


//Petya and Strings

string s, t;
	cin >> s >> t;
	int n = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] >= 'A' && s[i] <= 'Z')
		s[i] = s[i] + 32;
		if(t[i] >= 'A' && t[i] <= 'Z')
		t[i] = t[i] + 32;
		if(s == t)
		n = 0;
		else if(s > t)
		n = 1;
		else
		n = -1;
	}
	cout << n;


//Boy or Girl

string s;
	cin >> s;
	set<char> distinct(s.begin(), s.end());
	if(distinct.size() % 2 == 0)
	cout << "CHAT WITH HER!";
	else if(distinct.size() % 2 == 1)
	cout << "IGNORE HIM!";


//Anton and Letters

string s;
	getline(cin, s);
	set<char> distinct;
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] >= 'a' && s[i] <= 'z')
		distinct.insert(s[i]);
	}
	cout << distinct.size();


//Word

string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] >= 90)
		++cnt;
	}
	for(int i = 0; i < s.size(); i++) {
		if(cnt >= s.size() - cnt)
		s[i] = tolower(s[i]);
		else
		s[i] = toupper(s[i]);
	}
	cout << s;


//Magnets

int t;
	cin >> t;
	string prev, curr;
	cin >> prev;
	int groups = 1;
	for(int i = 1; i < t; ++i) {
		cin >> curr;
		if(prev != curr)
		++groups;
		prev = curr;
	}
	cout << groups;


//Stones on the Table

int t;
	cin >> t;
	string s;
	cin >> s;
	int count = 0;
	for(int i = 0; i < t; ++i) {
		if(s[i] == s[i + 1])
		++count;
	}
	cout << count;


//Police Recruits

int t;
	cin >> t;
	int sum = 0, ans = 0;
	while(t--) {
		int n;
		cin >> n;
		if(n == -1) {
			if(!sum)
			++ans;
			else
			--sum;
		}
		else
		sum += n;	
	}
	cout << ans;

//

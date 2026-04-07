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

//Black Square
int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	string s;
	cin >> s;
	int sum = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '1')
		sum += a1;
		if(s[i] == '2')
		sum += a2;
		if(s[i] == '3')
		sum += a3;
		if(s[i] == '4')
		sum += a4;
	}
	cout << sum << '\n';

//Carrot Cakes
int n, t, k, d;
	cin >> n >> t >> k >> d;
	int g = (n + k - 1) / k;
	int t1 = 0, t2 = d;
	for(int i = 0; i < g; ++i) {
		if(t1 <= t2)
		t1 += t;
		else
		t2 += t;
	}
	if(max(t1, t2) < g * t)
	cout << "YES\n";
	else
	cout << "NO\n";

//Helpful Maths
	string s;
	cin >> s;
	vector<char> v;
	for(char c : s) {
		if(c != '+')
		v.push_back(c);		
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < v.size(); ++i) {
		if(i > 0) {
			cout << '+';
		}
		cout << v[i];
	}

//Free Ice Cream
	int n, x;
	cin >> n >> x;
	long long sum = x, child = 0; //initializing sum as x
	for(int i = 0; i < n; ++i) {
		char ch;
		int d;
		cin >> ch >> d;
		if(ch == '+')
		sum += d;
		else if(ch == '-') {
			if(sum >= d)
			sum -= d;
			else
			++child;
		}
	}
	cout << sum << " " << child;

//Team Olympiad

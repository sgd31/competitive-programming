//1. distinct numbers

#include <iostream>
#include <set>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	cout << s.size();
    return 0;
}

//2. concert tickets

      ll n, m;
      cin >> n >> m;
      multiset<ll> s;
      for(ll i = 0; i < n; i++) {
      	ll h;
      	cin >> h;
      	s.insert(h);
      }
      while(m--) {
      	ll t;
      	cin >> t;
      	auto it = s.upper_bound(t);
      	if(it == s.begin())
      	cout << -1 << "\n";
      	else {
      		it--;
      		cout << *it << "\n";
      		s.erase(it);
      	}	
      }

//3. double ended priority queue

	int n, q; 
	cin >> n >> q;
	multiset<ll> m;
	for(int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		m.insert(x);
	}
	while(q--) {
		int t;
		cin >> t;
		if(t == 0) {
			ll x;
			cin >> x;
			m.insert(x);	
		}
		else if(t == 1) {
			auto it = m.begin();
			cout << *it << "\n";
			m.erase(it);
		}
		else if(t == 2) {
			auto it = prev(m.end());
			cout << *it << "\n";
			m.erase(it);
		}	
	}

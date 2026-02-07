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

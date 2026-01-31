#include <iostream>
using namespace std;
#define ll long long
 
int main() {
	ll n;
	cin >> n;
	ll t, s = 0;
	t = n * (n + 1) / 2;
	for(int i = 0; i < n - 1; i++){
	    ll m;
	    cin >> m;
	    s += m;
	}
	cout << t - s << "\n";
}

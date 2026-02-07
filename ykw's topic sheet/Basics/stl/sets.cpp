//1. Sets STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
       ios::sync_with_stdio(false);
       cin.tie(0);
       int q;
       cin >> q;
       set<int> s;
       while(q--) {
        int y, x;
        cin >> y >> x;
        if(y == 1)
        s.insert(x);
        if(y == 2)
        s.erase(x);
        if(y == 3) {
        	if(s.find(x) != s.end())
	        cout << "Yes\n";
	        else
	        cout << "No\n";
        }
       }
    return 0;
}

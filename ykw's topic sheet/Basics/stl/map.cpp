/* template, gen info
std::map <key_type, data_type>

map<string,int>m; -> declaration

m.insert(make_pair("hello",9)); -> insertion

int length=m.size(); -> size

m.erase(val); -> erase val

map<string,int>::iterator itr=m.find(val); -> find val

itr==m.end() -> find if not key val*/

//1. MAPS 

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

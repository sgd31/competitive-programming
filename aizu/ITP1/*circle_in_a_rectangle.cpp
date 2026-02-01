#include <bits/stdc++.h>
using namespace std;

int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    if((x >= r && W - r >= x) && (y >= r && H - r >= y))
    cout << "Yes\n";
    else
    cout << "No\n";
    return 0;
}

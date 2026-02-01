#include <bits/stdc++.h>
using namespace std;
int main(){
	int i, x, y;
	for(i = 1; ;i++){
		cin >> x >> y;
		if(x == 0 && y == 0)
		break;
		if(x > y)
		swap(x, y);
		cout << x << " " << y << endl;
	}
	return 0;
}

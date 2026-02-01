#include <iostream>
#include <algorithm> //for max, min
#include <climits> //for INT_MAX and INT_MIN
using namespace std;

int main(){
	int n;
	cin >> n;
	long long sum = 0;
	int max_val = INT_MIN;
	int min_val = INT_MAX;
	for(int i=0; i<n; i++){
	    int a;
	    cin >> a;
	    sum += a;
	    max_val = max(max_val, a);
	    min_val = min(min_val, a);
	}
	cout << min_val << " " << max_val << " " << sum << "\n";
	return 0;
}

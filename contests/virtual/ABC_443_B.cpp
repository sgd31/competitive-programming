#include <iostream>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int sum = 0, y = 0;
	while(sum < k){
		sum += n + y;
		y += 1;
	}
	cout << y - 1 << "\n";
	return 0;
}

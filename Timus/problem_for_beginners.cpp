/* general -

	#include <iostream>
	using namespace std;

	int main() {
	return 0;
	} */

//1. a + b problem

int a, b;
cin >> a >> b;
cout << a + b << "\n";

//2. reverse root

	vector<long long> a;
	long long x;
	while(cin >> x){
		a.push_back(x);
	}
	for(int i = a.size() - 1; i >= 0; i--){
		double res = sqrt(a[i]);
		cout << fixed << setprecision(4) << res << "\n";
	}

//3. two gangsters

	int h, l;
	cin >> h >> l;
	cout << l - 1 << " "<< h - 1 << "\n";

#include <bits/stdc++.h>
using namespace std;

int main(){
	double r;
	cin >> r;
	double pi = 3.14159265358979323846;
	double a = pi * r * r;
	double c = 2 * pi * r;
	cout << fixed << setprecision(6) << a << " " << fixed << setprecision(6) << c << endl;
	return 0;
}

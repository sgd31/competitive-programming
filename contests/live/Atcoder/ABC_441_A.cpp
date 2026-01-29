#include <iostream>
using namespace std;

int main() {
	int p, q, x, y;
	cin >> p >> q >> x >> y;
	if((x >= p && x <= (100 + p) - 1) && (y >= q && y <= (100 + q) - 1))
	cout << "Yes" << "\n";
	else
	cout << "No" << "\n";
	return 0;
}

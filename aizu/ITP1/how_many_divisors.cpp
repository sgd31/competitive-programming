#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int num = 0;
	for(int i = a; i <= b; i++){
		if(c % i == 0)
		num += 1;
	}
	cout << num << "\n";
	return 0;
}

//I. I/O Statements 

//1. kattis hello world
#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "Hello World!" << '\n';
}

//2. UVa 10071
	int v = 0, t = 0, count = 0;
	while(cin >> v >> t) {
		cout << 2 * v * t << '\n';
		count++;

//3. UVa 11614

//4. UVA 13025
cout << "May 29, 2013 Wednesday\n";

//5. kattis carrots
	int n, p;
    cin >> n >> p;
    while(n--){
        string s;
        getline(cin, s);
    }
    cout << p;

//6. kattis- r2

//7. Kattis- thelastproblem
	string s;
    getline(cin, s);
    cout << "Thank you, " << s << ", and farewell!";

***

//II. Repetition Only

//1. Kattis- timeloop
	int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << i << " Abracadabra\n";
    }

//2. UVa 01124

//3. UVa 11044

//4. UVa 11547
	int t;
	cin >> t;
	int res = 0;
	while(t--) {
		int n;
		cin >> n;
		res = (((n * 567 ) / 9 + 7492) * 235) / 47 - 498;
		cout << abs((res / 10) % 10) << '\n';
	}

//5. Kattis- different
	long long a = 0, b = 0;
	while(cin >> a >> b) {
		cout << abs(b - a) << '\n';
	}

//6. Kattis- qaly
	int N;
    cin >> N;
    float sum = 0;
    while(N--) {
        float a, b;
        cin >> a >> b;
        sum += a * b;
    }
    cout << fixed << setprecision(3) << sum << '\n';

//7. Kattis- tarifa
	int x, n;
    cin >> x;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        int p;
        cin >> p;
        sum += p;
    }
    cout << (n + 1) * x - (sum);

***
	
//III. Selection Only

//1. Kattis- moscowdream
	int a, b, c, n; 
    cin >> a >> b >> c >> n;
    cout << ((a >= 1 && b >= 1 && c >= 1 && a+b+c >= n && n >= 3) ? "YES\n" : "NO\n");

//2. Kattis- isithalloween
	string s;
    int d;
    cin >> s >> d;
    cout << (((s == "OCT" && d == 31) || (s == "DEC" && d == 25)) ? "yup" : "nope");

//3. Kattis- judgingmoose
	int l, r;
    cin >> l >> r;
    if(l == 0 && r == 0)
    cout << "Not a moose";
    else if(l == r)
    cout << "Even " << 2 * l;
    else
    cout << "Odd " << 2 * max(l, r);

//4. Kattis- onechicken
	int n, m;
    cin >> n >> m;
    if(n > m && n - m != 1)
    cout << "Dr. Chaz needs " << n - m << " more pieces of chicken!" << '\n';
    else if(n - m == 1)
    cout << "Dr. Chaz needs 1 more piece of chicken!" << '\n';
    else if(n < m && m - n != 1)
    cout << "Dr. Chaz will have " << m - n << " pieces of chicken left over!" << '\n';
    else if(m - n == 1)
    cout << "Dr. Chaz will have 1 piece of chicken left over!" << '\n';

//5. Kattis- provincesandgold

//6. Kattis- quadrant 
	int x, y; 
	cin >> x >> y; 
	if(x>0 && y>0) 
	cout << "1"; 
	if(x<0 && y>0) 
	cout << "2"; 
	if(x<0 && y<0) 
	cout << "3"; 
	if(x>0 && y<0) 
	cout << "4";

//7. Kattis- temperature

***
//IV. Multiple Test Cases + Selection

//1. Kattis- oddities
	int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 2 == 0)
        cout << n << " is even\n";
        else
        cout << n << " is odd\n";
    }

//2. UVa 11172
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		if(a > b)
		cout << ">\n";
		else if(a < b)
		cout << "<\n";
		else if(a == b)
		cout << "=\n";
	}

//3. UVa 12250
	string s, l;
	int count = 0;
	while(cin >> s) {
		if(s == "HELLO")
		l = "ENGLISH";
		else if(s == "HOLA")
		l = "SPANISH";
		else if(s == "HALLO")
		l = "GERMAN";
		else if(s == "BONJOUR")
		l = "FRENCH";
		else if(s == "CIAO")
		l = "ITALIAN";
		else if(s == "ZDRAVSTVUJTE")
		l = "RUSSIAN";
		else if(s == "#") {
			break;
		}
		else
		l = "UNKNOWN";
		count++;
		cout << "Case " << count << ": " << l << '\n';

//4. UVa 12372

//5. Kattis- eligibility

//6. Kattis- helpaphd

//7. Kattis- leftbeehind

***

//V. Control Flow

//1. Kattis- statistics
	int n, m;
    int x = 1;
    while(cin >> n) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> m;
            if(m > mx)
            mx = m;
            if(m < mn)
            mn = m;
        }
        cout << "Case " << x << ": " << mn << " " << mx << " " << mx - mn << '\n';
        x++;
    }

//2. UVa 11764
	int T;
	cin >> T;
	int x = 1;
	while(T--) {
		int N;
		cin >> N;
		int a[N];
		for(int i = 0; i < N; i++) {
			cin >> a[i];
		}
		int h = 0, l = 0;
		for(int i = 0; i < N - 1; i++) { //boundary check
			if(a[i] < a[i + 1])
			h++;
			if(a[i] > a[i + 1])
			l++;
		}
		cout << "Case " << x << ": " << h << " " << l << '\n';
		x++;
	}

//3. UVa 11799

//4. UVa 12279

//5. Kattis- fizzbuzz

//6. Kattis- licensetolaunch

//7. Kattis- oddgnome

***

//VI. Function

//1. Kattis- mia
int convertScore(int i0, int i1) {
	if((i0 == 1 && i1 == 2) || (i0 == 2 && i1 == 1)) return 1000;
	else if(i0 == i1) return 100 + i0;
	else return max(i0, i1) * 10 + min(i0, i1);
}

int main() {
	int s0, s1, r0, r1, score1, score2;
	while(true) {
		cin >> s0 >> s1 >> r0 >> r1;
		if(s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) break;
		score1 = convertScore(s0, s1);
		score2 = convertScore(r0, r1);
		if(score1 > score2) cout << "Player 1 wins.\n";
		else if(score2 > score1) cout << "Player 2 wins.\n";
		else cout << "Tie.\n";
	}

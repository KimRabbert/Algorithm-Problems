// Jungol 5545 연필 공장
// 2026-08-27
// Solved by cmKim

#include <iostream>
using namespace std;

int getGCD(long long a, long long b) {
	long long r = a % b;

	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int main() {
	long long p, v, k;
	long long a, b, c, d;

	cin >> p >> v >> k;

	b = k / ((p + 1) * (v + 1) / getGCD(p + 1, v + 1));
	c = k / (v + 1) - b;
	d = k / (p + 1) - b;
	a = k - (b + c + d);

	cout << a << ' ' << b << ' ' << c << ' ' << d;
}
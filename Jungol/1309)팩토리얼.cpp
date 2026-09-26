// Jungol 1309 팩토리얼
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

long long fac(long long n) {
	if (n == 1) {
		cout << "1! = 1\n";
		return 1;
	}

	cout << n << "! = " << n << " * " << n - 1 << "!\n";
	return fac(n - 1) * n;
}

int main() {
	int n;

	cin >> n;

	cout << fac(n);
}
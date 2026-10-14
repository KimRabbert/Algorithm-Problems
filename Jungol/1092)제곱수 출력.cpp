// Jungol 1092 제곱수 출력
// 2026-10-14
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	const unsigned int divisor = 20091024;
	unsigned int x, y;
	unsigned int remainder[32];
	unsigned int result = 1;
	unsigned int j = 1;

	cin >> x >> y;

	remainder[0] = x % divisor;
	for (int i = 1; i < 32; i++) {
		remainder[i] = (unsigned long long)remainder[i - 1] * remainder[i - 1] % divisor;
	}

	for (int i = 0; i < 32; i++) {
		if (y & j) {
			result = (unsigned long long)result * remainder[i] % divisor;
		}

		j = j << 1;
	}

	cout << result;
}
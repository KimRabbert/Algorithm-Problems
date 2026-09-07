// Jungol 1740 소수
// 2026-09-07
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m, n;
	int minPrime;
	int sum = -1;
	vector<bool> isPrime;

	cin >> m >> n;

	isPrime.assign(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i < n + 1; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j < n + 1; j += i)
				isPrime[j] = false;

			if (i >= m) {
				if (sum == -1) {
					sum = 0;
					minPrime = i;
				}

				sum += i;
			}
		}
	}

	cout << sum;
	if (sum != -1) cout << '\n' << minPrime;
}
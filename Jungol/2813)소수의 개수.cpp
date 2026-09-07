// Jungol 2813 소수의 개수
// 2026-09-07
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int m, n;
	int cnt = 0;
	vector<bool> isPrime;

	cin >> m >> n;

	isPrime.assign(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i < n + 1; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j < n + 1; j += i)
				isPrime[j] = false;

			if (i >= m) cnt++;
		}
	}

	cout << cnt;
}
// Jungol 1901 소수 구하기
// 2026-09-07
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;
	int diff = 0;
	bool isPrime[1000001];
	bool flag;

	for (int i = 0; i < 1000001; i++)
		isPrime[i] = true;

	isPrime[0] = false;
	isPrime[1] = false;

	for (int i = 2; i < 500001; i++) {
		if (isPrime[i]) {
			for (int j = i * 2; j < 1000001; j += i)
				isPrime[j] = false;
		}
	}

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;

		diff = 0;
		flag = false;

		if (isPrime[m])
			cout << m;
		else {
			while (!flag) {
				if (m - diff > 1 && isPrime[m - diff]) {
					cout << m - diff << ' ';
					flag = true;
				}
				if (m + diff < 1000000 && isPrime[m + diff]) {
					cout << m + diff;
					flag = true;
				}

				diff++;
			}
		}
		cout << '\n';
	}
}
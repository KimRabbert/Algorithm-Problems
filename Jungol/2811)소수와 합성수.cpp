// Jungol 2811 소수와 합성수
// 2026-09-07
// Solved by cmKim

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	int n;

	for (int i = 0; i < 5; i++) {
		cin >> n;

		if (n == 1) {
			cout << "number one\n";
		}
		else {
			if (isPrime(n)) {
				cout << "prime number\n";
			}
			else {
				cout << "composite number\n";
			}
		}
	}
}
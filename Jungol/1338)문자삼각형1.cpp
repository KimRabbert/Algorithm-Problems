// Jungol 1338 문자삼각형1
// 2026-08-28
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;
	int cnt;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << "  ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << (char)((int)'A' + (i + j * (n * 2 - j - 1) / 2) % 26) << ' ';
		}

		cout << '\n';
	}
}
// Jungol 5932 숫자사각형4-2
// 2026-08-28
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << (i % 2) * (n - 1) + j * ((i + 1) % 2 * 2 - 1) + 1 << ' ';
		}
		cout << '\n';
	}
}
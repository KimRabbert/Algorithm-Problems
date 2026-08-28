// Jungol 1856 숫자사각형2
// 2026-08-28
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << m * (i / 2 * 2 + (i % 2) * 2) + (i + 1) % 2 * (2 * j + 1) - j << ' ';
		}
		cout << '\n';
	}
}
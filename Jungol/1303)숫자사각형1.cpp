// Jungol 1303 숫자사각형1
// 2026-08-27
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << i * m + j + 1 << ' ';
		}
		cout << '\n';
	}
}
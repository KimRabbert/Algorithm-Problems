// Jungol 5933 숫자사각형4-3
// 2026-08-28
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << (i + 1) * (j + 1) << ' ';
		}
		cout << '\n';
	}
}
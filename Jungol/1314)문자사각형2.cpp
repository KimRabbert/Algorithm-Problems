// Jungol 1314 문자사각형2
// 2026-08-28
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, m;
	int cnt;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << (char)((int)'A' + (n * (j / 2 * 2 + (j % 2) * 2) + (j + 1) % 2 * (2 * i + 1) - i - 1) % 26) << ' ';
		}
		cout << '\n';
	}
}
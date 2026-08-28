// Jungol 1307 문자사각형1
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
			cout << (char)((int)'A' + (n * n - i - j * n - 1) % 26) << ' ';
		}
		cout << '\n';
	}
}
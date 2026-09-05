// Jungol 1339 문자삼각형2
// 2026-09-06
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	vector<vector<char>> result;

	cin >> n;

	if (n % 2 == 0 || n > 100 || n < 1) {
		cout << "INPUT ERROR";
		return 0;
	}

	result.assign(n, vector<char>(n / 2 + 1, ' '));

	for (int i = 0; i < n / 2 + 1; i++) {
		for (int j = 0; j < i * 2 + 1; j++) {
			result[n / 2 - i + j][n / 2 - i] = 'A' + cnt++;
			cnt = cnt % 26;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n / 2 + 1; j++) {
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}
}
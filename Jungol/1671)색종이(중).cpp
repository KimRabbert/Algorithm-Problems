// Jungol 1438 색종이(초)
// 2026-09-17
// Solved by cmKim

#include <iostream>
using namespace std;



int main() {
	int n, y, x;
	int result = 0, cnt = 0;
	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };
	bool paper[100][100];

	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			paper[i][j] = false;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		for (int j = 0; j < 10; j++)
			for (int k = 0; k < 10; k++)
				paper[y + j][x + k] = true;
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j]) {
				for (int k = 0; k < 4; k++) {
					if (i + dy[k] < 0 || i + dy[k] >= 100 || j + dx[k] < 0 || j + dx[k] >= 100) {
						cnt++;
					}
					else if (!paper[i + dy[k]][j + dx[k]]) {
						cnt++;
					}
				}

				result += cnt;
				cnt = 0;
			}
		}
	}

	cout << result;
}
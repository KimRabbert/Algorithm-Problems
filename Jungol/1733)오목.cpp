// Jungol 1733 오목
// 2026-09-22
// Solved by cmKim

#include <iostream>
using namespace std;

int board[19][19];

bool isWin(int y, int x) {
	int dy[4] = { -1, 0, 1, 1 };
	int dx[4] = { 1, 1, 1, 0 };
	int tx, ty;
	int color = board[y][x];
	int cnt;

	for (int i = 0; i < 4; i++) {
		ty = y + dy[i];
		tx = x + dx[i];
		cnt = 1;

		while (ty >= 0 && ty <= 18 && tx >= 0 && tx <= 18 && board[ty][tx] == color) {
			cnt++;
			ty += dy[i];
			tx += dx[i];
		}

		if (cnt == 5) {
			ty = y - dy[i];
			tx = x - dx[i];

			if (ty < 0 || ty > 18 || tx < 0 || tx > 18 || board[ty][tx] != color)
				return true;	
		}
	}

	return false;
}

int main() {
	for (int i = 0; i < 19; i++)
		for (int j = 0; j < 19; j++)
			cin >> board[i][j];

	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			if (board[i][j] != 0 && isWin(i, j)) {
				cout << board[i][j] << '\n';
				cout << i + 1 << ' ' << j + 1;
				return 0;
			}
		}
	}

	cout << 0;
}
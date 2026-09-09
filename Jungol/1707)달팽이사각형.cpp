// Jungol 1707 달팽이사각형
// 2026-09-10
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int size;
	int cnt = 1;

	cin >> size;

	vector<vector<int>> square(size, vector<int>(size));

	for (int i = 0; i < size; i++) {
		square[0][i] = cnt++;
	}

	for (int i = 0; i < size / 2; i++) {
		for (int j = 0; j < size - 1 - i * 2; j++) {
			square[i + 1 + j][size - 1 - i] = cnt++;
		}
		for (int j = 0; j < size - 1 - i * 2; j++) {
			square[size - 1 - i][size - 2 - i - j] = cnt++;
		}

		if (size - 2 - i * 2 <= 0)
			break;

		for (int j = 0; j < size - 2 - i * 2; j++) {
			square[size - 2 - i - j][i] = cnt++;
		}
		for (int j = 0; j < size - 2 - i * 2; j++) {
			square[i + 1][i + 1 + j] = cnt++;
		}
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << square[i][j] << ' ';
		cout << '\n';
	}
}
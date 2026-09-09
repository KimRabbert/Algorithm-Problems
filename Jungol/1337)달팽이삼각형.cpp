// Jungol 1337 달팽이삼각형
// 2026-09-10
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr;

void fill(int size) {
	int fillSize = size;
	int cnt = 0;
	int x = -1, y = -1;

	while (fillSize > 0) {
		for (int i = 0; i < fillSize; i++) {
			y++;
			x++;
			arr[y][x] = cnt++;

			if (cnt > 9) cnt %= 10;
		}
		fillSize--;
		for (int i = 0; i < fillSize; i++) {
			x--;
			arr[y][x] = cnt++;

			if (cnt > 9) cnt %= 10;
		}
		fillSize--;
		for (int i = 0; i < fillSize; i++) {
			y--;
			arr[y][x] = cnt++;
			if (cnt > 9) cnt %= 10;
		}
		fillSize--;
	}
}

void print(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j <= i; j++)
			cout << arr[i][j] << ' ';
		cout << '\n';
	}
}

int main() {
	int size;

	cin >> size;

	arr.assign(size, vector<int>(size));

	fill(size);
	print(size);
}
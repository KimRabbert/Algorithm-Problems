// Jungol 2074 홀수 마방진
// 2026-09-14
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fill(int n) {
	vector<vector<int>> result(n, vector<int>(n));
	int x, y;
	int cnt = 0;

	y = 0;
	x = n / 2;

	while (cnt < n * n) {
		result[y][x] = ++cnt;

		if (cnt % n == 0) {
			y++;
		}
		else {
			y--;
			x--;
		}

		if (y < 0)
			y = n - 1;
		if (x < 0)
			x = n - 1;
	}

	return result;
}

void print(vector<vector<int>>& arr, int flag) {
	int size = arr.size();

	if (flag == 0) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++)
				cout << arr[i][j] << ' ';
			cout << '\n';
		}
	}
	else if (flag == 1) {
		for (int i = 1; i < size - 1; i++) {
			for (int j = 1; j < size - 1; j++)
				cout << arr[i][j] << ' ';
			cout << '\n';
		}
	}


}

int main() {
	int n;
	vector<vector<int>> result;

	cin >> n;

	result = fill(n);

	print(result, 0);
}
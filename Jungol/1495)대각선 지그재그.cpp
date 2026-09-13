// Jungol 1495 대각선 지그재그
// 2026-09-14
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fill(int n) {
	vector<vector<int>> result(n + 2, vector<int>(n + 2));
	int x, y;
	int cnt = 1;
	bool flag = true;

	for (int i = 0; i < n + 2; i++) {
		result[i][0] = -1;
		result[0][i] = -1;
		result[i][n + 1] = -1;
		result[n + 1][i] = -1;
	}


	x = 1, y = 1;

	while (cnt <= n * n) {
		result[y][x] = cnt++;

		if (flag) {
			y++;
			x--;
		}
		else {
			y--;
			x++;
		}

		if (result[y][x] == -1) {
			if (flag) {
				if (cnt < n * (n + 1) / 2) {
					x++;
				}
				else {
					x += 2;
					y--;
				}

				flag = false;
			}
			else {
				if (cnt < n * (n + 1) / 2) {
					y++;
				}
				else {
					y += 2;
					x--;
				}

				flag = true;
			}
		}
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

	print(result, 1);
}
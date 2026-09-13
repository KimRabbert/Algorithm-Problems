// Jungol 1331 문자마름모
// 2026-09-14
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> fill(int n) {
	vector<vector<char>> result(n * 2 - 1, vector<char>(n * 2 - 1, ' '));
	int x, y;
	int cnt = 0;
	
	for (int i = 0; i < n; i++) {
		x = n;
		y = i - 1;

		for (int j = 0; j < n - i; j++)
			result[++y][--x] = cnt++ % 26 + 'A';

		for (int j = 0; j < n - i - 1; j++)
			result[++y][++x] = cnt++ % 26 + 'A';

		for (int j = 0; j < n - i - 1; j++)
			result[--y][++x] = cnt++ % 26 + 'A';

		for (int j = 0; j < n - i - 2; j++)
			result[--y][--x] = cnt++ % 26 + 'A';
	}

	return result;
}

void print(vector<vector<char>> &arr) {
	int size = arr.size();

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << arr[i][j] << ' ';
		cout << '\n';
	}
}

int main() {
	int n;
	vector<vector<char>> result;

	cin >> n;

	result = fill(n);

	print(result);
}
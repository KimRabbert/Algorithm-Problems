// Jungol 1438 색종이(초)
// 2026-09-17
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	bool paper[100][100];
	int n;
	int y, x;
	int result = 0;

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
	
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			if (paper[i][j])
				result++;

	cout << result;
}
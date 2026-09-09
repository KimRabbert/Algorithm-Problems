// Jungol 2071 파스칼 삼각형
// 2026-09-10
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> arr;

void fill(int size) {

	for (int i = 0; i < size; i++)
		arr[i][0] = 1;

	for (int i = 1; i < size; i++) {
		for (int j = 1; j < i + 1; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
}

void print(int size, int type) {
	switch (type) {
	case 1:
		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= i; j++)
				cout << arr[i][j] << ' ';
			cout << '\n';
		}
		break;
	case 2:
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < i; j++)
				cout << ' ';
			for (int j = 0; j <= i; j++)
				cout << arr[size - 1 - i][j] << ' ';
			cout << '\n';
		}
		break;
	case 3:
		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= i; j++) {
				cout << arr[size - 1 - j][size - 1 - i] << ' ';
			}
			cout << '\n';
		}
		break;
	}
}

int main() {
	int size, type;

	cin >> size >> type;

	arr.assign(size, vector<int>(size, 0));

	fill(size);
	print(size, type);
}
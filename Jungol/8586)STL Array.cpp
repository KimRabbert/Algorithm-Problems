// Jungol Tutorial : STL Array
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

bool comp(array<int, 5> Left, array<int, 5> Right) {
	if (Left[0] == Right[0]) {
		if (Left[1] == Right[1]) {
			if (Left[2] == Right[2]) {
				if (Left[3] == Right[3]) {
					return Left[4] < Right[4];
				}

				return Left[3] > Right[3];
			}

			return Left[2] < Right[2];
		}

		return Left[1] > Right[1];
	}

	return Left[0] < Right[0];
}

array <int, 5> arr[100000];

int main() {
	
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];

	sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++)
			cout << arr[i][j] << ' ';
		cout << '\n';
	}
}
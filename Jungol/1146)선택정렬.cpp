// Jungol 1146 선택정렬
// 2026-09-22
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int minValue, minIndex;
	vector<int> arr;

	cin >> n;

	arr.assign(n, 0);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++) {
		minValue = arr[i];
		minIndex = i;

		for (int j = i + 1; j < n; j++) {
			if (minValue > arr[j]) {
				minValue = arr[j];
				minIndex = j;
			}
		}

		swap(arr[i], arr[minIndex]);

		for (int j = 0; j < n; j++)
			cout << arr[j] << ' ';
		cout << '\n';
	}
}
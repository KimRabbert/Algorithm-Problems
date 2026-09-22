// Jungol 1157 버블정렬
// 2026-09-22
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	int arr[100];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}

		for (int j = 0; j < n; j++)
			cout << arr[j] << ' ';
		cout << '\n';
	}
}
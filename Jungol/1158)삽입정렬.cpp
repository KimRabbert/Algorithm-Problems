// Jungol 1158 삽입정렬
// 2026-09-22
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, cur;
	int arr[100];
	int i, j;

	cin >> n;

	for (i = 0; i < n; i++)
		cin >> arr[i];

	for (i = 1; i < n; i++) {
		cur = arr[i];

		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > cur)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = cur;

		for (int j = 0; j < n; j++)
			cout << arr[j] << ' ';
		cout << '\n';
	}
}
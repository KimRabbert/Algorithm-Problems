// Jungol 8578 또래
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

int arr[200000];

int main() {
	int n;
	int min = 1000000000;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n - 1; i++)
		if (arr[i + 1] - arr[i] < min)
			min = arr[i + 1] - arr[i];

	cout << min;
}
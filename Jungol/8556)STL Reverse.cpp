// Jungol 8556 Tutorial : STL Reverse
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int left, int right) {
	return left > right;
}

int main() {
	int n, a, b;
	int arr[100000];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> a >> b;

	reverse(arr + a, arr + b + 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << '\n';

	sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
}
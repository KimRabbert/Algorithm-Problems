// Jungol 8557 STL Pair
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	pair<int, int> arr[100000];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i].first >> arr[i].second;

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i].first * arr[i].second << '\n';
	}
}
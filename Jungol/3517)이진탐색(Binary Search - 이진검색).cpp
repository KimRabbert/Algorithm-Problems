// Jungol 3517 Tutorial: 이진탐색(Binary Search - 이진검색)
// 2026-10-15
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr;

int binarySearch(int low, int high, int target) {
	if (low > high)
		return -1;

	int mid = (low + high) / 2;

	if (arr[mid] == target)
		return mid;

	if (arr[mid] > target)
		return binarySearch(low, mid - 1, target);

	return binarySearch(mid + 1, high, target);
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n, q, x;

	cin >> n;

	arr.assign(n, 0);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> q;

	for (int i = 0; i < q; i++) {
		cin >> x;

		cout << binarySearch(0, n - 1, x) << ' ';
	}
}
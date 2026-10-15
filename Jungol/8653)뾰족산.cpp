// Jungol 8653 뾰족산
// 2026-10-15
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

long long arr[200000];

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n, q;
	int maxIdx = 0;
	long long x;

	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[i - 1])
			maxIdx = i;
		else
			break;
	}

	for (int i = 0; i < q; i++) {
		cin >> x;

		if (x == arr[maxIdx]) {
			cout << "T\n";
		}
		else if (binary_search(arr, arr + maxIdx, x)) {
			cout << "L\n";
		}
		else if (binary_search(arr + maxIdx + 1, arr + n, x, greater<long long>())) {
			cout << "R\n";
		}
		else {
			cout << "N\n";
		}
	}
}
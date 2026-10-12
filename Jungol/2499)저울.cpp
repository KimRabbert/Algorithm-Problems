// Jungol 2499 저울
// 2026-10-12
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	vector<int> arr;
	int sum = 0;
	int n, a;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());

	if (arr[0] > 1) {
		cout << 1;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (arr[i] - sum <= 1 || arr[i] - arr[i - 1] <= 1) {
				sum += arr[i];
			}
			else {
				break;
			}
		}

		cout << sum + 1;
	}
}
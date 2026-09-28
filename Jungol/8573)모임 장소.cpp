// Jungol 8573 모임 장소
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[100000];

int main() {
	int n;
	long long left = 0, right = 0;
	long long min;
	vector<int> minX;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 1; i < n; i++)
		right += (long long)(arr[i] - arr[i - 1]) * (n - i);

	min = right;
	minX.push_back(arr[0]);

	for (int i = 1; i < n; i++) {
		left += (long long)(arr[i] - arr[i - 1]) * i;
		right -= (long long)(arr[i] - arr[i - 1]) * (n - i);

		if (left + right < min) {
			min = left + right;
			minX.clear();
			minX.push_back(arr[i]);
		}
		else if (left + right == min && minX[minX.size() - 1] != arr[i])
			minX.push_back(arr[i]);
	}

	for (int i : minX)
		cout << i << ' ';
}
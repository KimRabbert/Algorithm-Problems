// Jungol 8553 Tutorial: STL Sort 2 (정렬 기준 설정)
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int left, int right) {
	if (left % 10 != right % 10)
		return (left % 10) < (right % 10);

	if (left % 100 != right % 100)
		return (left % 100) < (right % 100);

	return left < right;
}

int main() {
	int n;
	int arr[100000];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n, comp);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';
}
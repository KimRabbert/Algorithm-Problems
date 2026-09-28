// Jungol 8559 Tutorial : range-based for문
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[10];

	for (int& i : arr)
		cin >> i;

	for (int& i : arr)
		i++;

	sort(arr, arr + 10);

	for (int i : arr)
		cout << i << ' ';
}
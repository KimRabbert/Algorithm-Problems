// Jungol Tutorial : STL Sort 1 ( 기본 사용법 )
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, a, b;
	int arr[100000];

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> a >> b;

	sort(arr + a, arr + b + 1);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
	cout << '\n';

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
}
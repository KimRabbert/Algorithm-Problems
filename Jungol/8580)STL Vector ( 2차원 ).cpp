// Jungol 8580 Tutorial : STL Vector ( 2차원 )
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr[1000];

int main() {
	int array, size;
	int n;

	cin >> array;

	for (int i = 0; i < array; i++) {
		cin >> size;

		for (int j = 0; j < size; j++) {
			cin >> n;
			arr[i].push_back(n);
		}
	}

	for (int i = 0; i < array; i++) {
		cin >> n;

		for (auto j : arr[n])
			cout << j << ' ';
		cout << '\n';
	}
}
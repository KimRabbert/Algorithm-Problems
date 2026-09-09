// Jungol 1329 별삼각형3
// 2026-09-10
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int size;

	cin >> size;

	if (size > 100 || size < 1 || size % 2 == 0) {
		cout << "INPUT ERROR!";
		return 0;
	}

	for (int i = 0; i < size / 2; i++) {
		for (int j = 0; j < i; j++)
			cout << ' ';
		for (int j = 0; j < i * 2 + 1; j++)
			cout << '*';
		cout << '\n';
	}

	for (int i = 0; i < size / 2 + 1; i++) {
		for (int j = 0; j < size / 2 - i; j++)
			cout << ' ';
		for (int j = 0; j < size - i * 2; j++)
			cout << '*';
		cout << '\n';
	}
}
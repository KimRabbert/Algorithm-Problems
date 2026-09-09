// Jungol 5947 숫자 삼각형3
// 2026-09-10
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int height;

	cin >> height;

	if (height > 50 || height < 1 || height % 2 == 0) {
		cout << "INPUT ERROR!";
		return 0;
	}

	for (int i = 0; i < height / 2; i++) {
		for (int j = 0; j < i + 1; j++)
			cout << j + 1 << ' ';
		cout << '\n';
	}
	
	for (int i = 0; i < height / 2 + 1; i++) {
		for (int j = 0; j < height / 2 - i + 1; j++)
			cout << j + 1 << ' ';
		cout << '\n';
	}
}
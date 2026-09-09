// Jungol 5945 숫자 삼각형1
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

	for (int i = 0; i < height; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < i + 1; j++)
				cout << (i + 1) * (i + 2) / 2 - i + j << ' ';
		}
		else {
			for (int j = 0; j < i + 1; j++)
				cout << (i + 1) * (i + 2) / 2 - j << ' ';
		}

		cout << '\n';
	}
}
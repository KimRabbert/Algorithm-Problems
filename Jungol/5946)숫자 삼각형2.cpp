// Jungol 5946 숫자 삼각형2
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
		for (int j = 0; j < i; j++)
			cout << "  ";

		for (int j = 0; j < height * 2 - 1 - i * 2; j++)
			cout << i << ' ';
		cout << '\n';
	}
}
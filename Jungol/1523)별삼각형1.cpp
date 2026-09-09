// Jungol 1523 별삼각형1
// 2026-09-10
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int sizeOfTriangle, type;

	cin >> sizeOfTriangle >> type;

	if (sizeOfTriangle > 100 || sizeOfTriangle < 1) {
		cout << "INPUT ERROR!";
		return 0;
	}

	if (type == 1) {
		for (int i = 0; i < sizeOfTriangle; i++) {
			for (int j = 0; j < i + 1; j++)
				cout << '*';
			cout << '\n';
		}
	}
	else if (type == 2) {
		for (int i = 0; i < sizeOfTriangle; i++) {
			for (int j = 0; j < sizeOfTriangle - i; j++)
				cout << '*';
			cout << '\n';
		}
	}
	else if (type == 3) {
		for (int i = 0; i < sizeOfTriangle; i++) {
			for (int j = 0; j < sizeOfTriangle - i - 1; j++)
				cout << ' ';
			for (int j = 0; j < i * 2 + 1; j++)
				cout << '*';
			cout << '\n';
		}
	}
	else {
		cout << "INPUT ERROR!";
	}
}
// Jungol 1102 스택 (stack)
// 2026-09-22
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int numberOfCommand, n;
	int top = 0;
	int stack[100];
	char command;

	cin >> numberOfCommand;

	for (int i = 0; i < numberOfCommand; i++) {
		cin >> command;

		switch (command) {
		case 'i':
			cin >> n;
			stack[top++] = n;
			break;
		case 'c':
			cout << top << '\n';
			break;
		case 'o':
			if (top == 0)
				cout << "empty\n";
			else {
				cout << stack[--top] << '\n';
			}
			break;
		}
	}
}
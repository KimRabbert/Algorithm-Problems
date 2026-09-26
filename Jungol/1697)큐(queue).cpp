// Jungol 1697 큐(queue)
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int queue[100];
	int front = 0, end = 0;
	int n, x;
	char c;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> c;

		if (c == 'i') {
			cin >> x;
			queue[end++] = x;
		}
		else if (c == 'o') {
			if (front == end) {
				cout << "empty\n";
			}
			else {
				cout << queue[front++] << '\n';
			}
		}
		else if (c == 'c') {
			cout << end - front << '\n';
		}

	}
}
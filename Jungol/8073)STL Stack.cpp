// Jungol 8073 Tutorial : STL Stack
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <stack>
using namespace std;

int main() {
	stack <int> s;
	int n, a;
	char command;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		switch (command) {
		case 'i':
			cin >> a;
			s.push(a);
			break;
		case 'o':
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			}
			else {
				cout << "empty\n";
			}
			break;
		case 'c':
			cout << s.size() << '\n';
			break;
		}
	}
}
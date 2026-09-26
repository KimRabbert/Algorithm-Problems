// Jungol 1221 후위표기법1
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int m, a, b;
	char x;
	stack <int> s;

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> x;

		if (x >= '0' && x <= '9')
			s.push(x - '0');
		else {
			b = s.top();
			s.pop();
			a = s.top();
			s.pop();

			switch (x) {
			case '+':
				s.push(a + b);
				break;
			case '-':
				s.push(a - b);
				break;
			case '*':
				s.push(a * b);
				break;
			case '/':
				s.push(a / b);
				break;
			}
		}
	}

	cout << s.top();
}
// Jungol 5917 접시 닦기
// 2026-09-26
// Solved by cmKim

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, t, c, d;
	stack <int> space[3];

	cin >> n >> t;

	for (int i = n; i > 0; i--)
		space[0].push(i);

	for (int i = 0; i < t; i++) {
		cin >> c >> d;

		for (int j = 0; j < d; j++) {
			space[c].push(space[c - 1].top());
			space[c - 1].pop();
		}
	}

	for (int i = 0; i < n; i++) {
		cout << space[2].top() << '\n';
		space[2].pop();
	}
}
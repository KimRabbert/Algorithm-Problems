// Jungol 6057 피자왕 비룡
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	vector<queue<int>> p;
	int pn, n;
	int cmdi, pi, mi;
	int sale = 0;

	cin >> pn >> n;

	p.assign(pn + 1, queue<int>());

	for (int i = 0; i < n; i++) {
		cin >> cmdi >> pi;

		if (cmdi == 0) {
			cin >> mi;
			p[pi].push(mi);
		}
		else {
			if (!p[pi].empty()) {
				sale += p[pi].front();
				p[pi].pop();
			}
		}
	}

	cout << sale;
}
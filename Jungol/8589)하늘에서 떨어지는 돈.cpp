// Jungol 8589 하늘에서 떨어지는 돈
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	priority_queue<int, vector<int>, greater<int>> pq;
	int n, m, a, money;
	int tmp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		pq.push(a);
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> money;

		pq.push(pq.top() + money);
		pq.pop();
	}

	for (int i = 0; i < n; i++) {
		cout << pq.top() << ' ';
		pq.pop();
	}
}
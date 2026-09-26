// Jungol 5801 단순한 카드 셔플
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int n;
	queue<int> q;

	cin >> n;

	for (int i = 1; i <= n; i++)
		q.push(i);

	for (int i = 0; i < n; i++) {
		cout << q.front() << ' ';
		q.pop();
		q.push(q.front());
		q.pop();
	}
}
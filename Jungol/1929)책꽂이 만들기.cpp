// Jungol 1929 책꽂이 만들기
// 2026-10-12
// Solved by cmKim

#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n, l;
	long long a, b;
	long long sum = 0;
	priority_queue<long long, vector<long long>, greater<long long>> q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> l;
		q.push(l);
	}

	while (true) {
		a = q.top();
		q.pop();

		if (q.empty()) {
			break;
		}

		b = q.top();
		q.pop();

		sum += a + b;
		q.push(a + b);
	}

	cout << sum;
}
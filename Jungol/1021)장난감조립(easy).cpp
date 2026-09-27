// Jungol 1021 장난감조립(easy)
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<vector<pair<int, int>>> relations;
vector<int> sum;

void calcSum(int n, int toyNum) {
	for (auto i : relations[toyNum]) {
		if (!relations[i.first].empty()) {
			calcSum(i.second * n, i.first);
		}
		else {
			sum[i.first] += i.second * n;
		}
	}
}

void print(int n) {
	for (int i = 1; i <= n; i++) {
		if (sum[i] != 0)
			cout << i << ' ' << sum[i] << '\n';
	}
}

int main() {
	int n, m;
	int x, y, k;

	cin >> n;
	cin >> m;

	relations.assign(n + 1, vector<pair<int, int>>());
	sum.assign(n + 1, 0);

	for (int i = 0; i < m; i++) {
		cin >> x >> y >> k;

		relations[x].push_back({ y, k });
	}

	calcSum(1, n);
	print(n);
}
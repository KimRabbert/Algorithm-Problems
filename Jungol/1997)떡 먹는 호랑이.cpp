// Jungol 1997 떡 먹는 호랑이
// 2026-09-18
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int d, k;
	pair<int, int> p[31];

	p[1] = { 1, 0 };
	p[2] = { 0, 1 };
	
	cin >> d >> k;

	for (int i = 3; i <= d; i++)
		p[i] = { p[i - 2].first + p[i - 1].first, p[i - 2].second + p[i - 1].second };

	for (int i = 1; i <= k; i++) {
		if ((k - p[d].first * i) % p[d].second == 0) {
			cout << i << '\n' << (k - p[d].first * i) / p[d].second;
			break;
		}
	}
}
// Jungol 8577 회의 정렬
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

struct Data {
	int begin;
	int end;
	int index;
} d[500000];

bool comp(Data Left, Data Right) {
	if (Left.end - Left.begin == Right.end - Right.begin)
		return Left.begin < Right.begin;

	return Left.end - Left.begin < Right.end - Right.begin;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> d[i].begin >> d[i].end;
		d[i].index = i + 1;
	}

	sort(d, d + n, comp);

	for (int i = 0; i < n; i++)
		cout << d[i].index << '\n';
}
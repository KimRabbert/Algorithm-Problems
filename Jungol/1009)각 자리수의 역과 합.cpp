// Jungol 1009 각 자리수의 역과 합
// 2026-09-06
// Solved by cmKim

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, sum;
	string s;

	for (int i = 0; i < 10; i++) {
		cin >> n;

		if (n == 0)
			break;

		sum = 0;

		s = to_string(n);
		reverse(s.begin(), s.end());

		for (char c : s)
			sum += c - '0';

		cout << stoi(s) << ' ' << sum << '\n';
	}
}
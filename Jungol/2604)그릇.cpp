// Jungol 2604 그릇
// 2026-09-14
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	string s;
	int result, len;

	cin >> s;

	result = 10;
	len = s.length();

	for (int i = 1; i < len; i++) {
		if (s[i - 1] == s[i])
			result += 5;
		else
			result += 10;
	}

	cout << result;
}
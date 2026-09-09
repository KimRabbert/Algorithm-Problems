// Jungol 3106 진법 변환
// 2026-09-07
// Solved by cmKim

#include <iostream>
using namespace std;

long long numtoDec(string s, int n) {	// n진법 -> 10진법
	long long result, mul;
	int len;

	result = 0;
	mul = 1;
	len = s.length();

	for (int i = len - 1; i >= 0; i--) {
		if (s[i] >= '0' && s[i] <= '9')
			result += mul * (s[i] - '0');
		else if (s[i] >= 'A' && s[i] <= 'Z')
			result += mul * (s[i] - 'A' + 10);

		mul *= n;
	}

	return result;
}

string dectoNum(long long val, int n) {	// 10진법 -> n진법
	string result = "";
	int remainder;

	if (val == 0)
		return "0";

	while (val > 0) {
		remainder = val % n;
		val = val / n;
		
		if (remainder < 10) {
			result = char(remainder + '0') + result;
		}
		else {
			result = char(remainder - 10 + 'A') + result;
		}
	}

	return result;
}

int main() {
	int a, b;
	string s;

	while (1) {
		cin >> a;
		if (a == 0) break;

		cin >> s >> b;

		cout << dectoNum(numtoDec(s, a), b) << '\n';
	}
}
// Jungol 4977 실수의 이진수
// 2026-09-10
// Solved by cmKim

#include <iostream>
using namespace std;

string decToBin(int val) {	// 10진법 -> n진법
	string result = "";
	int remainder;

	if (val == 0)
		return "0";

	while (val > 0) {
		remainder = val % 2;
		val = val / 2;

		result = char(remainder + '0') + result;
	}

	return result;
}

string underPointToBin(float n) {
	string result = "";

	n = n - (int)n;

	for (int i = 0; i < 4; i++) {
		n *= 2;

		result += (char)((int)n + '0');

		n -= (int)n;
	}

	return result;
}

int main() {
	float n;
	string result = "";

	cin >> n;

	result = decToBin((int)n) + '.' + underPointToBin(n);

	cout << result;
}
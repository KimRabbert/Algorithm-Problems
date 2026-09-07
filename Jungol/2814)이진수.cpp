// Jungol 2814 이진수
// 2026-09-07
// Solved by cmKim

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int result = 0;
	int len;
	string bin;
	
	cin >> bin;

	len = bin.length();

	for (int i = 0; i < len; i++) {
		result += pow(2, len - i - 1) * (bin[i] - '0');
	}

	cout << result;
}
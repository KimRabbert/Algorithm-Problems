// Jungol 2514 문자열 찾기
// 2026-09-14
// Solved by cmKim

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string sub;
	int koiCnt = 0, ioiCnt = 0;
	int len;

	cin >> s;

	len = s.length();

	for (int i = 0; i < len - 2; i++) {
		sub = s.substr(i, 3);

		if (sub == "KOI")
			koiCnt++;
		else if (sub == "IOI")
			ioiCnt++;
	}

	cout << koiCnt << '\n' << ioiCnt;
}
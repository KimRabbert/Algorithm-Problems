// Jungol 2857 세로읽기
// 2026-09-14
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	string s[5];
	string result = "";

	for (int i = 0; i < 5; i++)
		cin >> s[i];

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < s[j].length())
				result += s[j][i];
		}
	}

	cout << result;
}
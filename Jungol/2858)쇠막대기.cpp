// Jungol 2858 쇠막대기
// 2026-09-22
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	string s;
	int cnt = 0;
	int result = 0;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			cnt++;
		}
		else {
			if (s[i - 1] == '(') {
				cnt--;
				result += cnt;
			}
			else {
				cnt--;
				result++;
			}
		}
	}

	cout << result;
}
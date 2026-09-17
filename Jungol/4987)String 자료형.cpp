// Jungol 4987 String 자료형 (C++ / Python)
// 2026-09-17
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	string s, t;

	cin >> s;
	cin >> t;

	while (s.find(t) != s.npos)
		s.erase(s.find(t), t.length());

	cout << s;
}
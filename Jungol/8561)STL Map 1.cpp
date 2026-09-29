// Jungol 8561 Tutorial : STL Map 1 ( 기본 개념 )
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <map>
using namespace std;

int main() {
	map <string, int> m;
	string s;
	int idx = 0;

	while (1) {
		cin >> s;

		if (s == "end")
			break;

		m[s] = ++idx;
	}

	cout << m.size() << '\n';
	
	for (auto a : m)
		cout << a.first << ' ' << a.second << '\n';
}
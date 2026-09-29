// Jungol 8562 Tutorial: STL Map 2 (원소 검색)
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <map>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	map <int, int> dic;
	int n, a;
	char command;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command != 'c')
			cin >> a;

		switch (command) {
		case 'f':
			if (dic.find(a) != dic.end()) {
				cout << "YES " << dic[a] << '\n';
			}
			else {
				cout << "NO\n";
			}
			break;
		case 'a':
			dic[a] += 1;
			break;
		case 'c':
			cout << dic.size() << '\n';
			break;
		}
	}
}
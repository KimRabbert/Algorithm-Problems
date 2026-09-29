// Jungol 8572 Tutorial : STL Vector ( 1차원 )
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	vector<int> v;
	int n, x, a;
	char command;
	bool flag = true;

	cin >> n >> x;

	v.assign(n, x);

	while (flag) {
		cin >> command;

		switch (command) {
		case 'i':
			cin >> a;
			v.push_back(a);

			break;
		case 'r':
			if (!v.empty())
				v.pop_back();

			break;
		case 's':
			sort(v.begin(), v.end());

			break;
		case 't':
			if (!v.empty())
				swap(v.front(), v.back());

			break;
		case 'e':
			flag = false;

			for (int i : v)
				cout << i << ' ';

			break;
		}
	}
}
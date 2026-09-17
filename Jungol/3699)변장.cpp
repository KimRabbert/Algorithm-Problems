// Jungol 3699 변장
// 2026-09-17
// Solved by cmKim

#include <iostream>
#include <map>
using namespace std;

int main() {
	int tc, n;
	int result = 1;
	map<string, int> clothes;
	string name, type;

	cin >> tc;

	for (int i = 0; i < tc; i++) {
		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> name >> type;

			if (clothes.find(type) == clothes.end()) {
				clothes.insert({ type, 1 });
			}
			else {
				clothes[type] += 1;
			}
		}

		for (auto p : clothes)	// 전체 조합의 수 = (각 의상 + 1) 의 곱
			result *= p.second + 1;
		result--;

		cout << result << '\n';

		clothes.clear();
		result = 1;
	}
}
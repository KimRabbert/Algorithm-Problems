// Jungol 1534 10진수를 2,8,16진수로
// 2026-09-07
// Solved by cmKim

#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main() {
	int n, opt;
	string s;

	cin >> n >> opt;

	switch (opt) {
	case 2:
		s = bitset<32>(n).to_string();
		cout << s.substr(s.find('1'));
		break;
	case 8:
		cout << oct << n;
		break;
	case 16:
		cout << hex << uppercase << n;
		break;
	}
}
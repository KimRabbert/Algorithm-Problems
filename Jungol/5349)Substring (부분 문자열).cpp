// Jungol 5349 SubString (부분 문자열)
// 2026-09-17
// Solved by cmKim

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string s;
	vector<string> word;
	
	getline(cin, s);

	s += ' ';

	while (!s.empty()) {
		word.push_back(s.substr(0, s.find(' ')));
		s.erase(0, s.find(' ') + 1);
	}
	
	for (int i = word.size() - 1; i >= 0; i--) {
		if (i % 2 == 1)
			cout << word[i] << ' ';
	}
}
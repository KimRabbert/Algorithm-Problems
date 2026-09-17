// Jungol 1535 단어집합2
// 2026-09-17
// Solved by cmKim

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	string s, line, output;
	unordered_set<string> words;

	output = "";

	while (1) {
		getline(cin, line);

		if (line == "END")
			break;

		s = "";
		line += ' ';

		for (char c : line) {
			if (c != ' ') {
				s += c;
				continue;
			}

			if (words.find(s) == words.end()) {
				output += s + ' ';
				words.insert(s);
			}
			s = "";
		}

		cout << output << '\n';
	}
}
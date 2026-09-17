// Jungol 1516 단어 세기
// 2026-09-17
// Solved by cmKim

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	string sentence, word;
	map<string, int> words;

	while (1) {
		getline(cin, sentence);

		if (sentence == "END")
			break;

		sentence += ' ';

		while (!sentence.empty()) {
			word = sentence.substr(0, sentence.find(' '));
			sentence.erase(0, sentence.find(' ') + 1);

			if (words.find(word) == words.end())
				words.insert({ word, 1 });
			else
				words[word] += 1;
		}

		sort(words.begin(), words.end());

		for (auto p : words) {
			cout << p.first << " : " << p.second << '\n';
		}
	}
}
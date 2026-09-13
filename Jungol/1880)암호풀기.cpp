// Jungol 1880 암호풀기
// 2026-09-14
// Solved by cmKim

#include <iostream>
#include <string>
using namespace std;

int main() {
	string key, sentence;
	string result = "";

	cin >> key;
	cin.ignore();
	getline(cin, sentence);

	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] == ' ') {
			result += ' ';
		}
		else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
			result += key[sentence[i] - 'A'] - 32;
		}
		else {
			result += key[sentence[i] - 'a'];
		}
	}
	
	cout << result;
}
// Jungol 1761 숫자 야구
// 2026-09-22
// Solved by cmKim

#include <iostream>
using namespace std;

struct question {
	string number;
	int strike, ball;
};

bool isUsed[10] = { false, false, false, false, false, false, false, false, false, false };
int numberOfQuestion;
question questions[100];

void inputQuestions() {
	cin >> numberOfQuestion;

	for (int i = 0; i < numberOfQuestion; i++)
		cin >> questions[i].number >> questions[i].strike >> questions[i].ball;
}

bool isCorrectGuess(string guess) {		// 숫자가 질문에 맞는지 판단
	int strike, ball;

	for (int i = 0; i < numberOfQuestion; i++) {
		strike = 0;
		ball = 0;

		for (int j = 0; j < 3; j++) {
			if (questions[i].number[j] == guess[j]) {
				strike++;
			}
			else if (isUsed[questions[i].number[j] - '0']) {
				ball++;
			}
		}

		if (strike != questions[i].strike || ball != questions[i].ball)
			return false;
	}

	return true;
}

// 123에서 987까지의 서로 다른 숫자로 구성된 세 자리 수를 만들어 질문에 맞는 답이 몇 개인지 반환
int getNumOfGuess() {
	string guess = "";
	int count = 0;

	for (int i = 1; i < 10; i++) {
		guess.push_back(i + '0');
		isUsed[i] = true;

		for (int j = 1; j < 10; j++) {
			if (isUsed[j])
				continue;

			guess.push_back(j + '0');
			isUsed[j] = true;

			for (int k = 1; k < 10; k++) {
				if (isUsed[k])
					continue;

				guess.push_back(k + '0');
				isUsed[k] = true;

				if (isCorrectGuess(guess)) {
					count++;
				}

				guess.pop_back();
				isUsed[k] = false;
			}

			guess.pop_back();
			isUsed[j] = false;
		}

		guess.pop_back();
		isUsed[i] = false;
	}

	return count;
}

int main() {
	inputQuestions();

	cout << getNumOfGuess();
}
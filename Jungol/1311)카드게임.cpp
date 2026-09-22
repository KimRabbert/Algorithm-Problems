// Jungol 1311 카드게임
// 2026-09-22
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

struct card {
	char color;
	int number;
} cards[5];

bool compare(card left, card right) {
	if (left.number == right.number)
		return left.color < right.color;
	return left.number < right.number;
}

bool isStraightFlush() {
	for (int i = 1; i < 5; i++)
		if (cards[i].color != cards[i - 1].color || cards[i].number - cards[i - 1].number != 1)
			return false;
	return true;
}

bool isFourOfAKind() {
	if (cards[0].number == cards[3].number || cards[1].number == cards[4].number)
		return true;
	return false;
}

bool isFullHouse() {
	if (cards[0].number == cards[2].number && cards[3].number == cards[4].number)
		return true;
	else if (cards[0].number == cards[1].number && cards[2].number == cards[4].number)
		return true;
	return false;
}

bool isFlush() {
	for (int i = 1; i < 5; i++)
		if (cards[i].color != cards[i - 1].color)
			return false;
	return true;
}

bool isStraight() {
	for (int i = 1; i < 5; i++)
		if (cards[i].number - cards[i - 1].number != 1)
			return false;
	return true;
}

bool isThreeOfAKind() {
	for (int i = 0; i < 3; i++)
		if (cards[i].number == cards[i + 2].number)
			return true;
	return false;
}

bool isTwoPairs() {
	int cnt = 0;

	for (int i = 1; i < 5; i++)
		if (cards[i].number == cards[i - 1].number)
			cnt++;

	if (cnt == 2)
		return true;
	return false;
}

bool isOnePair() {
	for (int i = 1; i < 5; i++)
		if (cards[i].number == cards[i - 1].number)
			return true;

	return false;
}

int getScore() {
	int score;

	sort(cards, cards + 5, compare);

	if (isStraightFlush()) {
		score = 900 + cards[4].number;
	}
	else if (isFourOfAKind()) {
		if (cards[0].number == cards[3].number)
			score = 800 + cards[0].number;
		else
			score = 800 + cards[1].number;

	}
	else if (isFullHouse()) {
		if (cards[0].number == cards[2].number && cards[3].number == cards[4].number)
			score = 700 + cards[0].number * 10 + cards[4].number;
		else
			score = 700 + cards[4].number * 10 + cards[0].number;
			
	}
	else if (isFlush()) {
		score = 600 + cards[4].number;
	}
	else if (isStraight()) {
		score = 500 + cards[4].number;
	}
	else if (isThreeOfAKind()) {
		for (int i = 0; i < 3; i++)
			if (cards[i].number == cards[i + 2].number)
				score = 400 + cards[i].number;
	}
	else if (isTwoPairs()) {
		score = 300 + cards[3].number * 10 + cards[1].number;
	}
	else if (isOnePair()) {
		for (int i = 1; i < 5; i++)
			if (cards[i].number == cards[i - 1].number)
				score = 200 + cards[i].number;
	}
	else {
		score = 100 + cards[4].number;
	}

	return score;
}

int main(){
	for (int i = 0; i < 5; i++)
		cin >> cards[i].color >> cards[i].number;

	cout << getScore();
}
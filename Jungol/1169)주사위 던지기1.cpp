// Jungol 1169 주사위 던지기1
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

vector<int> dice;

void type1(int diceOrder, int diceNum) {
	if (diceOrder == diceNum) {
		for (int i = 0; i < diceNum; i++)
			cout << dice[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= 6; i++) {
		dice[diceOrder] = i;
		type1(diceOrder + 1, diceNum);
	}
}

void type2(int diceOrder, int diceNum, int num) {
	if (diceOrder == diceNum) {
		for (int i = 0; i < diceNum; i++)
			cout << dice[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = num; i <= 6; i++) {
		dice[diceOrder] = i;
		type2(diceOrder + 1, diceNum, i);
	}
}

void type3(int diceOrder, int diceNum) {
	static int isUsed[6] = { false, false, false, false, false, false };

	if (diceOrder == diceNum) {
		for (int i = 0; i < diceNum; i++)
			cout << dice[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= 6; i++) {
		if (isUsed[i])
			continue;

		isUsed[i] = true;
		dice[diceOrder] = i;
		type3(diceOrder + 1, diceNum);
		isUsed[i] = false;
	}
}

int main() {
	int n, type;

	cin >> n >> type;

	dice.assign(n, 0);

	switch (type) {
	case 1:
		type1(0, n);
		break;
	case 2:
		type2(0, n, 1);
		break;
	case 3:
		type3(0, n);
		break;
	}
}
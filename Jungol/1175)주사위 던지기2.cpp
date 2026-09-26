// Jungol 1175 주사위 던지기2
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

void printDice(int diceNum, int totalDice, int diceSum) {
	static vector<int> dice(totalDice);
	static int sum = 0;

	if (diceNum == totalDice) {
		if (sum != diceSum)
			return;

		for (int i = 0; i < totalDice; i++)
			cout << dice[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i < 7; i++) {
		if (sum + i > diceSum)
			return;

		sum += i;
		dice[diceNum] = i;
		printDice(diceNum + 1, totalDice, diceSum);
		sum -= i;
	}
}

int main() {
	int diceNum, diceSum;

	cin >> diceNum >> diceSum;

	printDice(0, diceNum, diceSum);
}
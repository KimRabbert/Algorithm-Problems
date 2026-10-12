// Jungol 1183 동전 자판기(下)
// 2026-10-12
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int coins[6];
	int coinValue[6] = { 500, 100, 50, 10, 5, 1 };
	int usedCoin[6] = { 0, 0, 0, 0, 0, 0 };
	int price;
	int totalCoin = 0;

	cin >> price;

	for (int i = 0; i < 6; i++)
		cin >> coins[i];


	for (int i = 5; i >= 0; i--) {
		if (price >= coins[i] * coinValue[i]) {
			price -= coins[i] * coinValue[i];
			usedCoin[i] = coins[i];
		}
		else {
			usedCoin[i] = price / coinValue[i] + 1;
			price -= usedCoin[i] * coinValue[i];
			break;
		}
	}

	price = -price;

	for (int i = 0; i < 6; i++) {
		if (price >= coinValue[i]) {
			if (price / coinValue[i] <= usedCoin[i]) {
				usedCoin[i] -= price / coinValue[i];
				price %= coinValue[i];
			}
			else {
				price -= coinValue[i] * usedCoin[i];
				usedCoin[i] = 0;
			}
		}
	}


	for (int i = 0; i < 6; i++)
		totalCoin += usedCoin[i];

	cout << totalCoin << '\n';
	for (int i = 0; i < 6; i++)
		cout << usedCoin[i] << ' ';
}

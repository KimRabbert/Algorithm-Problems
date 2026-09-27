// Jungol 2817 로또 (Lotto)
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

int lottoNum[12];

void printLotto(int order, int num, int size) {
	static int selectedNum[6];

	if (order == 6) {
		for (int i = 0; i < 6; i++)
			cout << selectedNum[i] << ' ';
		cout << '\n';
		
		return;
	}

	for (int i = num; i < size - 5 + order; i++) {
		selectedNum[order] = lottoNum[i];
		printLotto(order + 1, i + 1, size);
	}
}

int main() {
	int k;
	
	cin >> k;

	for (int i = 0; i < k; i++)
		cin >> lottoNum[i];

	printLotto(0, 0, k);
}
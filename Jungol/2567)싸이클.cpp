// Jungol 2567 싸이클
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	int n, p;
	int order[96];
	int num, idx = 0;

	cin >> n >> p;

	for (int i = 0; i < p; i++)
		order[i] = -1;
	
	num = n;
	while (1) {
		num = num * n % p;

		if (order[num] != -1)
			break;

		order[num] = idx++;
	}
	

	cout << idx - order[num];
}
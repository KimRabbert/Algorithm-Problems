// Jungol 1031 빙고
// 2026-09-22
// Solved by cmKim

#include <iostream>
using namespace std;

pair<int, int> coordinates[26];
bool isErased[5][5];
int order[25];

void input() {
	int n;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> n;
			
			coordinates[n] = { i, j };
		}
	}

	for (int i = 0; i < 25; i++)
		cin >> order[i];
}

bool isBingo() {
	int cnt = 0;
	bool flag;

	for (int i = 0; i < 5; i++) {
		flag = true;
		
		for (int j = 0; j < 5; j++) {
			if (!isErased[i][j]) {
				flag = false;
				break;
			}
		}

		if (flag)
			cnt++;
	}

	for (int i = 0; i < 5; i++) {
		flag = true;

		for (int j = 0; j < 5; j++) {
			if (!isErased[j][i]) {
				flag = false;
				break;
			}
		}

		if (flag)
			cnt++;
	}

	flag = true;
	for (int i = 0; i < 5; i++) {
		if (!isErased[i][i]) {
			flag = false;
			break;
		}
	}
	if (flag)
		cnt++;

	flag = true;
	for (int i = 0; i < 5; i++) {
		if (!isErased[4 - i][i]) {
			flag = false;
			break;
		}
	}
	if (flag)
		cnt++;

	if (cnt >= 3)
		return true;
	else
		return false;
}

int findPosition() {
	for (int i = 0; i < 25; i++) {
		isErased[coordinates[order[i]].first][coordinates[order[i]].second] = true;

		if (isBingo())
			return i + 1;
	}
}

int main() {
	input();

	cout << findPosition();
}
// Jungol 2259 참외밭
// 2026-09-21
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
	bool dir[5] = { false, false, false, false, false };
	int n, result = 0;
	pair<int, int> input[6];

	cin >> n;

	for (int i = 0; i < 6; i++)
		cin >> input[i].first >> input[i].second;

	result = input[0].second * input[1].second;
	
	dir[input[0].first] = true;
	dir[input[1].first] = true;

	if (dir[input[3].first] || dir[input[4].first])
		result += input[3].second * input[4].second;
	else
		result -= input[3].second * input[4].second;

	if (result < 0)
		result = -result;

	result *= n;

	cout << result;
}
// Jungol 3427 볼 모으기(balls)
// 2026-09-22
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	vector<pair<char, int>> balls;
	int n, cnt;
	int red = 0, blue = 0, subBegin, subEnd;
	int result = 500000;
	char previousColor;
	
	cin >> n;
	cin >> s;

	cnt = 0;
	previousColor = s[0];

	for (char c : s) {
		if (c == previousColor)
			cnt++;
		else {
			balls.push_back({ previousColor, cnt });
			cnt = 1;
			previousColor = c;
		}

		if (c == 'R')
			red++;
		else
			blue++;
	}
	balls.push_back({ previousColor, cnt });

	// 시작과 끝 지점의 공과 같은 색의 전체 개수 - 각 지점의 개수
	if (balls[0].first == 'R') {
		subBegin = red - balls[0].second;
	}
	else {
		subBegin = blue - balls[0].second;
	}

	if (balls[balls.size() - 1].first == 'R') {
		subEnd = red - balls[balls.size() - 1].second;
	}
	else {
		subEnd = blue - balls[balls.size() - 1].second;
	}

	if (result > red)
		result = red;
	if (result > blue)
		result = blue;
	if (result > subBegin)
		result = subBegin;
	if (result > subEnd)
		result = subEnd;

	cout << result;
}
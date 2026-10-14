// Jungol 1335 색종이 만들기(영역구분)
// 2026-10-14
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

class paper {
	vector<vector<int>> mat;
	int size;
	int blue, white;
public:
	paper() {
		blue = 0;
		white = 0;
		size = 0;
	}

	void input() {
		for (int i = 0; i < size; i++)
			for (int j = 0; j < size; j++)
				cin >> mat[i][j];
	}

	void setSize(int n) {
		size = n;
		mat.assign(n, vector<int>(n));
	}

	int getBlue() {
		return blue;
	}

	int getWhite() {
		return white;
	}

	void calcColor(int, int, int);
};

void paper::calcColor(int y, int x, int size) {
	int color = mat[y][x];
	bool flag = false;

	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (mat[i][j] != color) {
				flag = true;
				break;
			}
		}
	}

	if (flag) {
		calcColor(y, x, size / 2);
		calcColor(y, x + size / 2, size / 2);
		calcColor(y + size / 2, x, size / 2);
		calcColor(y + size / 2, x + size / 2, size / 2);
	}
	else {
		if (color)
			blue++;
		else
			white++;
	}
}


int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	paper p;

	cin >> n;

	p.setSize(n);
	p.input();
	p.calcColor(0, 0, n);

	cout << p.getWhite() << '\n' << p.getBlue();
}
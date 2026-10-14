// Jungol 3560 색종이 만들기(4진트리)
// 2026-10-14
// Solved by cmKim

#include <iostream>
#include <vector>
using namespace std;

class paper {
	vector<vector<int>> mat;
	int size;
	string s;
public:
	paper() {
		size = 0;
		s = "";
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

	string getString() {
		return s;
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
		s.push_back('X');

		calcColor(y, x, size / 2);
		calcColor(y, x + size / 2, size / 2);
		calcColor(y + size / 2, x, size / 2);
		calcColor(y + size / 2, x + size / 2, size / 2);
	}
	else {
		if (color)
			s.push_back('1');
		else
			s.push_back('0');
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

	cout << p.getString();
}
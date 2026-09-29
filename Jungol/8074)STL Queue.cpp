// Jungol #8074 Tutorial : STL Queue
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <queue>
using namespace std;

struct Data {
	int x, y, z;
};

int main() {
	queue <Data> q;
	Data f;
	int n, x, y, z, a;
	char command;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		switch (command) {
		case 'i':
			cin >> x >> y >> z;
			q.push({ x, y, z });

			break;
		case 'o':
			if (!q.empty()) {
				f = q.front();
				q.pop();

				cout << f.x << ' ' << f.y << ' ' << f.z << '\n';
			}
			else {
				cout << "empty\n";
			}

			break;
		case 'c':
			cout << q.size() << '\n';

			break;
		case 'z':
			cin >> a;
			if (!q.empty() && a == q.front().z)
				cout << "yes\n";
			else
				cout << "no\n";

			break;
		}
	}
}
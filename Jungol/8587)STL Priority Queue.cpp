// Jungol #8587 Tutorial : STL Priority Queue
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <queue>
using namespace std;

struct Data {
	string name;
	int age;
	double bleed;

	bool operator < (const Data& Right) const {
		if (bleed == Right.bleed)
			return age < Right.age;

		return bleed < Right.bleed;
	}
};

int main() {
	int n, age;
	string command, name;
	double bleed;
	priority_queue <Data> pq;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> command;

		if (command == "push") {
			cin >> name >> age >> bleed;
			pq.push({ name, age, bleed });
		}
		else if (command == "pop") {
			if (!pq.empty()) {
				cout << pq.top().name << '\n';
				pq.pop();
			}
		}
	}
}
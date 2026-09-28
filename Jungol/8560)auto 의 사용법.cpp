// Jungol 8560 Tutorial : auto 의 사용법
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

struct Data {
	string name;
	int age;
};

bool comp(Data Left, Data Right) {
	if (Left.age == Right.age)
		return Left.name < Right.name;

	return Left.age > Right.age;
}

int main() {
	Data d[10];

	for (auto& [name, age] : d)
		cin >> name >> age;

	sort(d, d + 10, comp);

	for (auto [name, age] : d)
		cout << name << ' ' << age << '\n';
}
// Jungol 8563 Tutorial : STL Sort 3 ( 구조체 정렬하기 )
// 2026-09-28
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

struct Person {
	int age;
	double height;
} people[100000];

bool comp1(Person Left, Person Right) {
	if (Left.age == Right.age)
		return Left.height > Right.height;
	return Left.age > Right.age;
}

bool comp2(Person Left, Person Right) {
	if (Left.height == Right.height)
		return Left.age < Right.age;
	return Left.height < Right.height;
}

int main() {
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> people[i].age >> people[i].height;

	sort(people, people + n, comp1);

	for (int i = 0; i < n; i++) {
		cout << people[i].age << ' ';
		
		cout << fixed;
		cout.precision(1);
		cout << people[i].height << '\n';
	}
	cout << '\n';

	sort(people, people + n, comp2);

	for (int i = 0; i < n; i++) {
		cout << people[i].age << ' ';

		cout << fixed;
		cout.precision(1);
		cout << people[i].height << '\n';
	}
}
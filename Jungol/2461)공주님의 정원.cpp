// Jungol 2461 공주님의 정원
// 2026-10-14
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Date {
	int month;
	int day;

	bool operator<(const Date& d) const {
		if (month == d.month)
			return day < d.day;
		return month < d.month;
	}

	bool operator==(const Date& d) const {
		return (month == d.month) && (day == d.day);
	}

	bool operator<=(const Date& d) const {
		if (month == d.month)
			return day <= d.day;
		return month <= d.month;
	}
};

struct Data {
	Date bloomDate;
	Date fallDate;

	bool operator<(const Data& d) const {
		if (fallDate == d.fallDate)
			return bloomDate < d.bloomDate;
		return fallDate < d.fallDate;
	}

	bool operator<=(const Data& d) const {
		if (fallDate == d.fallDate)
			return bloomDate <= d.bloomDate;
		return fallDate <= d.fallDate;
	}
};

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	int n, count = 0;
	vector<Data> data;
	vector<Data> selectedDate;
	const Date end = { 11, 30 };

	cin >> n;

	data.assign(n, Data());

	for (int i = 0; i < n; i++)
		cin >> data[i].bloomDate.month >> data[i].bloomDate.day >> data[i].fallDate.month >> data[i].fallDate.day;

	sort(data.begin(), data.end());

	/*
	cout << '\n';
	for (auto i : data)
		cout << '\n' << i.bloomDate.month << ' ' << i.bloomDate.day << ' ' << i.fallDate.month << ' ' << i.fallDate.day;
	cout << '\n';
	*/

	selectedDate.push_back({ {1, 1}, {3, 1} });

	for (auto i : data) {
		if (i.bloomDate <= selectedDate.back().fallDate) {
			while (selectedDate.size() > 1 && i.bloomDate <= selectedDate[selectedDate.size() - 2].fallDate &&
				selectedDate.back().fallDate < i.fallDate) {

				selectedDate.pop_back();
			}
			selectedDate.push_back(i);

			if (end < selectedDate.back().fallDate)
				break;
		}
	}

	/*
	cout << '\n';
	for (auto i : selectedDate)
		cout << '\n' << i.bloomDate.month << ' ' << i.bloomDate.day << ' ' << i.fallDate.month << ' ' << i.fallDate.day;
	cout << '\n';
	*/

	if (end < selectedDate.back().fallDate) {
		cout << selectedDate.size() - 1;
	}
	else {
		cout << 0;
	}
}
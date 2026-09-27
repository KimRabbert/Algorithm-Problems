// Jungol 1161 하노이1
// 2026-09-27
// Solved by cmKim

#include <iostream>
#include <stack>
using namespace std;

void movePlate(int start, int end, int size, int num) {
	if (size == 1) {
		cout << num << " : " << start << " -> " << end << '\n';
		return;
	}
	
	movePlate(start, 6 - start - end, size - 1, num - 1);
	movePlate(start, end, 1, num);
	movePlate(6 - start - end, end, size - 1, num - 1);
}

int main() {
	int n;

	cin >> n;

	movePlate(1, 3, n, n);
}
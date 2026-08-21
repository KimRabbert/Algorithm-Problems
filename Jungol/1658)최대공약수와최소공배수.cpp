// Jungol 1658 최대공약수와최소공배수
// 2026-06-29
// Solved by cmKim

// 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
// 입력: 두 개의 10,000이하 자연수
// 출력: 첫째 줄 - 최대 공약수, 둘째 줄 - 최소 공배수

#include <iostream>
using namespace std;

int getGCD(int a, int b) {
	int tmp;

	while (b != 0) {
		tmp = a;
		a = b;
		b = tmp % b;
	}

	return a;
}

int main() {
	int a, b;
	int gcd, lcm;

	cin >> a >> b;

	gcd = getGCD(a, b);
	lcm = a * b / gcd;

	cout << gcd << '\n' << lcm;
}
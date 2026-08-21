// Jungol 1002 최대공약수, 최소공배수
// 2026-08-21
// Solved by cmKim

// N개의 정수를 입력받아 최대공약수와 최소공배수를 구하기
// 입력: 첫째 줄 - N(2 <= N <= 10), 둘째 줄 - N개의 정수(2 ~ 10000)
// 출력: 입력받은 정수들의 최대공약수, 최소공배수 (최소공배수 <= 20억)
// 시간: 1초
// 메모리: 64MB

#include <iostream>
using namespace std;

int getGCD(int a, int b) {
	int r = a % b;

	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}

	return b;
}

int main() {
	int n;
	int a, b;
	int gcd, lcm;

	cin >> n;
	cin >> a >> b;

	gcd = getGCD(a, b);
	lcm = a * b / gcd;

	for (int i = 0; i < n - 2; i++) {
		cin >> a;

		gcd = getGCD(a, gcd);
		lcm = (double)a * lcm / getGCD(a, lcm);	// 오버플로우 방지를 위한 형변환
	}

	cout << gcd << ' ' << lcm;
}
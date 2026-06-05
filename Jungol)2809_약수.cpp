// Jungol 2809 약수
// 2026-06-05
// Solved by cmKim

// 한 개의 정수를 입력받아 입력받은 정수의 약수를 모두 출력
// 입력 : 정수 N(2 <= N <= 21억)
// 출력 : N의 약수를 오름차순으로 출력
// 시간 : 1초
// 메모리 : 32MB

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	vector<int> factor;

	cin >> n;

	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			factor.push_back(i);
			if (i != n / i)
				factor.push_back(n / i);
		}
	}

	sort(factor.begin(), factor.end());

	for (int i : factor)
		cout << i << ' ';
}
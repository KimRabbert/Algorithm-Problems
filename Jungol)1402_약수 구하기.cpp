// Jungol 1402 약수 구하기
// 2026-06-05
// Solved by cmKim

// 두 자연수 N, K (1 <= N <= 10000, 1 <= K <= N)
// N의 약수 중 K 번째로 작은 수 출력 (K번째 약수가 존재하지 않을 경우 0 출력)

#include <iostream>
using namespace std;

int main() {
	int n, k;
	int cnt = 0;
	int result = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			cnt++;

		if (cnt == k) {
			result = i;
			break;
		}
	}

	cout << result;
}
// Jungol 8069 Tutorial: 이진탐색(라이브러리 사용법)
// 2026-10-15
// Solved by cmKim

#include <iostream>
#include <algorithm>
using namespace std;

int arr[500000];

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n, q, target;
    int idx;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < q; i++) {
        cin >> target;

        idx = lower_bound(arr, arr + n, target) - arr;

        if (idx == 0 || (idx < n && arr[idx] - target < target - arr[idx - 1]))
            cout << arr[idx] << '\n';
        else
            cout << arr[idx - 1] << '\n';
    }
}
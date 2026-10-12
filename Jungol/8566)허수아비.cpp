// Jungol 8566 허수아비
// 2026-10-12
// Solved by cmKim

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int sum = 0;
    int n, p;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> a, f;

    cin >> n >> p;

    a.assign(n, 0);
    f.assign(n, 0);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        pq.push(a[i]);
        sum += a[i];

        while (sum - pq.top() >= p) {
            sum -= pq.top();
            pq.pop();
        }

        if (sum < p)
            f[i] = -1;
        else
            f[i] = pq.size();
    }

    for (int i = 0; i < n; i++)
        cout << f[i] << ' ';
}
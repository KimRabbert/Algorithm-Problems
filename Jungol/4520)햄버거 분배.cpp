// Jungol 4520 햄버거 분배
// 2026-10-09
// Solved by cmKim

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n, k;
    int result = 0;
    char c;
    queue<pair<char, int>> q;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> c;
        
        if (!q.empty() && ((c == 'H' && q.front().first == 'P') || (c == 'P' && q.front().first == 'H'))) {
            q.pop();
            result++;
        }
        else {
            q.push({ c, i });
        }

        if (!q.empty() && i - q.front().second >= k) {
            q.pop();
        }
    }

    cout << result;
}
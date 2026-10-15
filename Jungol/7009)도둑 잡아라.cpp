// Jungol 7009 도둑 잡아라
// 2026-10-15
// Solved by cmKim

#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    unordered_set<int> resident;
    int n, q;
    int x;
    int count = 0;

    cin >> n >> q;

    for (int i = 0; i < n; i++) {
        cin >> x;
        resident.insert(x);
    }

    for (int i = 0; i < q; i++) {
        cin >> x;

        if (resident.find(x) == resident.end()) {
            cout << x << ' ';
            count++;
        }
    }

    if (count == 0)
        cout << -1;
}
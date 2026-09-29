// Jungol #8036 평행하는 선분의 수
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    unordered_map <int, int> xMap, yMap;
    int n, x, y;
    long long count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;

        if (xMap.find(x) != xMap.end())
            xMap[x]++;
        else
            xMap[x] = 0;

        if (yMap.find(y) != yMap.end())
            yMap[y]++;
        else
            yMap[y] = 0;
    }

    for (auto i : xMap)
        count += (long long)i.second * (i.second + 1) / 2;
    for (auto i : yMap)
        count += (long long)i.second * (i.second + 1) / 2;

    cout << count;
}
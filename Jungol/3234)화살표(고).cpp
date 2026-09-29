// Jungol #3234 화살표(고)
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
    int x;
    int color;

    bool operator < (const Point& Right) const {
        if (color == Right.color)
            return x < Right.x;

        return color < Right.color;
    }
};

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n, x, color, len;
    long long sum = 0;
    vector<Point> v;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> color;
        v.push_back({ x, color });
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (i > 0 && v[i].color == v[i - 1].color)
            len = v[i].x - v[i - 1].x;
        else
            len = 0;

        if (i < n - 1 && v[i].color == v[i + 1].color)
            if (len == 0 || len > v[i + 1].x - v[i].x)
                len = v[i + 1].x - v[i].x;

        sum += len;
    }

    cout << sum;
}
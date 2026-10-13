// Jungol 1828 냉장고
// 2026-10-13
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n;
    int end = -271, count = 0;
    vector<pair<int, int>> arr;

    cin >> n;

    arr.assign(n, pair<int, int>());

    for (int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (arr[i].first > end) {
            end = arr[i].second;
            count++;
        }
        else if (arr[i].second < end)
            end = arr[i].second;
    }

    cout << count;
}
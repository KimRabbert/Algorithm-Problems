// Jungol 1370 회의실 배정
// 2026-10-13
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data {
    int num;
    int begin;
    int end;
};

bool compare(Data& left, Data& right) {
    if (left.end == right.end)
        return left.begin < right.begin;
    return left.end < right.end;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    int end = 0;
    Data d;
    vector<Data> arr;
    vector<Data> result;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> d.num >> d.begin >> d.end;
        arr.push_back(d);
    }

    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < n; i++) {
        if (arr[i].begin >= end) {
            end = arr[i].end;
            result.push_back(arr[i]);
        }
    }

    cout << result.size() << '\n';

    for (auto i : result)
        cout << i.num << ' ';
}
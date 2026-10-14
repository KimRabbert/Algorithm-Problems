// Jungol 2641 택배
// 2026-10-14
// Solved by cmKim

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data {
    int send;
    int receive;
    int box;
};

bool compare(Data& left, Data& right) {
    if (left.receive == right.receive)
        return left.send > right.send;
    return left.receive < right.receive;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int town, maxBox, m;
    int boxCount = 0;
    int currentBox = 0;
    vector<Data> arr;
    vector<int> townBox;

    cin >> town >> maxBox;
    cin >> m;

    arr.assign(m, Data());
    townBox.assign(town, 0);

    for (int i = 0; i < m; i++)
        cin >> arr[i].send >> arr[i].receive >> arr[i].box;

    sort(arr.begin(), arr.end(), compare);

    for (auto i : arr) {
        if (townBox[i.send] < maxBox) {
            currentBox = townBox[i.send] + i.box <= maxBox ? i.box : maxBox - townBox[i.send];

            for (int j = i.send + 1; j < i.receive; j++)
                currentBox = townBox[j] + currentBox <= maxBox ? currentBox : maxBox - townBox[j];

            for (int j = i.send; j < i.receive; j++)
                townBox[j] += currentBox;

            boxCount += currentBox;
        }
    }

    cout << boxCount;
}
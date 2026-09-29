// Jungol #5527 콜센터
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    queue <int> q;
    int n, x, time = 0, waitTime = 0;
    string command;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == "call") {
            cin >> x;

            q.push(x);
            waitTime += x;
        }
        else if (command == "wait") {
            cin >> x;
            time += x;
            waitTime -= x;

            while (!q.empty() && time >= q.front()) {
                time -= q.front();
                q.pop();
            }

            if (q.empty()) {
                time = 0;
                waitTime = 0;
            }
        }
        else if (command == "check") {
            cout << q.size() << " people " << waitTime << " minutes\n";
        }
    }
}
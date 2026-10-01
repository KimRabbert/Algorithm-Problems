// Jungol 3521 Tutorial : 그리디(Greedy - 탐욕, 욕심쟁이) 알고리즘
// 2026-10-01
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
    int count = 0, n;
    int num[5];
    int gram = 16;

    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> n;
    
    for (int i = 4; i >= 0; i--) {
        if (n >= gram) {
            if (num[i] < n / gram) {
                count += num[i];
                n -= num[i] * gram;
            }
            else {
                count += n / gram;
                n %= gram;
            }
        }

        gram = gram >> 1;
    }

    if (count > 0 && n == 0)
        cout << count;
    else
        cout << "impossible";
}
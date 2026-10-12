// Jungol 2194 요플레 공장
// 2026-10-12
// Solved by cmKim

#include <iostream>
using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int week, storageCost;
    int price, needs;
    int minPrice = 10000;
    long long totalPrice = 0;

    cin >> week >> storageCost;

    for (int i = 0; i < week; i++) {
        cin >> price >> needs;

        if (minPrice > price)
            minPrice = price;

        totalPrice += minPrice * needs;

        minPrice += storageCost;
    }

    cout << totalPrice;
}
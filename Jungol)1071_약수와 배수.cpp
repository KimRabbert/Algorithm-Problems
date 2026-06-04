// Jungol 1071 약수와 배수
// 2026-06-04
// by cmKim


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    vector <int> v;
    int div = 0, mul = 0;

    cin >> n;
    v.assign(n, 0);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    cin >> m;

    for (int i : v) {
        if (m % i == 0)
            div += i;

        if (i % m == 0)
            mul += i;
    }

    cout << div << '\n' << mul;
}
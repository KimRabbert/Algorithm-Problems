// Jungol 8576 Tutorial : 구조체 연산자 오버로딩
// 2026-09-27
// Solved by cmKim

#include <iostream>
using namespace std;

struct Rect {
    int width, height;

    Rect operator + (const Rect& right) const {
        return { width + right.width, height + right.height };
    }

    bool operator == (const Rect& right) const {
        return width * height == right.width * right.height;
    }

    bool operator < (const Rect & right) const {
        return width * height < right.width * right.height;
    }

}a, b, c, d;

int main() {
    cin >> a.width >> a.height;
    cin >> b.width >> b.height;
    cin >> c.width >> c.height;
    cin >> d.width >> d.height;

    if (a + b == c + d)
        cout << "Same";
    else if (a + b < c + d)
        cout << "Left Small";
    else
        cout << "Right Small";
}
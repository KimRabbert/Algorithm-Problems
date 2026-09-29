// Jungol 5393 도시와 주
// 2026-09-30
// Solved by cmKim

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

struct Data {
    string cityName;
    string stateCode;

    bool operator==(const Data& other) const {
        return cityName == other.cityName && stateCode == other.stateCode;
    }
};

namespace std {
    template <>
    struct hash<Data> {
        size_t operator()(const Data& d) const {
            size_t h1 = hash<string>{}(d.cityName);
            size_t h2 = hash<string>{}(d.stateCode);

            return h1 ^ (h2 << 1);
        }
    };
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    unordered_map<Data, int> names;
    string cityName, stateCode, citySub;
    int n, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cityName >> stateCode;

        citySub = cityName.substr(0, 2);

        if (names.find({ stateCode, citySub }) != names.end()) {
            if (citySub != stateCode)
                count += names[{ stateCode, citySub }];
        }
        
        if (names.find({ citySub, stateCode }) != names.end())
            names[{ citySub, stateCode }]++;
        else
            names.insert({ { citySub, stateCode }, 1 });
    }

    cout << count;
}
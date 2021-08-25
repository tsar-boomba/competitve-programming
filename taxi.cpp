#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <cstdint>
#include <cassert>
#include <cmath>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
    int n, total = 0, merged = 0;
    vector<int> groups;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int g;
        cin >> g;
        groups.push_back(g);
    }
    sort(groups.begin(), groups.end(), greater());
    for (int i = 0; i < n; i++) {
        if (i == 4) continue;
        if (total + groups[i] <= 4) {
            total += groups[i];
            merged += 1;
        } else {
            total = 0;
        }
    }
    if (merged == 0) {
        cout << n;
        return 0;
    }
    cout << n - (merged - 1);
    return 0;
}
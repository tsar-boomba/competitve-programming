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
#include <numeric>

using namespace std;

int main() {
    int n;
    vector<char> magnets;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string pole;
        cin >> pole;
        magnets.push_back(pole[0]);
    }
    magnets.push_back(magnets[n-1]);
    int groups = 1;
    for (int i = 0; i < n; i++) {
        if (magnets[i] == magnets[i + 1]) {
            continue;
        } else {
            groups += 1;
        }
    }
    cout << groups;
    return 0;
}
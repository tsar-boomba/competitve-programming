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
    cin >> n;
    for (int i = 0; i < n; i++) {
        int res;
        cin >> res;
        if (res == 1) {
            cout << "HARD";
            return 0;
        }
    }
    cout << "easy";
    return 0;
}
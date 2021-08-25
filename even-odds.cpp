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
    long long n, k, nO = 0, nE = 0;
    cin >> n >> k;
    if (n % 2 != 0) {
        nO = ceil((long double)n/2);
        nE = floor((long double)n/2);
    } else {
        nO = n/2;
        nE = n/2;
    }
    if (k <= nO) {
        cout << (k * 2) - 1;
        return 0;
    } else {
        cout << (k - nO) * 2;
        return 0;
    }
}
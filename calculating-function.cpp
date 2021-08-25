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
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n/2;
        return 0;
    } else {
        cout << (long long)(-1 * ceil((long double)n/2));
        return 0;
    }
}
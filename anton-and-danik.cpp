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
    int n, a = 0, d = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            a++;
        }
        if (s[i] == 'D') {
            d++;
        }
    }
    if (a > d) {
        cout << "Anton";
        return 0;
    } else if (d > a) {
        cout << "Danik";
        return 0;
    } else {
        cout << "Friendship";
        return 0;
    }
}
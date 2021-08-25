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
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++) {
        int begin = i;
        int end = t.size() - (i + 1);

        if (s[begin] == t[end]) {
            continue;
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
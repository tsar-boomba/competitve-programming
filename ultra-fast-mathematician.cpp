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
    int n1, n2;
    cin >> n1 >> n2;
    string n1String = to_string(n1), n2String = to_string(n2), output = "";
    for (int i = 0; i < n1String.size(); i++) {
        if (n1String[i] == n2String[i] && n1String[i] == '1') {
            output += '0';
            continue;
        }
        if (n1String[i] == n2String[i] && n1String[i] == '0') {
            output += '0';
            continue;
        }
        if (n1String[i] == '1' && n2String[i] == '0') {
            output += '1';
            continue;
        }
        if (n2String[i] == '1' && n1String[i] == '0') {
            output += '1';
            continue;
        }
    }
    cout << output;
    return 0;
}
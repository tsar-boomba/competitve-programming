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
    int total = 0;
    vector<int> luckyN = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
    cin >> n;
    string nString = to_string(n);
    for (int i = 0; i < nString.length(); i++) {
        if (nString[i] == '4') {
            total++;
        }
        if (nString[i] == '7') {
            total++;
        }
    }
    for (int i = 0; i < luckyN.size(); i++) {
        if (total == luckyN[i]) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
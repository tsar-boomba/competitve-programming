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
    int n;
    vector<int> luckyN = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};
    cin >> n;
    string nString = to_string(n);
    for (int i = 0; i < nString.length(); i++) {
        char currChar = nString[i];
        if (currChar != '4' || currChar != '7') {
            break;
        }
        if (i == nString.length() - 1) {
            cout << "YES";
            return 0;
        }
    }
    for (int i = 0; i < luckyN.size(); i++) {
        int currN = luckyN[i];
        if (n % currN == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
};
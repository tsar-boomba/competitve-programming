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
    int y;
    bool fail = false;
    cin >> y;
    while(1) {
        y++;
        string yString = to_string(y);
        for (int i = 0; i < yString.size(); i++) {
            for (int j = 0; j < yString.size(); j++) {
                if (i == j) {
                    continue;
                }
                if (yString[j] == yString[i]) {
                    fail = true;
                }
            }
        }
        if (fail == true) {
            fail = false;
        } else {
            cout << y;
            return 0;
        }
    }
}
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
    string odd = "I hate";
    string concat = " that ";
    string even = "I love";
    cin >> n;
    string output = "";
    for (int i = 1; i < n + 1; i++) {
        if (i + 1 >= n + 1) {
            if (i % 2 != 0) {
                output += odd;
            } else {
                output += even;
            }
            output += " it";
            cout << output;
            return 0;
        }
        if (i % 2 != 0) {
            output += odd;
        } else {
            output += even;
        }
        output += concat;
    }
}
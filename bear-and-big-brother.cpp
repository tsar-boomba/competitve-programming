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

int main(){
    int a, b, years = 0, loop = 1;
    cin >> a >> b;
    while (loop) {
        a *= 3;
        b *= 2;
        years++;
        if (a > b) {
            cout << years;
            return 0;
        }
    }
}
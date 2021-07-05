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
    int k, n = 0, w, c = 0;
    cin >> k >> n >> w;
    for (int i = 0; i < w; i++) {
        c += (i + 1) * k;
    }
    if (c < n) {
        cout << 0;
        return 0;
    }
    cout << c - n;
    return 0;
}
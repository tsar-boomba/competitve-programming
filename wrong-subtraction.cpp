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
    int n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n--;
        }
    }
    cout << n;
    return 0;
}
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <cassert>
#include <cmath>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main(){
    int n, e = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i + 1]) {
            s.erase(i, 1);
            e++;
            i--;
        }
    }
    cout << e;
}
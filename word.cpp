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
    string s;
    int numlow = 0, numup = 0;
    cin >> s;
    s.shrink_to_fit();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] > 96) {
            numlow++;
        }
        if (s[i] < 91 ) {
            numup += 1;
        }
    }
    if (numup > numlow) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
        cout << s;
        return 0;
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s;
        return 0;
    }
}
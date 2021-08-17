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
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t--) {
        for (int i = 0; i < s.size(); i++) {
            if (i == s.size() - 1 && s[i] == 'B') {
                continue;
            }
            if (s[i] == 'B' && s[i + 1] == 'G') {
                s.insert(i, "G", 1);
                s.erase(i + 2, 1);
                i++;
            }
        }
    }
    /* was getting ambiguous error */
    std::cout << s;
    return 0;
}
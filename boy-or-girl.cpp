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
    set<char> set;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        set.insert(s[i]);
    }
    if ((set.size() % 2) == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}
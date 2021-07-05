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
    string s, t1 = "1111111", t2 = "0000000";
    cin >> s;
    if (s.find(t1) != string::npos || s.find(t2) != string::npos) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
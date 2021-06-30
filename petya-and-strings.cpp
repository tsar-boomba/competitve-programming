#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>
#include <cmath>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
        if (s1[i] < s2[i]) {
            cout << "-1";
            return 0;
        }
        if (s2[i] < s1[i]) {
            cout << "1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}
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
    string s;
    cin >> s;
    for (long i = 0; i < (int)(s.size()); i++) {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'A') {
            s.erase(i, 1);
            i--;
        }
        if (s[i] == 'e' || s[i] == 'E'){
            s.erase(i, 1);
            i--;
        }
        if (s[i] == 'i' || s[i] == 'I'){
            s.erase(i, 1);
            i--;
        }
        if (s[i] == 'o' || s[i] == 'O'){
            s.erase(i, 1);
            i--;
        }
        if (s[i] == 'u' || s[i] == 'U'){
            s.erase(i, 1);
            i--;
        }
        if (s[i] == 'y' || s[i] == 'Y'){
            s.erase(i, 1);
            i--;
        }
    }
    for (int i = 0; i < (int)(s.size()); i++) {
        s.insert(i, ".", 1);
        i++;
    }
    cout << s;
}
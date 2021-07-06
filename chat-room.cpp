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
    int yes = 0, lastpos = 0;
    cin >> s;
    if (s.size() <= 5 && s != "hello") {
        cout << "NO";
        return 0;
    }
    if (s == "hello") {
        cout << "YES";
        return 0;
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'h') {
            yes++;
            lastpos = i;
            break;
        } 
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'e' && i > lastpos) {
            yes++;
            lastpos = i;
            break;
        } 
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'l' && i > lastpos) {
            yes++;
            lastpos = i;
            break;
        } 
    }
    for (int i = 0; i < s.size(); i++) {
        if (i == lastpos) {
            continue;
        }
        if (s[i] == 'l' && i > lastpos) {
            yes++;
            lastpos = i;
            break;
        } 
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o' && i > lastpos) {
            yes++;
            break;
        } 
    }
    if (yes == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
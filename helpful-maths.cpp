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
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+') {
            continue;
        }
        if (i == 0){
            if (s[0] == '1') {
                continue;
            }
        }
        if (i == 0){
            if (s[0] == '3') {
                s.erase(0, 2);
                s.push_back('+');
                s.push_back('3');
                continue;
            }
        }
        if (i == s.size() - 1) {
            if (s[s.size() - 1] == '3'){
                continue;
            }
        }
        if (s[i] == '1'){
            s.erase(i - 1, 2);
            s.insert(0, "+", 1);
            s.insert(0, "1", 1);
        }
        if (s[i] == '3'){
            string t = "+" + s[i];
            s.erase(i - 1, 2);
            s.push_back('+');
            s.push_back('3');
            i -= 1;
            cout << "sorted 3";
        }
    }
    cout << s;
}
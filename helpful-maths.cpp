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
    string s;
    vector<int> array;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != '+') {
            int num = s[i] - '0';
            array.push_back(num);
        }
    }
    sort(array.begin(), array.end());
    for (int i = 0; i < array.size(); ++i) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << "+";
        } else {
            return 0;
        }
    }
}
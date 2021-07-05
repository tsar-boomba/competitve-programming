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
    int n, nop = 0;
    cin >> n;
    vector<int> people;
    vector<vector<int>> stops(n, vector<int>(2));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> stops[i][j];
            if (j == 0) {
                nop -= stops[i][j];
            }
            if (j == 1) {
                nop += stops[i][j];
            }
        }
        people.push_back(nop);
    }
    cout << *max_element(people.begin(), people.end());
}
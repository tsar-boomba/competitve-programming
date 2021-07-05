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
    int n, total1 = 0, total2 = 0, total3 = 0;
    cin >> n;
    vector<vector<int> > forces(n, vector<int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++){
            cin >> forces[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        total1 += forces[i][1];
    }
    for (int i = 0; i < n; i++) {
        total2 += forces[i][2];
    }
    for (int i = 0; i < n; i++) {
        total3 += forces[i][3];
    }
    if (total1 == 0 && total2 == 0 && total3 == 0) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }
}
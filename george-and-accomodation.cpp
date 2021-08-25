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
#include <numeric>

using namespace std;

int main() {
    int n, canAccomodate = 0;
    vector<vector<int>> rooms;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int people, maxPeople;
        cin >> people >> maxPeople;
        if (maxPeople - people >= 2) canAccomodate++;
    }
    cout << canAccomodate;
    return 0;
}
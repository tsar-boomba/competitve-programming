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
    int n, totalValue = 0;
    vector<int> coins;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        coins.push_back(c);
        totalValue += c;
    }
    int target = totalValue/2;
    sort(coins.begin(), coins.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int coinVal = coins[i];
        sum += coinVal;
        if (sum > target) {
            cout << i + 1;
            return 0;
        }
    }
}
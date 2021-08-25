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
    int n;
    cin >> n;
    vector<int> friends, output;
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        friends.push_back(f);
        output.push_back(0);
    }
    for (int i = 0; i < n; i++) {
        int currFriend = friends[i];
        int outIndex = friends[currFriend - 1] - 1;
        output[outIndex] = currFriend;
    }
    for (int i = 0; i < n; i++) {
        cout << output[i];
        cout << " ";
    }
    return 0;
}
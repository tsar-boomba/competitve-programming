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
    int n, h;
    vector<int> friends;
    cin >> n >> h;
    for (int i = 0; i < n; i++) {
        int f;
        cin >> f;
        friends.push_back(f);
    }
    int neededWidth = 0;
    for (int i = 0; i < n; i++) {
        int currFriend = friends[i];
        if (currFriend > h) {
            neededWidth += 2;
        } else {
            neededWidth +=1;
        }
    }
    cout << neededWidth;
    return 0;
}
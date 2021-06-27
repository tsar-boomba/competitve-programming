#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>
#include <cmath>

using namespace std;

int main() {
    double m, n;
    cin >> m >> n;
    cout << floor((long long)((m * n) / 2));
    return 0;
}
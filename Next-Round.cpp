#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>

using namespace std;

int main() {
    int n, k, a, m;
    cin >> n >> k;
    if ( n == k) {
        cout << n;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (i == 0) {
            if (a < 1) {
                cout << 0;
                return 0;
            }
        }
        if (i == k-1) {
            m = a;
        }
        if (a < m) {
            cout << i;
            return 0;
        }
    }
    cout << n;
}
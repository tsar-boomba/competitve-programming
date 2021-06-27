#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>

using namespace std;

int main() {
    int n, k, a[100], m = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            if (a[i] < 1) {
                cout << 0;
                return 0;
            }
        }
        if (a[i] == 0) {
            cout << i;
            return 0;
        }
        if (i == k-1) {
            m = a[i];
        }
        if (a[i] < m) {
            cout << i;
            return 0;
        }
    }
    cout << n;
}
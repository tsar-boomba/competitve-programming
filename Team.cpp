#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>

using namespace std;

int main() {
    int n;
    int p1, p2, p3;
    int np;
    np = 0;
    cin >> n;
    while (n--) {
        cin >> p1 >> p2 >> p3;
        if (p1 + p2 + p3 > 1){
            np++;
        }
    }
    cout << np;
    return 0;
}
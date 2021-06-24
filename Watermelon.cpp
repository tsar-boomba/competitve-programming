#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>

using namespace std;

int main() {
    int w;
    cin >> w;
    if (w == 2){
        cout << "NO";
        return 0;
    }
    if (w % 2 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
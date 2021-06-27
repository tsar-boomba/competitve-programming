#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int n, c = 0;
    string x;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x == "++X" || x == "X++") {
            c++;
        }
        if (x == "--X" || x == "X--") {
            c--;
        }
    }
    cout << c;
    return 0;
}
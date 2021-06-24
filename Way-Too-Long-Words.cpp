#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.length() > 10){
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
        } else {
            cout << s << "\n";
        }
    }
}
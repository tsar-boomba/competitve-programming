#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>
#include <cmath>

using namespace std;

int main(){
    double n, m, a;
    cin >> n >> m >> a;
    cout << (long long)(ceil(n / a) * ceil(m / a));
}
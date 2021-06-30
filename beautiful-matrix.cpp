#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <cassert>
#include <cmath>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main(){
    int matrix[5][5];
    int input = 25;
    int x = 0, y = 0, xpos = 0, ypos = 0, moves = 0;
    while (input--) {
        cin >> matrix[x][y];
        if (matrix[x][y] == 1){
            xpos = x;
            ypos = y;
        }
        x++;
        if (x > 4) {
            x = 0;
            y++;
        }
    }
    for (int i = 0; i < 4; i++) {
        if (xpos > 2) {
            xpos--;
            moves++;
        }
        if (xpos < 2) {
            xpos++;
            moves++;
        }
        if (ypos > 2) {
            ypos--;
            moves++;
        }
        if (ypos < 2) {
            ypos++;
            moves++;
        }
    }
    cout << moves;
}
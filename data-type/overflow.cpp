#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    
    // Range of char: -128 to 127
    char x = 127;
    x++;
    cout << (int)x << endl;

    int y = INT_MIN;
    y--;
    cout << "y: " <<  y << " | (y==INT_MAX): " << (y==INT_MAX) << endl;

    cout << 13  / 5 << " " << 13 % 5 << endl;

    return 0;
}
// https://www.geeksforgeeks.org/namespace-in-c/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int val = 100;

namespace first {
    int val = 200;
}

int main() {
    
    int val = 300;

    cout << "Local variable: " << val << endl;
    cout << "Namespace variable: " << first::val << endl;
    cout << "Global variable: " << ::val << endl; // :: is a Unary Scope resolution operator


    return 0;
}
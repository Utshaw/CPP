#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef int marks;

enum day {sat, sun };

int main() {
    day d1;
    d1 = sat;

    switch(d1) {
        case sat:
            cout << "Saturday" << endl;
            break;
        case sun:
            cout << "Sunday" << endl;
            break;
    }



    return 0;
}
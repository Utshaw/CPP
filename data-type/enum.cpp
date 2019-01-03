#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'


//         0    1    2    3    4    5    6
enum day {sat, sun, mon, tue, wed, thu, fri};
enum day2 {satu=100, sund, mond, tues, thir, frid};

int main() {
    
    day d = sat;

    cout << d << endl;

    day2 d2 = sund;

    cout << d2 << endl; // 101 

    switch(d) {
        case sat:
            cout << "Saturday" << endl;
            break;
        case sun:
            cout << "Sunday" << endl;
            break;
    }



    return 0;
}
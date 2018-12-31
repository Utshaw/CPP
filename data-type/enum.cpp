#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef int marks;

//         0    1    2    3    4    5    6
enum day {sat, sun, mon, tue, wed, thu, fri};
enum day2 {satu=100, sund, mond, tues, thir, frid};

int main() {
    
    day d = sat;

    cout << d << endl;

    day2 d2 = sund;

    cout << d2 << endl; // 101 

    marks m1, m2;
    m1 = 100;
    m2 = 90;
    cout << m1 << " " << m2 << endl;


    return 0;
}
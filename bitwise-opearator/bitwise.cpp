#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'


void andTable() {
    cout << "AND table: " << endl;
    cout << "a\tb\ta&b" << endl;
    cout << "-\t-\t---" << endl;
    cout << "0\t0\t" << (0&0) << endl;
    cout << "0\t1\t" << (0&1) << endl;
    cout << "1\t0\t" << (1&0) << endl;
    cout << "1\t1\t" << (1&1) << endl;
}

void orTable() {
    cout << "OR table " << endl;
    cout << "a\tb\ta|b" << endl;
    cout << "-\t-\t---" << endl;
    cout << "0\t0\t" << (0|0) << endl;
    cout << "0\t1\t" << (0|1) << endl;
    cout << "1\t0\t" << (1|0) << endl;
    cout << "1\t1\t" << (1|1) << endl;
}

void xorTable() {
    cout << "XOR table " << endl;
    cout << "a\tb\ta^b" << endl;
    cout << "-\t-\t---" << endl;
    cout << "0\t0\t" << (0^0) << endl;
    cout << "0\t1\t" << (0^1) << endl;
    cout << "1\t0\t" << (1^0) << endl;
    cout << "1\t1\t" << (1^1) << endl;
}

void leftShift(int num, int power){
    cout <<  num << "*2^" << power << ": " << (num << power)  << endl;

}


void rightShift(int num, int power){
    cout <<  num << "*2^-" << power << ": " << (num >> power)  << endl;

}



int main() {
    
    andTable();

    orTable();

    xorTable();

    leftShift(5, 2); 

    rightShift(5, 2);

    return 0;
}
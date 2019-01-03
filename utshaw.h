#ifndef UTSHAW_H
#define UTSHAW_H
#include <stdarg.h>
#include <iostream>

using namespace std;

void debugDash(){
    cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
}

void debugPrint(int a, int b){
    debugDash();
    cout << "a: " << a <<  " | b : " << b  << endl;
    debugDash();
}   

void debugHalt(){
    cin.clear(); // clears the input que
    cin.get(); // waits for an input.
}


#endif
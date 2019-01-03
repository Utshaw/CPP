#ifndef UTSHAW_H
#define UTSHAW_H
#include<stdarg.h>

using namespace std;

void debugDash(){
    cout << "----------------------------------------------------------------------------------------------------------------------------" << endl;
}

void debugPrint(int a, int b){
    debugDash();
    cout << "a: " << a <<  " | b : " << b  << endl;
    debugDash();
}   


#endif
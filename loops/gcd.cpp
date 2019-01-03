#include <iostream>
#include <bits/stdc++.h>
#include "../utshaw.h"

using namespace std;

#define endl '\n'

int getGCD(int a, int b){
    
    int big, small;
    if(a == b)
        return b;
    if(a > b){
        big = a; small = b;
    }else{
        big = b; small = a;
    }
    
    debugPrint(a, b);
}

int main() {
    
    getGCD(21, 30);

    return 0;
}
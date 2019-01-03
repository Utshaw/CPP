#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'


int main() {
    
    
    int n ;

    cin >> n;

    int* fact = new int[n + 1];
    fact[0] = 1;

    for(int i = 1; i <= 10; i++){
        fact[i] = fact[i - 1] * i;
    }

    cout << fact[n] << endl;

    delete[] fact;
    return 0;
}
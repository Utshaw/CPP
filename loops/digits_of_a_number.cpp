#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main()
{

    int n = 175;

    // cout << n % 10 << endl;
    // n /= 10;
    // cout << n % 10 << endl;
    // n /= 10;
    // cout << n % 10 << endl;


    while(int a = n % 10){
        cout << a << endl;
        n /= 10;
    }

    return 0;
}
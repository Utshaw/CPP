#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    
    int n;
    cin >> n;

    cout << "Factors of number " << n << " are: " << endl;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

// if a number is divisible only by itself and 1 then it is a prime number. 
// in other words, it will have only two factors

int main() {
    
    int count = 0;

    int n = 37;

    for(int i  = 1; i <= n; i++){
        if(n % i == 0){
            count++;
        }
    }

    if(count == 2){
        cout << n << " is a prime number " << endl;
    }else{
        cout << n << " is a composite number " << endl;
    }



    return 0;
}
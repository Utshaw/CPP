#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    

    int sum = 0;

    int num = 123;int n = num;

    while(num != 0){
        int rem = num % 10 ;
        num /= 10;
        sum = sum*10 + rem;
    }

    cout << "Reversed of " << n  << " is : " << sum << endl;

    return 0;
}
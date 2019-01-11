#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    
    int A[5] = {0};

    for(int t : A){
        cout << t << endl;
    }

    cout << "Sizeof array: " << sizeof(A) / sizeof(A[0]) << endl;


    return 0;
}
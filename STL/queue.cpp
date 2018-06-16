/*
Resources:
https://youtu.be/xYLk66M8OIc

*/
#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> myQ;

    for(int i = 0; i < 10; i++){
        cout << "enquing "  << i << endl;
        myQ.push(i);
    }  

    cout << "Size of myQ: " << myQ.size() << endl;

    cout << "The back of myQ: " << myQ.back() << endl;

    while(!myQ.empty()){
        cout << "dequing " << myQ.front() << endl;
        myQ.pop();
    }

    return 0;
}
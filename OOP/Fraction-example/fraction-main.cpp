#include <iostream>
#include "fraction.cpp"

using namespace std;


int main(){

    Fraction f1(2, 3);
    Fraction f2(5, 8);

    cout << f1.getnumer() << " / " << f1.getdenom() << "\n";
    cout << f1.getValue() << "\n" ;
    Fraction f3 = f1 + f2;
    cout << f3.getValue() << "\n";
    cout << f3.getdenom();

    return 0;
}
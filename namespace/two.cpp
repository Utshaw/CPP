#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

namespace ns1 {

    int val = 150;
    int value() {
        return val;
    }
}

namespace ns2 {
    class geek{
        public:
            void display(){
                cout << "ns2::display()" << endl;
            }
    };
}

namespace ns3 {
    class geek;
}

class ns3::geek {
    public:
        void display() {
            cout << "ns3::geek::display()"  << endl;
        }
};

namespace ns4 {
    class geek;
}

class ns4::geek {
    public:
        void display();
};

void ns4::geek::display() {
    cout << "ns4::geek::display()" << endl;
}


int main() {
    
    cout << ns1::value() << endl;

    ns2::geek obj;
    obj.display();

    ns3::geek obj2;
    obj2.display();

    ns4::geek obj3;
    obj3.display(); 

    return 0;
}
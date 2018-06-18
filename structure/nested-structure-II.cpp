/*
Resources:
https://www.learninglad.com/2014/02/accessing-the-members-of-nested-structure-using-pointers.html

*/
#include <iostream>
#include<string>

using namespace std;

struct address{
    int house_no;
    string street_name;
};

struct student{
    string name;
    int rollno;
    address *addr;
};

int main()
{
student anil;
student *anilptr;

anilptr = &anil;

anilptr->name = "anil";
anilptr->rollno = 1245;

address adr = {65,"madamakki"};

anilptr->addr = &adr;

cout << anilptr->name << endl;
cout << anilptr->rollno << endl;

cout << anilptr->addr->house_no << endl;
cout << anilptr->addr->street_name << endl;

    return 0;
}

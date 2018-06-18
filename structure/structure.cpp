#include <iostream>


using namespace std;

struct name_of_structure{
    int rollno;
    string gender;
};

void showStructureDetails(name_of_structure s){
    cout << s.rollno << endl;
    cout << s.gender << endl;
}

int main(){

    name_of_structure struct_var;
    struct_var.rollno = 1505105;
    struct_var.gender = "male";

    name_of_structure another_var = {1505106, "male"};


    name_of_structure * struct_ptr = &struct_var;

    struct_ptr->rollno = 1505106; // now struct_var.rollno is changed from 1505105 to 1505106
    struct_ptr->gender=  "male";


    showStructureDetails(struct_var);



    
    


    return 0;
}
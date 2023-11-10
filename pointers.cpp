#include <iostream>

using namespace std;

int main() {
    //cout << "test" << endl; ∗
    double* pointer_val;
    double* address_pointer;


    double val = 2.4;

    //pointer to the variable
    //the value of variable is the memory address of variable above
    pointer_val = &val;


    //&pointer_val -> pointer to address of pointer above
    //the value of variable is the memory address of the pointer
    

    cout << "Variable value: " << val << "; address: " << &val << endl;
    cout <<  "Pointer value: " << pointer_val << ", address: " << &pointer_val << endl;
    
    //to dereference, use * to a pointer variable
    cout << "Dereference: " << *pointer_val << endl;

    return 0;
}
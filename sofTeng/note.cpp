#include <iostream>

int main(){ 
    std::cout << "q" << endl;
    return 0;
}


/*
classes:

> abstraction
> polymorphism
> encapsulation
> inheritance

> contains member variables and functions
    > "shareable" between objects

> parent class
    > child class
        > example of inheritance in which it borrows certain
        variables or functions from parent class

> public= & private-
    > sets how a variable or function is accessible to the user/program
    > private means only the class can use it, not any other class
    in the program


> initialising a class
    > class className {
        private:
            ...
        public:
            ...
    }


> can write functions in or out of classes
    > class className {
        private:
            ...
        public:
            void functionName(){
                ...
            }
    }

    OR

    > void className::functionName(){
        ...
    }


> initialising an object in main
    > int main() {
        className objectName;
        objectName.functionName();  // calls function from class
    } 


> overloading
    > the compiler can choose which function to use depending on user
    input
    > example:
        > Square::Square(int side){
            ...
        }

        Square::Square(double side){
            ...
        }
            > the same function uses two different data types


> classes in separate ".h" file
    > example:
        > <iostream> in every ".cpp" file is a class that 
        handles input/output

    > write:
        > #ifndef _FILENAME_H_
        > #define _FILENAME_H_

        >#endif  -> at the end of .h file


> class functions definitions in ".cpp" file
    > when linking header files to .cpp, write:
        > #include "filename.h"
            >not in <> since it's user defined, but is optional
*/
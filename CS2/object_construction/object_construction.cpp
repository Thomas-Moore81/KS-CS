// Thomas Moore
// object construction
// cs23001

#include <iostream>
#include "object_construction.hpp"

//default constructor
myClass::myClass() {
    std::cout << "default constructor called \n";
}

//copy constructor
myClass::myClass(const myClass& copy) {
    std::cout << "copy constructor called \n";
}

//destructor
myClass::~myClass(){
    std::cout << "destructor called \n";
}

// assignment overload
myClass myClass::operator=(const myClass& rhs) {
    std::cout << "= assignment overload called \n";
    return rhs;
}
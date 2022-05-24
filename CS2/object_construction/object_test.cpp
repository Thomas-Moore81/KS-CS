// Thomas Moore
// object construction
// cs23001

#include <iostream>
#include "object_construction.hpp"

void call_by_value(myClass myObject) {
    std::cout << "By value function called\n";
}

void call_by_reference(myClass* myObject){
    std::cout << "By reference function called\n";
}

int main() {
    myClass test1;
    myClass test2(test1);
    myClass test3;

    test3 = test1;
    // test3.operator=(test1);

    myClass* temp = &test3;
    *temp = test2;

    std::cout << "Before value function\n";
    call_by_value(test2);

    std::cout << "Before reference function\n";
    call_by_reference(temp);

    return 0;
}
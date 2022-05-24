//  String class test program
//
//  Name:  test_default_ctor
//  Tests: Tests default constructor for String Adt and uses ==
//

#include "string.hpp"
#include <cassert>
#include <iostream> 

int main() {
    // Setup

    // Test 
    String testString;

    // Verify
    assert(testString == '\0');

    std::cout << "Done testing default constructor." << std::endl;
    return 0;


}
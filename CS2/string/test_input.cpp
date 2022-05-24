//  String class test program
//
//  Name:   test_input
//  Tests: Tests input and output operators using ==, ifstream, cout, >>, and <<
//

#include "string.hpp"
#include <cassert>
#include <iostream> 
#include <fstream>

//===========================================================================
int main ()
{
    {
    std::ifstream file ("string-data-1.txt");
    String str;

    file >> str;
    assert(str == "word");

    file >> str;
    assert(str == "several");
    
    file >> str;
    assert(str == "words");

    file >> str;
    assert(str == "testingspace");
    
    file >> str;
    
    assert(str == "ThisShouldTestOutput"); 

    file >> str;
    assert(str == "123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345123451234512345");
    }

    std::cout << "Done testing input operator and output operator." << std::endl;
    return 0;
}

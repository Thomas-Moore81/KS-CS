//  String class test program
//
//  Name: test_ctor_char
//  Tests: Tests character constructor and uses ==
//

#include "string.hpp"
#include <cassert>
#include <iostream>
 
//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TESTING 1 character
        String  str('0');

        // VERIFY
        assert(str == '0');
    }

    std::cout << "Done testing character constructor." << std::endl;
    return 0;
}


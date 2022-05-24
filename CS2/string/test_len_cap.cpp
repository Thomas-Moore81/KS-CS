//  String class test program
//
//  Name:   test_len_cap
//  Tests: Tests the length of the string using == and length()
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
        String  str("1");

        // TEST
        str.length();

        // VERIFY
        assert(str.length() == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("dog");

        // TEST
        str.length();

        // VERIFY
        assert(str.length() == 3);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("10000000000000000000000000000000000000000000000006");

        // TEST
        str.length();

        // VERIFY
        assert(str.length() == 50);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    std::cout << "Done testing length function." << std::endl;
    return 0;
}
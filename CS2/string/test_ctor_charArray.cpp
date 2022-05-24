//  String class test program
//
//  Name: test_ctor_charArray
//  Tests: Tests character array constructor and uses ==
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
        String  str("0");

        // VERIFY
        assert(str == "0");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TESTING 2 characters
        String  str("xx");

        // VERIFY
        assert(str == "xx");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TESTING 3 characters
        String  str("for");

        // VERIFY
        assert(str == "for");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TESTING 6 characters
        String  str("100000");

        // VERIFY
        assert(str == "100000");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TESTING 256 characters
        String  str("1000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");

        // VERIFY
        assert(str == "1000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TESTING 1 character
        String  str('0');

        // VERIFY
        assert(str == '0');

        //TESTING re-assignment
        str = String ("777");   
        assert(str == "777");
        
    }
    
    
    std::cout << "Done testing character constructor." << std::endl;
    return 0;
}
//  String class test program
//
//  Name: test_find_string
//  Tests: Tests the find string function using == and findstr()
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
        String  str("teststring");

        // TEST
        int result = str.findstr(0, "string");

        // VERIFY
        assert(str    == "teststring");
        assert(result == 4);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("interesting");

        // TEST
        int result = str.findstr(0, "ting");

        // VERIFY
        assert(str    == "interesting");
        assert(result == 7);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("shouldthisfunctionlikethis");

        // TEST
        int result = str.findstr(0, "function");
        
        // VERIFY
        assert(str    == "shouldthisfunctionlikethis");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Begin");

        // TEST
        int result = str.findstr(0, "Beg");

        // VERIFY
        assert(str    == "Begin");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("ThisIsTheEnd");

        // TEST
        int result = str.findstr(0, "End");

        // VERIFY
        assert(str    == "ThisIsTheEnd");
        assert(result == 9);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("ThisIsTheEnd");

        // TEST
        int result = str.findstr(4, "End");

        // VERIFY
        assert(str    == "ThisIsTheEnd");
        assert(result == 9);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing find string function." << std::endl;
    return 0;
}

//  String class test program
//
//  Name: test_substring
//  Tests: Tests the substring function using == and substr()
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
        String  str("testing");

        // TEST
        String result = str.substr(2, 6);
       
        // VERIFY
        assert(str    == "testing");
        assert(result == "sting");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("easy");

        // TEST
        String result = str.substr(0, 0);
        
        // VERIFY
        assert(str    == "easy");
        assert(result == "e");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("tooeasy");

        // TEST
        String result = str.substr(6, 6);

        // VERIFY
        assert(str    == "tooeasy");
        assert(result == "y");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("TestingForCapitols");

        // TEST
        String result = str.substr(7, 19);

        // VERIFY
        assert(str    == "TestingForCapitols");
        assert(result == "ForCapitols");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("TestingForA Space");

        // TEST
        String result = str.substr(12, 16);

        // VERIFY
        assert(str    == "TestingForA Space");
        assert(result == "Space");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("Testing For Multiple Spaces");

        // TEST
        String result = str.substr(8, 26);

        // VERIFY
        assert(str    == "Testing For Multiple Spaces");
        assert(result == "For Multiple Spaces");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("50000000000000000000123000000000000000000000000000");

        // TEST
        String result = str.substr(20, 22);
        
        // VERIFY
        assert(str    == "50000000000000000000123000000000000000000000000000");
        assert(result == "123");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000123456789");

        // TEST
        String result = str.substr(191, 199);

        // VERIFY
        assert(str    == "50000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000123456789");
        assert(result == "123456789");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000");

        // TEST
        String result = str.substr(0, 255);

        // VERIFY
        assert(str    == "500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000");
        assert(result == "500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000");
    }
    
    std::cout << "Done testing substring function." << std::endl;
    return 0;
}
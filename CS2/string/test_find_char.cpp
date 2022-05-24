//  String class test program
//
//  Name:   test_find_char
//  Tests: Finding a character in a string using == and .findch()
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
        String  str("dog");
        // TEST
        int result = str.findch(0, 'd');

        // VERIFY
        assert(str    == "dog");
        assert(result == 0);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("cat");
        // TEST
        int result = str.findch(0, 'a');

        // VERIFY
        assert(str    == "cat");
        assert(result == 1);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("longerstring");

        // TEST
        int result = str.findch(5, 'n');

        // VERIFY
        assert(str    == "longerstring");
        assert(result == 10);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("longerstring");

        // TEST
        int result = str.findch(0, 'n');

        // VERIFY
        assert(str    == "longerstring");
        assert(result == 2);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("100000000000000000000000000000000000080000000000005");

        // TEST
        int result = str.findch(0, '5');

        // VERIFY
        assert(str    == "100000000000000000000000000000000000080000000000005");
        assert(result == 50);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("10000000000000000000000000000000000008000000000000510000000000000000000000000000000000008000000000007");

        // TEST
        int result = str.findch(0, '7');

        // VERIFY
        assert(str    == "10000000000000000000000000000000000008000000000000510000000000000000000000000000000000008000000000007");
        assert(result == 100);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005");

        // TEST
        int result = str.findch(0, '5');

        // VERIFY
        assert(str    == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000400000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000005");
        assert(result == 200);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000004000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000050000000000000000000000000000000000000000000000000000009");

        // TEST
        int result = str.findch(0, '9');

        // VERIFY
        assert(str    == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000004000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000050000000000000000000000000000000000000000000000000000009");
        assert(result == 254);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("zxczxczxczxczxczxczxcPzxczxczxczxczxczxczxczxczxczP");
        // TEST
        int result = str.findch(25, 'P');

        // VERIFY
        assert(str    == "zxczxczxczxczxczxczxcPzxczxczxczxczxczxczxczxczxczP");
        assert(result == 50);
    }
    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing find char function." << std::endl;
    return 0;
}

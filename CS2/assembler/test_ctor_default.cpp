//  Stack class test program
//
//  Tests: default constructor, empty, and full.
//

#include "stack.hpp"
#include <cassert>
#include <iostream> 
#include "../string/string.hpp"

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;

        // VERIFY
        assert(x.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;

        // VERIFY
        assert(x.full() == false);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;

        // VERIFY
        assert(x.full() == false);
    }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing default constructor." << std::endl;
    return 0;
}


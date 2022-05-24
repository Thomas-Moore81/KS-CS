//  Stack class test program
//
//  Tests: destructor, empty, push, and pop
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
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(7);
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  x;
        x.push(7);
        x.push(100);
        x.push(10000);
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        x.push('A');
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  x;
        x.push('A');
        x.push('B');
        x.push('C');
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("String");
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  x;
        x.push("String");
        x.push("BiggerString");
        x.push("BiggestString");
        x.push("!@#$%^&*()_+");
        x.push("123456789");
        x.~stack();

        // VERIFY
        assert(x.empty() == true);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing destructor." << std::endl;
    return 0;
}
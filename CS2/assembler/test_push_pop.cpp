//  Stack class test program
//
//  Tests: push and pop functions, empty, and top
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
        stack<int>  x;

        // TEST
        x.push(5);

        // VERIFY
        assert(x.empty() == false);
        assert(x.top() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(5);
        x.pop();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(5);
        x.push(6);
        x.pop();

        // VERIFY
        assert(x.empty() == false);
        assert(x.top() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');

        // VERIFY
        assert(x.empty() == false);
        assert(x.top() == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        x.pop();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('b');
        x.push('a');
        x.pop();

        // VERIFY
        assert(x.empty() == false);
        assert(x.top() == 'b');
    }    

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("String");

        // VERIFY
        assert(x.empty() == false);
        assert(x.top() == "String");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("TestString");
        x.pop();

        // VERIFY
        assert(x.empty() == true);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push("String");
        x.push("NewString");
        x.pop();

        // VERIFY
        assert(x.empty() == false);
        assert(x.top() == "String");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing push and pop functions." << std::endl;
    return 0;
    
}
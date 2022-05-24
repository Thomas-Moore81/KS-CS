//  Stack class test program
//
//  Tests: push, pop, assignment, empty, and top
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
        stack<int>  lhs;
        lhs.push(5);

        stack<int> rhs;

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 5);

        assert(rhs.empty() == false);
        assert(rhs.top() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  lhs;
        lhs.push(5);

        lhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 5);
        
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  lhs;
        
        stack<int> rhs;
        rhs.push(5);

        lhs = rhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 5);

        assert(rhs.empty() == false);
        assert(rhs.top() == 5);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  lhs;
        lhs.push(6);

        stack<int> rhs;
        rhs.push(7);

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 6);

        assert(rhs.empty() == false);
        assert(rhs.top() != 7);
        assert(rhs.top() == 6);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        lhs.push('A');

        stack<char> rhs;

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 'A');

        assert(rhs.empty() == false);
        assert(rhs.top() == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        lhs.push('A');

        lhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        
        stack<char> rhs;
        rhs.push('A');

        lhs = rhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 'A');

        assert(rhs.empty() == false);
        assert(rhs.top() == 'A');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        lhs.push('B');

        stack<char> rhs;
        rhs.push('A');

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == 'B');

        assert(rhs.empty() == false);
        assert(rhs.top() != 'A');
        assert(rhs.top() == 'B');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("First");

        stack<String> rhs;

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == "First");

        assert(rhs.empty() == false);
        assert(rhs.top() == "First");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("First");

        lhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == "First");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        
        stack<String> rhs;
        rhs.push("First");

        lhs = rhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == "First");

        assert(rhs.empty() == false);
        assert(rhs.top() == "First");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("First");

        stack<String> rhs;
        rhs.push("Second");

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == "First");

        assert(rhs.empty() == false);
        assert(rhs.top() != "Second");
        assert(rhs.top() == "First");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("12345");

        stack<String> rhs;
        rhs.push("Second");

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == "12345");

        assert(rhs.empty() == false);
        assert(rhs.top() != "Second");
        assert(rhs.top() == "12345");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("!@#$%");

        stack<String> rhs;
        rhs.push("Second");

        rhs = lhs;

        // VERIFY
        assert(lhs.empty() == false);
        assert(lhs.top() == "!@#$%");

        assert(rhs.empty() == false);
        assert(rhs.top() != "Second");
        assert(rhs.top() == "!@#$%");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing assignmnet operator." << std::endl;
    return 0;
}
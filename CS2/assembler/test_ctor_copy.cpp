//  Stack class test program
//
//  Tests: copy constructor, push, and pop
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
        lhs.push(4);
        
        stack<int> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  lhs;
        lhs.push(4);
        lhs.push(8);
        lhs.push(50);
        
        stack<int> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<int>  lhs;
        lhs.push(4);
        lhs.push(8);
        lhs.push(50);
        lhs.pop();
        
        stack<int> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        lhs.push('A');
        
        stack<char> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        lhs.push('A');
        lhs.push('B');
        
        stack<char> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<char>  lhs;
        lhs.push('A');
        lhs.push('B');
        lhs.push('D');
        lhs.pop();
        
        stack<char> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("StringTest!");
        
        stack<String> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("StringTest!");
        lhs.push("BiggerStringTests@#");
        
        stack<String> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("StringTest!");
        lhs.push("BiggerStringTests@#");
        lhs.push("Deleted");
        lhs.pop();
        
        stack<String> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        stack<String>  lhs;
        lhs.push("StringTest!");
        lhs.push("BiggerStringTests@#");
        lhs.push("Deleted");
        lhs.pop();
        lhs.push("1234567891011121314151617181920");
        lhs.push("!@#$%^&*()_+=-");

        stack<String> copylhs(lhs);

        // VERIFY
        assert(lhs.top() == copylhs.top());
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy constructor." << std::endl;
    return 0;
}
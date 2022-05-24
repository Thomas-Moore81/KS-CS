//  String class test program
//
//  Name:   test_lessThan
//  Tests: Tests if lhs is less than or equal to rhs using ==, <, >, >=, and <=
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
        String  left('a');
        String  right("b");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == 'a');
        assert(right  == "b");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("ad");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "a");
        assert(right  == "ad");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("abc");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "a");
        assert(right  == "abc");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("do");
        String  right("p");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "do");
        assert(right  == "p");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("to");
        String  right("two");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "to");
        assert(right  == "two");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("cat");
        String  right("cbt");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "cat");
        assert(right  == "cbt");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("dag");
        String  right("dog");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "dag");
        assert(right  == "dog");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("A");
        String  right("a");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "A");
        assert(right  == "a");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("!");
        String  right("a");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "!");
        assert(right  == "a");
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Hello");
        String  right("Hillo");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "Hello");
        assert(right  == "Hillo");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Chocolate");
        String  right("chocolate");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "Chocolate");
        assert(right  == "chocolate");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("candy");
        String  right("candz");

        // TEST
        String result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "candy");
        assert(right  == "candz");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('a');
        String  right('a');

        // TEST
        String result = (left <= right);

        // VERIFY
        assert(result == true);
        assert(left   == 'a');
        assert(right  == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Testing For Spaces, Symbols, and Capitols");
        String  right("Testing For Spaces, Symbols, and Capitols");

        // TEST
        String result = (left <= right);

        // VERIFY
        assert(result == true);
        assert(left   == "Testing For Spaces, Symbols, and Capitols");
        assert(right  == "Testing For Spaces, Symbols, and Capitols");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("A");

        // TEST
        String result = (left > right);

        // VERIFY
        assert(result == true);
        assert(left   == "a");
        assert(right  == "A");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("ad");
        String  right("a");

        // TEST
        String result = (left > right);

        // VERIFY
        assert(result == true);
        assert(left   == "ad");
        assert(right  == "a");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("!");

        // TEST
        String result = (left > right);

        // VERIFY
        assert(result == true);
        assert(left   == "a");
        assert(right  == "!");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left('a');
        String  right('a');

        // TEST
        String result = (left >= right);

        // VERIFY
        assert(result == true);
        assert(left   == 'a');
        assert(right  == 'a');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Testing For Spaces, Symbols, and Capitols");
        String  right("Testing For Spaces, Symbols, and Capitols");

        // TEST
        String result = (left >= right);

        // VERIFY
        assert(result == true);
        assert(left   == "Testing For Spaces, Symbols, and Capitols");
        assert(right  == "Testing For Spaces, Symbols, and Capitols");
    }

    std::cout << "Done testing less than operator." << std::endl;
    return 0;
}
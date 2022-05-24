//  String class test program
//
//  Name:   test_concat
//  Tests: Tests +, =+, and uses ==
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
        String  result("ab");
        

        // TEST
        (result += result);

        // VERIFY
        std::cout << result << std::endl;
        assert(result == "abab");
        
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left;
        String  right;

        // TEST
        String result = (left += right);

        // VERIFY
        assert(result == "");
        assert(left   == "");
        assert(right  == "");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("b");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "ab");
        assert(left   == "a");
        assert(right  == "b");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("Bc");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "aBc");
        assert(left   == "a");
        assert(right  == "Bc");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("po");
        String  right('p');

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "pop");
        assert(left   == "po");
        assert(right  == "p");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Ki");
        String  right("ra");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "Kira");
        assert(left   == "Ki");
        assert(right  == "ra");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("se");
        String  right("ven");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "seven");
        assert(left   == "se");
        assert(right  == "ven");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("pop");
        String  right("pop");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "poppop");
        assert(left   == "pop");
        assert(right  == "pop");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("daw");
        String  right("g");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "dawg");
        assert(left   == "daw");
        assert(right  == "g");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("tie");
        String  right("ne");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "tiene");
        assert(left   == "tie");
        assert(right  == "ne");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("10000000000000000000000000000000000000000000000000");
        String  right("10000000000000000000000000000000000000000000000000");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "1000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000");
        assert(left   == "10000000000000000000000000000000000000000000000000");
        assert(right  == "10000000000000000000000000000000000000000000000000");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        String  right("1");

        // TEST
        String result = (left + right);

        // VERIFY
        assert(result == "10000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001");
        assert(left   == "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");
        assert(right  == "1");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("a");
        String  right("b");

        // TEST
        String result = (left += right);

        // VERIFY
        assert(result == "ab");
        assert(left   == "ab");
        assert(right  == "b");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("ab");
        String  right("c");

        // TEST
        String result = (left += right);

        // VERIFY
        assert(result == "abc");
        assert(left   == "abc");
        assert(right  == "c");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Bigger");
        String  right("Words");

        // TEST
        String result = (left += right);

        // VERIFY
        assert(result == "BiggerWords");
        assert(left   == "BiggerWords");
        assert(right  == "Words");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("Bigger");
        String  right("Words");
        String  middle("and");
        // TEST
        String result = (left + right + middle);

        // VERIFY
        assert(result == "BiggerWordsand");
        assert(left   == "Bigger");
        assert(right  == "Words");
        assert(middle == "and");
    }
    std::cout << "Done testing concatenation." << std::endl;
    return 0;
}
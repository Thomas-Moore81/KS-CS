//  String class test program
//
//  Name: test_swap_assign.cpp
//  Tests: swap function and ==
//

#include "string.hpp"
#include <cassert>
#include <iostream> 
 
int main() {

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("abc");
        String  right("abd");

        // TEST
        left.swap(right);

        // VERIFY
        
        assert(left   == "abd");
        assert(right  == "abc");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("ALongString");
        String  right("AnEvenLongerString");

        // TEST
        left.swap(right);

        // VERIFY
        
        assert(left   == "AnEvenLongerString");
        assert(right  == "ALongString");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("TestingSpecialChar;:!@#$%^&*");
        String  right("Swap Speical Chars");

        // TEST
        left.swap(right);

        // VERIFY
        
        assert(left   == "Swap Speical Chars");
        assert(right  == "TestingSpecialChar;:!@#$%^&*");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("");
        String  right("");

        // TEST
        left.swap(right);

        // VERIFY
        
        assert(left   == "");
        assert(right  == "");
    }

    std::cout << "Done testing swap function." << std::endl;
    return 0;
}
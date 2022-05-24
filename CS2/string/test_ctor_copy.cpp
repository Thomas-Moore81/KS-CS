//  String class test program
//
//  Name: test_ctor_copy
//  Tests: Tests character array constructor and uses ==
//

#include "string.hpp"
#include <cassert>
#include <iostream> 
 
int main() {
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("abc");
        String rhs("");
        

        // TEST
        str = rhs;

        // VERIFY
        assert(str == rhs);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("ThisIsGoingToBeAReallyLongStringForNoReasonOtherThanToTest");
        String rhs("");
        

        // TEST
        str = rhs;

        // VERIFY
        assert(str == rhs);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String str("");
        String rhs("");
        

        // TEST
        str = rhs;

        // VERIFY
        assert(str == rhs);
    }

    std::cout << "Done testing copy constructor." << std::endl;
    return 0;
}
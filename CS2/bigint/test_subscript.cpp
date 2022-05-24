// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  
        assert(digit == 4);
    }

    {
        // Setup
        bigint bi(50);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 50);  
        assert(digit == 0);
    }

    {
        // Setup
        bigint bi(125);

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi    == 125);  
        assert(digit == 2);
    }

    {
        // Setup
        bigint bi(4568);

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi    == 4568);  
        assert(digit == 4);
    }

    {
        // Setup
        bigint bi(65427);

        // Test 
        int digit = bi[4];

        // Verify
        assert(bi    == 65427);  
        assert(digit == 6);
    }

    {
        // Setup
        bigint bi(12345678);

        // Test 
        int digit = bi[5];

        // Verify
        assert(bi    == 12345678);  
        assert(digit == 3);
    }
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}


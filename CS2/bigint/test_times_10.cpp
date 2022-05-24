// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(5);

        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 50);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(4);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 400);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(10);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 1000);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.times10(4);

        // Verify
        assert(bi == 30000);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.times10(1);

        // Verify
        assert(bi == 0);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(8);

        // Test 
        bi = bi.times10(8);

        // Verify
        assert(bi == 800000000);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(600);

        // Test 
        bi = bi.times10(2);

        // Verify
        assert(bi == 60000);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(4);

        // Test 
        bi = bi.times10(50);

        // Verify
        assert(bi == "400000000000000000000000000000000000000000000000000");  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(7);

        // Test 
        bi = bi.times10(100);

        // Verify
        assert(bi == "70000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(8);

        // Test 
        bi = bi.times10(150);

        // Verify
        assert(bi == "8000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");  
    }
    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}


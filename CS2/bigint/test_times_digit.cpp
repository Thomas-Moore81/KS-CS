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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(50);

        // Test 
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 250);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(500);

        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == 1500);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(9);

        // Test 
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 81);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(8);

        // Test 
        bi = bi.timesDigit(8);

        // Verify
        assert(bi == 64);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(25);

        // Test 
        bi = bi.timesDigit(7);

        // Verify
        assert(bi == 175);  
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(5);

        // Test 
        bi = bi.timesDigit(6);

        // Verify
        assert(bi == 30);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(400);

        // Test 
        bi = bi.timesDigit(4);

        // Verify
        assert(bi == 1600);  
    }

    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(30);

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 60);  
    }
    

    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}


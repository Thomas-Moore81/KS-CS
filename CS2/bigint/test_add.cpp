// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(123);
      bigint right(456);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 123);
      assert(right  == 456);
      assert(result == 579);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(500);
      bigint right(50);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 500);
      assert(right  == 50);
      assert(result == 550);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(999);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 999);
      assert(right  == 1);
      assert(result == 1000);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(50);
      bigint right(100);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 50);
      assert(right  == 100);
      assert(result == 150);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(25);
      bigint right(75);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 25);
      assert(right  == 75);
      assert(result == 100);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(21);
      bigint right(4);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 21);
      assert(right  == 4);
      assert(result == 25);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(500);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 500);
      assert(result == 501);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(5);
      bigint right(55);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 5);
      assert(right  == 55);
      assert(result == 60);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(560);
      bigint right(561);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 560);
      assert(right  == 561);
      assert(result == 1121);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(2147483647);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 2147483647);
      assert(right  == 1);
      assert(result == "2147483648");
    }

    std::cout << "Done with testing addition." << std::endl;
    return 0;
}


//  String class test program
//
//  Name:   test_subscript
//  Tests: Tests the overloaded subscript operator using == and []
//

#include "string.hpp"
#include <cassert>
#include <iostream> 
 
//===========================================================================
int main ()
{
   {
        // Setup
        String str("word");

        // Test 
        char input = str[0];

        // Verify
        assert(str    == "word");  
        assert(input == 'w');
    }

    {
        // Setup
        String str("single");

        // Test 
        char input = str[1];

        // Verify
        assert(str    == "single");  
        assert(input == 'i');
    }

    {
        // Setup
        String str("dog");

        // Test 
        char input = str[2];

        // Verify
        assert(str    == "dog");  
        assert(input == 'g');
    }

    {
        // Setup
        String str("LongWord");

        // Test 
        char input = str[4];

        // Verify
        assert(str    == "LongWord");  
        assert(input == 'W');
    }

    {
        // Setup
        String str('1');

        // Test 
        char input = str[0];

        // Verify
        assert(str    == '1');  
        assert(input == '1');
    }

    {
        // Setup
        String str("with space");

        // Test 
        char input = str[5];

        // Verify
        assert(str    == "with space");  
        assert(input == 's');
    }

    {
        // Setup
        String str("100000000000000000000000000000000000000000000000007");

        // Test 
        char input = str[50];

        // Verify
        assert(str    == "100000000000000000000000000000000000000000000000007");  
        assert(input == '7');
    }

    {
        // Setup
        String str("10000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000005");

        // Test 
        char input = str[100];

        // Verify
        assert(str    == "10000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000005");  
        assert(input == '5');
    }

    {
        // Setup
        String str("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000056");

        // Test 
        char input = str[200];

        // Verify
        assert(str    == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000056");  
        assert(input == '6');
    }

    {
        // Setup
        String str("100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000056000000000000000000000000000000000000000000000000000037");

        // Test 
        char input = str[254];

        // Verify
        assert(str    == "100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000056000000000000000000000000000000000000000000000000000037");  
        assert(input == '7');
    }

    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0; 
}
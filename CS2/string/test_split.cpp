//  String class test program
//
//  Name: test_split
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream> 
#include <vector>
 
//===========================================================================
int main ()
{
    {
    
    //setup
    String s("abc ef gh");
    std::vector<String> expected = {"abc", "ef", "gh"};

    //test
    std::vector<String> result = s.split(' ');

    //verification
    assert(result == expected);
    }

    {
    //setup
    String s("-a--b-");
    std::vector<String> expected = {"", "a", "", "b", ""};

    //test
    std::vector<String> result = s.split('-');
    
    //verification
    assert(result == expected);
    }

    {
    //setup
    String s("abc  gh");
    std::vector<String> expected = {"abc", "", "gh"};

    //test
    std::vector<String> result = s.split(' ');

    //verification
    assert(result == expected);
    }

    {
    //setup
    String s("Test$Char");
    std::vector<String> expected = {"Test", "Char"};

    //test
    std::vector<String> result = s.split('$');

    //verification
    assert(result == expected);
    }

    {
    //setup
    String s("kkd55");
    std::vector<String> expected = {"kk", "55"};

    //test
    std::vector<String> result = s.split('d');
    
    //verification
    assert(result == expected);
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    std::cout << "Done testing split function." << std::endl;
    return 0;
}
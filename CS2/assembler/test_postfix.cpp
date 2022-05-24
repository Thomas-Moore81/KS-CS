#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"
#include "utilities.hpp"

int main() {
    
    {
        std::ifstream in("testset_postfix.txt");
        infixToPostfix(in);     
    }
    
    std::cout << "Done testing postfix conversion" << std::endl;
}
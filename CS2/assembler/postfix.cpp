#include "stack.hpp"
#include "utilities.hpp"
#include <fstream>
#include <iostream>


int main(int argc, char *argv[]) {

    if (argc == 1) {
        std::cerr << "No input file in arguments, please specificy an input file." << std::endl;
    }

    std::ifstream infixFile(argv[1]);

    if (!infixFile) {
        std::cerr << "File containing infix could not be read or opened." << std::endl;
    }

    if (argc == 2) {

        while (!infixFile.eof()) {
            String infixValue1 = infixToPostfix(infixFile, std::cout);
            std::cout << infixValue1 << std::endl;
        }
    }
    
    
    if (argc == 3) {
        std::ofstream postfixFile(argv[2]);

        if (!postfixFile) {
         std::cerr << "Postfix file can not be opened." << std::endl;
        } else {
            while (!infixFile.eof()) {
            String infixValue2 = infixToPostfix(infixFile, postfixFile);
            postfixFile << infixValue2 << std::endl;
            }
        }
        postfixFile.close();
    }
    

    infixFile.close();
    

}


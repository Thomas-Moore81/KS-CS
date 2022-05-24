/**
 * Thomas Moore
 * assembler
 * CS 23001
 */

#include "stack.hpp"
#include "utilities.hpp"
#include <fstream>
#include <iostream>


int main(int argc, char *argv[]) {

    if (argc == 1) {
        std::cerr << "No input file in arguments, please specificy an input file." << std::endl;
    }

    std::ifstream inputFile(argv[1]);

    if (!inputFile) {
        std::cerr << "File containing data could not be read or opened." << std::endl;
    }

    if (argc == 2) {
        while (!inputFile.eof()) {
            
            std::cout << "Infix Expression: ";
            String infixToPostValue = infixToPostfix(inputFile, std::cout);

            if(inputFile.eof()) break;

            std::cout << std::endl;
            std::cout << "Postfix Expression: " << infixToPostValue << std::endl;
            
            std::cout << toAssembly(infixToPostValue) << std::endl;

        }
        
    }
    
    std::ofstream assemblyFile(argv[2]);
    if (argc == 3) {
        while (!inputFile.eof()) {
            
            assemblyFile << "Infix Expression: ";
            String infixToPostValue = infixToPostfix(inputFile, assemblyFile);

            if(inputFile.eof()) break;

            assemblyFile << std::endl;
            assemblyFile << "Postfix Expression: " << infixToPostValue << std::endl;
            
            assemblyFile << toAssembly(infixToPostValue) << std::endl;

        }
    }
    

    assemblyFile.close();
    inputFile.close();
}

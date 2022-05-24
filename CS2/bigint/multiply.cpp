/**
 * Thomas Moore
 * bigint
 * CS 23001
 */

// This program will take two bigints from a file and will multiply them together


#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {

    std::ifstream file("data1-2.txt");
    if (!file) {
        std::cerr << "Could not open data1-2.txt, exiting." << std::endl;
        exit(1);
    }
        bigint firstBigInt;
        bigint secondBigInt;
        bigint product;

    while (!file.eof()) {
        
        file >> firstBigInt;
        if (file.eof()) {
            break;
        }
        
        file >> secondBigInt;

        

        std::cout << "The first bigint number is: " << firstBigInt << std::endl;
        std::cout << std::endl;
        std::cout << "The second bigint number is: " << secondBigInt << std::endl;
        std::cout << std::endl;

        product = firstBigInt * secondBigInt;
        std::cout << "The product of both bigints added together is: " << product << std::endl;
        std::cout << std::endl;


    }
    file.close();

}
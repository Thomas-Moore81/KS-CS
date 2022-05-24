/**
 * Thomas Moore
 * bigint
 * CS 23001
 */

// This program will take two bigints from a file and will add them together

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"


int main() {

    std::ifstream file("data1-1.txt");
    if (!file) {
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }

    bigint firstBigInt;
    bigint secondBigInt;
    bigint sum;

    while(!file.eof()) {
    
        file >> firstBigInt;
        file >> secondBigInt;

        if(firstBigInt == 0 && secondBigInt == 0) {
            break;
        }

        std::cout << "The first bigint number is:" << firstBigInt << std::endl;
        std::cout << std::endl;
        std::cout << "The second bigint number is:" << secondBigInt << std::endl;
        std::cout << std::endl;

        sum = firstBigInt + secondBigInt;
        std::cout << "The sum of both bigints added together is:" << sum << std::endl;
        std::cout << std::endl;

    } 

    file.close();

}
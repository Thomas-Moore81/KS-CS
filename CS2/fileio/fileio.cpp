/**
 * Thomas Moore
 * fileio
 * CS 23001
 */

// This is a program that uses functions to read everything up to a " " and everything up to a ":"

#include <iostream>
#include <fstream>
#include <string>

void readingText();
void readAddInt();


int main() {

    readingText();
    readAddInt();
    

}

void readingText() {
    std::ifstream file ("fileio-text.txt");
        if (!file) {
            std::cerr << "Could not open fileio-text.txt, exiting." << std::endl;
            exit(1);
    }

    char text;
    file.get(text);

    while (text != ' ' && !file.eof()) {
        std::cout << text;
        file.get(text);
    }
    std::cout << std::endl;

}

void readAddInt(){
    std::ifstream file ("fileio-data-1.txt");
    if (!file) {
        std::cerr << "Could not open fileio-data1-1.txt, exiting." << std::endl;
        exit(1);
    }

    int number1;
    int number2;
    int result;
    char semicolon;

    file >> number1 >> semicolon >> number2 >> semicolon;

    result = number1 + number2;
    std::cout << "result: " << result << std::endl;


}
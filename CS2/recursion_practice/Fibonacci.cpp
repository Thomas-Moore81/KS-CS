// Thomas Moore
// cs 23001
// Recursive Practice by making a fibonacci function

#include <iostream>


int fibonacci(int number) {

    if (number == 1) {
        return 1;
    }
    if (number == 0) {
        return 0;
    }
    return fibonacci(number - 1) + fibonacci(number - 2);

}


int main() {
    std::cout << "Enter a number: " << std::endl;
    int num;
    std::cin >> num;
    std::cout << "The Fibonacci numbers are: ";
    for (int i = 0; i <= num; i++) {
        std::cout << fibonacci(i) << ", ";
    }
    std::cout << std::endl;
    
}
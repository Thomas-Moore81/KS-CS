/**
 * Thomas Moore
 * bigint
 * CS 23001
 */

// This program will make an array that can take any size positive integer.

#include "bigint.hpp"
#include <iostream>


bigint::bigint() {
	for (int i = 0; i < capacity; ++i)
		bigint_Array[i] = 0;

}

bigint::bigint(const char bigchar_Array[]):bigint () {
	int inputSize = 0;

	while (bigchar_Array[inputSize] != '\0') {
		++inputSize;
	}

	for (int i = inputSize - 1; i > -1; --i) {
		
		bigint_Array[inputSize - i - 1] = bigchar_Array[i] - '0';
		
	}
		

}

bool bigint::operator==(const bigint& rhs) const {
	for (int i = 0; i < capacity; i++) {
		if (bigint_Array[i] != rhs.bigint_Array[i])
			return false;
	}

	return true;
}

std::ostream& operator<<(std::ostream& output, const bigint& rhs) { 
	bool noZeros = true;
	int count = 0;

	for (int i = capacity - 1; i >= 0; --i) {

		if (count == 80) {
					output << std::endl;
		}

		if (rhs.bigint_Array[i] != 0 && noZeros == true) {
			output << rhs.bigint_Array[i];
			noZeros = false;
			++count;
		}

		else if (noZeros == false) {
				
			output << rhs.bigint_Array[i];
			++count;
		}

		if (rhs.operator==(0)) {
                    output << 0;
                       break;

		}

	}
	
	return output;
}

void bigint::debugPrint(std::ostream& print) const {
	for (int i = capacity - 1; i >= 0; --i)
		print << bigint_Array[i] << " | ";

}

bigint::bigint(int numInput):bigint() {
	int input = numInput;	
	for (int i = 0; i < capacity; ++i) {

		bigint_Array[i] = input % 10;
		input /= 10;
		
	}

}

bigint bigint::operator+(const bigint& rhs) const {
	bigint sum;
	int temp;
	int overflow = 0;

	for (int i = 0; i < capacity; ++i) {
		temp = bigint_Array[i] + rhs.bigint_Array[i] + overflow;
		overflow = temp / 10;
		sum.bigint_Array[i] = temp % 10;
	}
	return sum;
}

std::istream& operator>>(std::istream& input, bigint& rhs) {
	int count = 0;	
	char CharArray[capacity];

	while (!input.eof()) {
		char validNumber;

		input.get(validNumber);
		if (validNumber <= 57 && validNumber >= 48) {
			CharArray[count] = validNumber;
			++count;
		}

		if (validNumber == ';') {
			break;
		}
		
	}	
	CharArray[count] = '\0';
	rhs = bigint(CharArray);

	return input;
}

int bigint::operator[](const int& index) const {
	return bigint_Array[index];
}

bigint bigint::timesDigit (int multiplier) const{

	bigint multiply;

	for (int i = 0; i < multiplier; ++i) {
		multiply = multiply + *this;
		std::cout << i << std::endl;
	}
	return multiply;
}

bigint bigint::times10(int exponent) const{
	bigint multiply10;
	
	for (int i = 0; i < capacity; ++i) {
		multiply10.bigint_Array[i + exponent] = bigint_Array[i];
	}
	return multiply10;
}

bigint bigint::operator*(bigint& rhs) const{

	bigint product = 0;

	for (int i = 0; i < capacity - 1; ++i) {
		product = product + (timesDigit(rhs.bigint_Array[i])).times10(i);
	}
	return product;
}

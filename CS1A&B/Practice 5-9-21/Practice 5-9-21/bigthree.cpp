// holds definitions for big three
// Definitions
// Thomas Moore
// 5/9/2021

#include "bigthree.hpp"
#include <iostream>

BigThree::BigThree() { // definition for void constructor
	size_ = 0;
	dynArray_ = new int[size_]; // dynamic memory allocation
}

BigThree::BigThree(const BigThree& original) { // definition for copy constructor
	size_ = original.size_;
	dynArray_ = new int[size_];
	for (int i = 0; i < size_; ++i)
		dynArray_[i] = original.dynArray_[i];

}
										// definition for assignment overloading
BigThree& BigThree::operator= (const BigThree& rhs) { 
	if (this != &rhs) { // if both are not the same. Self assignment protection
		size_ = rhs.size_;
		delete[] dynArray_;
		dynArray_ = new int[size_];
		for (int i = 0; i < size_; ++i)
			dynArray_[i] = rhs.dynArray_[i];

	}
	return *this; // returns the left hand side 
}

BigThree::~BigThree() { // definition for destructor
	delete[] dynArray_;

}

void BigThree::addNumber(int num) {
	int* tmp = new int[size_ + 1];
	for (int i = 0; i < size_; ++i)
		tmp[i] = dynArray_[i];
	tmp[size_] = num;
	delete[] dynArray_;
	dynArray_ = tmp;
	++size_;


}

void BigThree::print() {
	for (int i = 0; i < size_; ++i) {
		std::cout << dynArray_[i] << " ";
	}
	std::cout << std::endl; 
}

void printFactorial(int n) { // recursion example 
	if (n > 1) {
		std::cout << n << "*";

		printFactorial(n - 1);
	}
	else {
		std::cout << 1;

	}

}
